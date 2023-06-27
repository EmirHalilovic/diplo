#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "login.h"
#include <QtWidgets>
#include <QPixmap>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QPushButton>
#include <QString>
#include <QVector>
#include <QtCore>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QFile>

MainWindow::MainWindow(QString tablename,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile styleSheetFile("C:/Users/win10/Desktop/diplomski-rad-main/radd/Integrid.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);
    buttonValue = 0;
    QSqlQuery query,querys;

          this->tablename = tablename;
  setWindowTitle(tablename);

  QSqlQueryModel *model = new QSqlQueryModel();
  query.exec("SELECT Brand, Fuel, Mileage, Age, Engine, Price FROM Cars");
  model->setQuery(std::move(query));
  ui->dbtable->setModel(model);

  QSqlQueryModel *soldTableModel = new QSqlQueryModel();
  if (querys.exec("SELECT cr.Brand, cr.Fuel, cr.Mileage, cr.Age, cr.Engine, cr.Price, ca.quantity "
                 "FROM Cars AS cr "
                 "INNER JOIN Cars_Account AS ca ON cr.ID = ca.car_id "
                 "INNER JOIN Account AS ac ON ac.ID = ca.account_id "
                 "WHERE ac.User = '" + tablename + "'")) {
      soldTableModel->setQuery(querys.executedQuery());
      ui->soldtable->setModel(soldTableModel);
  } else {
      qDebug() << "Error executing query for soldtable: " << querys.lastError().text();
  }

  }

  MainWindow::~MainWindow()
  {
      delete ui;

  }

  void MainWindow::on_logout_clicked()
  {
      logIn *log = new  logIn;
     log->show();
      hide();

  }




  void MainWindow::on_aboutb_clicked()
  {
   About *aub = new About(tablename);
   aub->show();
  hide();
  }


  void MainWindow::on_superb_clicked()
  {
      if(buttonValue == 0) {
              buttonValue = 1;

              QFont font = ui->superb->font();
              font.setWeight(QFont::Bold);
              ui->superb->setFont(font);

              QString style = "QPushButton { background-color: rgba(70,162,218,50%); }";
              ui->superb->setStyleSheet(style);
          }
          else {
              buttonValue = 0;
              QFont font = ui->superb->font();
              font.setWeight(QFont::Normal);
              ui->superb->setFont(font);
          }

  }


 /* void MainWindow::on_tableView_activated(const QModelIndex &index)
  {
      QSqlTableModel *model = new QSqlTableModel();
      model->setTable("Cars");
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);
      model->select();
      QTableView *tableView = new QTableView();
      tableView->setModel(model);
      tableView->show();
      if (model->lastError().isValid()) {
          qDebug() << "Error: " << model->lastError();
      }
  }
*/

  void MainWindow::on_buttonLoad_clicked()
  {
      QSqlQueryModel m;
  }



  void MainWindow::on_kupiBtn_clicked()
  {
      // Get the selected row from the database table
      int index = ui->dbtable->currentIndex().row();
      if (index < 0) {
          QMessageBox::warning(this, "No selection", "Please select a row from the table.");
          return;
      }

      // Get the data for each column in the selected row
      QString brand = ui->dbtable->model()->index(index, 0).data().toString();
      QString fuel = ui->dbtable->model()->index(index, 1).data().toString();
      int mileage = ui->dbtable->model()->index(index, 2).data().toInt();
      int age = ui->dbtable->model()->index(index, 3).data().toInt();
      qreal engine = ui->dbtable->model()->index(index, 4).data().toReal();
      qreal price = ui->dbtable->model()->index(index, 5).data().toReal();


      // Check if the car is already present in the Cars_Account table
      QSqlQuery query;
      query.prepare("SELECT * FROM Cars_Account WHERE car_id = (SELECT ID FROM Cars WHERE Brand = :brand AND Fuel = :fuel AND Mileage = :mileage AND Age = :age AND Engine = :engine AND Price = :price) AND account_id = (SELECT ID FROM Account WHERE User = :user)");
      query.bindValue(":brand", brand);
      query.bindValue(":fuel", fuel);
      query.bindValue(":mileage", mileage);
      query.bindValue(":age", age);
      query.bindValue(":engine", engine);
      query.bindValue(":price", price);
      query.bindValue(":user", tablename);

      if (query.exec() && query.next()) {
          // Car already exists in Cars_Account table, update the quantity
          int carId = query.value("car_id").toInt();
          int accountId = query.value("account_id").toInt();
          int currentQuantity = query.value("quantity").toInt();

          query.prepare("UPDATE Cars_Account SET quantity = quantity + 1 WHERE car_id = (SELECT ID FROM Cars WHERE Brand = :brand AND Fuel = :fuel AND Mileage = :mileage AND Age = :age AND Engine = :engine AND Price = :price) AND account_id = (SELECT ID FROM Account WHERE User = :user)");
          query.bindValue(":brand", brand);
          query.bindValue(":fuel", fuel);
          query.bindValue(":mileage", mileage);
          query.bindValue(":age", age);
          query.bindValue(":engine", engine);
          query.bindValue(":price", price);
          query.bindValue(":user", tablename);

          if (query.exec()) {
              QMessageBox::information(this, "Purchase", "Quantity updated successfully.");
              // Refresh the soldTableModel
              QSqlQueryModel *soldTableModel = new QSqlQueryModel();
              if (query.exec("SELECT cr.Brand, cr.Fuel, cr.Mileage, cr.Age, cr.Engine, cr.Price, ca.quantity "
                             "FROM Cars AS cr "
                             "INNER JOIN Cars_Account AS ca ON cr.ID = ca.car_id "
                             "INNER JOIN Account AS ac ON ac.ID = ca.account_id "
                             "WHERE ac.User = '" + tablename + "'")) {
                  soldTableModel->setQuery(query.executedQuery());
                  ui->soldtable->setModel(soldTableModel);
              } else {
                  qDebug() << "Error executing query for soldtable: " << query.lastError().text();
              }
          } else {
              QMessageBox::critical(this, "Purchase", "Failed to update quantity: " + query.lastError().text());
          }
      } else {
          // Car does not exist in Cars_Account table, insert a new row
          query.prepare("INSERT INTO Cars_Account (car_id, account_id, quantity) VALUES ((SELECT ID FROM Cars WHERE Brand = :brand AND Fuel = :fuel AND Mileage = :mileage AND Age = :age AND Engine = :engine AND Price = :price), (SELECT ID FROM Account WHERE User = :user), 1)");
          query.bindValue(":brand", brand);
          query.bindValue(":fuel", fuel);
          query.bindValue(":mileage", mileage);
          query.bindValue(":age", age);
          query.bindValue(":engine", engine);
          query.bindValue(":price", price);
          query.bindValue(":user", tablename);

          if (query.exec()) {
              QMessageBox::information(this, "Purchase", "Car added to Cars_Account successfully.");
              // Refresh the soldTableModel
              QSqlQueryModel *soldTableModel = new QSqlQueryModel();
              if (query.exec("SELECT cr.Brand, cr.Fuel, cr.Mileage, cr.Age, cr.Engine, cr.Price, ca.quantity "
                             "FROM Cars AS cr "
                             "INNER JOIN Cars_Account AS ca ON cr.ID = ca.car_id "
                             "INNER JOIN Account AS ac ON ac.ID = ca.account_id "
                             "WHERE ac.User = '" + tablename + "'")) {
                  soldTableModel->setQuery(query.executedQuery());
                  ui->soldtable->setModel(soldTableModel);
              } else {
                  qDebug() << "Error executing query for soldtable: " << query.lastError().text();
              }
          } else {
              QMessageBox::critical(this, "Purchase", "Failed to add car to Cars_Account: " + query.lastError().text());
          }
      }
  }




  void MainWindow::on_refreshbutton_clicked()
  {
      QSqlQuery query;
        QString brand = ui->searchText->text();
        QString fuel = ui->comboBox->currentText();
        QString startAge = ui->startage->text();
        QString endAge = ui->endage->text();
        QString startMileage = ui->startmilage->text();
        QString endMileage = ui->endmilage->text();

        QString whereClause = "";

        if (!brand.isEmpty()) {
            whereClause += "Brand LIKE '" + brand + "%' AND ";
        }

        if (!fuel.isEmpty()) {
            whereClause += "Fuel='" + fuel + "' AND ";
        }

        if (ui->useAge->isChecked()) {
            if (!startAge.isEmpty() && !endAge.isEmpty()) {
                whereClause += "Age BETWEEN " + startAge + " AND " + endAge + " AND ";
            }
        }

        if (ui->useMileage->isChecked()) {
            if (!startMileage.isEmpty() && !endMileage.isEmpty()) {
                whereClause += "Mileage BETWEEN " + startMileage + " AND " + endMileage + " AND ";
            }
        }
        if (buttonValue==1) {
              whereClause += "SuperCar=" +  QString::number(buttonValue) + " AND ";
        }

        // Remove the last " AND " from the where clause
        if (whereClause.endsWith(" AND ")) {
            whereClause.chop(5);
        }

        QString queryStr = "SELECT Brand, Fuel, Mileage, Age, Engine,Price FROM Cars";

        if (!whereClause.isEmpty()) {
            queryStr += " WHERE " + whereClause;
        }

   QSqlQueryModel *model = new QSqlQueryModel();
   model->setQuery(std::move(queryStr));

   ui->dbtable->setModel(model);
  }


  void MainWindow::on_useMileage_stateChanged(int state)
  {
      ui->startmilage->setEnabled(state == Qt::Checked);
    ui->endmilage->setEnabled(state == Qt::Checked);

  }


  void MainWindow::on_useAge_stateChanged(int state)
  {
      ui->startage->setEnabled(state == Qt::Checked);
    ui->endage->setEnabled(state == Qt::Checked);
  }






