#include "login.h"
#include <QApplication>
#include "mainwindow.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    logIn w;

    QFile styleSheetFile(".Integrid.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet= QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

 w.show();
    return a.exec();
}
