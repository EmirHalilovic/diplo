    #include "about.h"
#include "ui_about.h"
#include "mainwindow.h"
#include <QPixmap>
#include <qpixmap.h>
#include <QApplication>
#include <QLabel>
#include <QFile>

#include <login.h>
About::About(QString tablename,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);


    QFile styleSheetFile("C:/Users/win10/Desktop/diplomski-rad-main/radd/Integrid.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);

    this->tablename = tablename;
setWindowTitle(tablename);

}

About::~About()
{
    delete ui;
}

void About::on_logout_clicked()
{
    logIn *log = new  logIn;
   log->show();
    hide();
}

void About::on_homeb_clicked()
{
   MainWindow *MainW = new MainWindow(tablename);
    MainW->show();
    hide();
}
