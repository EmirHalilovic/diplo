/********************************************************************************
** Form generated from reading UI file 'glavna.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLAVNA_H
#define UI_GLAVNA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Glavna
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Glavna)
    {
        if (Glavna->objectName().isEmpty())
            Glavna->setObjectName("Glavna");
        Glavna->resize(800, 600);
        centralwidget = new QWidget(Glavna);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(570, 330, 75, 23));
        Glavna->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Glavna);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Glavna->setMenuBar(menubar);
        statusbar = new QStatusBar(Glavna);
        statusbar->setObjectName("statusbar");
        Glavna->setStatusBar(statusbar);

        retranslateUi(Glavna);

        QMetaObject::connectSlotsByName(Glavna);
    } // setupUi

    void retranslateUi(QMainWindow *Glavna)
    {
        Glavna->setWindowTitle(QCoreApplication::translate("Glavna", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Glavna", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Glavna: public Ui_Glavna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLAVNA_H
