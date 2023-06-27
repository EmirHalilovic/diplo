#include "adminwindow.h"
#include "login.h"
#include "qlabel.h"
#include "qtablewidget.h"
#include "ui_adminwindow.h"
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include <QWidget>
#include <QFile>

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    setWindowTitle("Admin Window");

    ui->view->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString table2="SELECT Cars.*, Account.User FROM Account JOIN Cars ON Account.ID = Cars_Account.account_id JOIN Cars_Account ON Cars.ID = Cars_Account.car_id";
    // Create a database connection


    QSqlDatabase db = QSqlDatabase::database(); // Use the existing database connection
    qDebug() << "Is connection opened" << db.isOpen();

    if (!db.open()) {
        qDebug() << "Failed to open database!";
    }

    QSqlQuery query("SELECT User FROM Account");
    while (query.next()) {
        QString user = query.value(0).toString();
        ui->userCombobox->addItem(user);
    }

    QObject::connect(ui->combo, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=]() {
        QString table = ui->combo->currentText();
        QSqlQueryModel *model = new QSqlQueryModel(ui->view);
        if(table == "Cars_Account") {
            model->setQuery(table2);
               ui->userCombobox->setEnabled(true);
        } else {
            model->setQuery("SELECT * FROM " + table);
             ui->userCombobox->setEnabled(false);
        }
        ui->view->setModel(model);
        connect(ui->userCombobox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &AdminWindow::updateTableView);
    });

    // Add the ability to exit the Admin Window and go back to the login screen
    QObject::connect(ui->exitButton, &QPushButton::clicked, this, [=]() {
        qDebug() << "Data stored successfully";
        logIn *log = new logIn;
        log->show();
        close();
    });
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::updateTableView(int index)
{
    Q_UNUSED(index);
    QString table = ui->combo->currentText();
    QString selectedUser = ui->userCombobox->currentText();  // Assuming you have a combobox for selecting the user

    if (table == "Cars_Account") {
        QString queryStr = QString("SELECT Cars.*, Account.User "
                                   "FROM Account "
                                   "JOIN Cars ON Account.ID = Cars_Account.account_id "
                                   "JOIN Cars_Account ON Cars.ID = Cars_Account.car_id "
                                   "WHERE Account.User = :user");
        QSqlQuery query;
        query.prepare(queryStr);
        query.bindValue(":user", selectedUser);
        qDebug() << "Failed to execute query:" << selectedUser;
        if (query.exec()) {
            QSqlQueryModel *model = new QSqlQueryModel(ui->view);
            model->setQuery(std::move(query));
            ui->view->setModel(model);

            // Disconnect previous connections, if any
            disconnect(ui->view, SIGNAL(clicked(const QModelIndex&)), this, SLOT(onTableViewClicked(const QModelIndex&)));

            // Connect the clicked signal of the table view to the custom slot
            connect(ui->view, SIGNAL(clicked(const QModelIndex&)), this, SLOT(onTableViewClicked(const QModelIndex&)));
        } else {
            qDebug() << "Failed to execute query:" << query.lastError().text();
        }
    } else {
        QSqlQueryModel *model = new QSqlQueryModel(ui->view);
        model->setQuery("SELECT * FROM " + table);
        ui->view->setModel(model);

        // Disconnect previous connections, if any
        disconnect(ui->view, SIGNAL(clicked(const QModelIndex&)), this, SLOT(onTableViewClicked(const QModelIndex&)));
    }
}
void AdminWindow::onTableViewClicked(const QModelIndex& index)
{
    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->view->model());
    if (!model) {
        return;
    }

    int row = index.row();
    int columnCount = model->columnCount();
    if (row >= 0 && row < model->rowCount()) {
        for (int column = 0; column < columnCount; ++column) {
            QString value = model->data(model->index(row, column)).toString();
            QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->verticalLayout->itemAt(column)->layout());
            if (layout && layout->count() > 0) {
                QLineEdit* lineEdit = qobject_cast<QLineEdit*>(layout->itemAt(0)->widget());
                if (lineEdit) {
                    lineEdit->setText(value);
                }
            }
        }
    }
}



void AdminWindow::on_updateButton_clicked()
{
    QString table = ui->combo->currentText();

    QSqlTableModel* model = qobject_cast<QSqlTableModel*>(ui->view->model());
    if (!model) {
        return;
    }

    int row = ui->view->currentIndex().row();
    int columnCount = model->columnCount();
    if (row >= 0 && row < model->rowCount()) {
        for (int column = 0; column < columnCount; ++column) {
            QString value = qobject_cast<QLineEdit*>(ui->verticalLayout->itemAt(column + 1)->widget())->text();
            model->setData(model->index(row, column), value);
        }

        if (model->submitAll()) {
            QMessageBox::information(this, "Update", "Row updated successfully.");
        } else {
            QMessageBox::critical(this, "Update", "Failed to update row: " + model->lastError().text());
        }
    } else {
        QMessageBox::information(this, "Update", "Invalid row index.");
    }
}



void AdminWindow::on_deleteButton_clicked()
{
    QString table = ui->combo->currentText();
    QModelIndexList selectedIndexes = ui->view->selectionModel()->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::information(this, "Delete", "No row selected.");
        return;
    }

    int row = selectedIndexes.first().row(); // Assuming you want to delete the first selected row

    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable(table);
    model->select();

    if (row >= 0 && row < model->rowCount()) {
        model->removeRow(row);
        if (model->submitAll()) {
            QMessageBox::information(this, "Delete", "Row deleted successfully.");
        } else {
            QMessageBox::critical(this, "Delete", "Failed to delete row: " + model->lastError().text());
        }
    } else {
        QMessageBox::information(this, "Delete", "Invalid row index.");
    }
}
