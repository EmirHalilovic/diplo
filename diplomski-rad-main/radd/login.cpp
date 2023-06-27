#include "login.h"
#include "adminwindow.h"
#include "ui_login.h"
#include<QSqlDatabase>
#include<QtSql/QSqlDatabase>
#include<QtCore>
#include<QtGui>
#include "registracija.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QSettings>
#include <QFile>

logIn::logIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logIn)
{
    ui->setupUi(this);
    setWindowTitle("Welcome");

    QFile styleSheetFile("C:/Users/win10/Desktop/diplomski-rad-main/radd/Integrid.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);

    // Set the default database location
    QString defaultDbLocation = "C:/Users/win10/Desktop/diplomski-rad-main/radd/autosalon.db";

    // Load the previously saved database location from settings
    QSettings settings("AutoSalon", "MyApp");
    dbLocation = settings.value("dbLocation", defaultDbLocation).toString();
    ui->dbLocationLineEdit->setText(dbLocation);
  defaultDbLocation =dbLocation;
    // Set up the database connection
    mydatabase=QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName(dbLocation);
    if(!mydatabase.open())
    {
        ui->stanje->setText("Error");
    }
    else
    {
         ui->stanje->setText("Connected");

    }

}

void logIn::on_Login_clicked()
{
    QString user,pass,ID;
    user=ui->user->text();
    pass=ui->pass->text();

    if(!mydatabase.isOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
        QSqlQuery query;

    if(query.exec("SELECT * FROM Account WHERE User='"+user+"' AND Password='"+pass+"'"))
    {
        int i=0;
        QString role;

        while (query.next())
        {
            i++;
            role = query.value("Roles").toString();
        }

        if(i==1)
        {
            if(role == "admin") // check if the user has an 'admin' role
            {
                // grant the user access to administrative features
                ui->stanje->setText("Admin Login Successful");

                // open the admin window
                AdminWindow* adminW = new AdminWindow();
                adminW->show();
            }
            else
            {
                // grant the user access to regular user features
                QString tablename = user;

                ui->stanje->setText("Login Successful");

                MainWindow* MainW= new MainWindow(tablename);
                MainW->show();
            }
            this->close();
        }
        else
        {
            QMessageBox::warning(this,"login", "Username and password is not correct");
        }
    }
}
logIn::~logIn()
{
    delete ui;
}

void logIn::on_pokazi_stateChanged()
{
    ui->pass->setEchoMode(ui->pokazi->checkState() == Qt::Checked ? QLineEdit::Normal : QLineEdit::Password);
    ui->pokazi->checkState() == Qt::Checked ?  ui->pokazi->setText("HIDE") :  ui->pokazi->setText("SHOW");
}

void logIn::on_Register_clicked()
{
    this->hide();

    Registracija* regi= new Registracija(this);

    regi->show();
}

void logIn::on_Confirmdb_clicked()
{
    // Update the database location
    dbLocation = ui->dbLocationLineEdit->text();

    // Update the database connection
    mydatabase.setDatabaseName(dbLocation);

    // Reopen the database
    if(!mydatabase.open()) {
        QMessageBox::warning(this,"Error", "Failed to open the database");
    } else {
        QMessageBox::information(this,"Success", "Database location updated successfully");

        // Save the database location to the configuration file
        QSettings settings("AutoSalon", "MyApp");
        settings.setValue("dbLocation", dbLocation);
    }
}
