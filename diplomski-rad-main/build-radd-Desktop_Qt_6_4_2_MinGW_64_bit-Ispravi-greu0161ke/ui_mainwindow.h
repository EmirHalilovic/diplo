/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *aboutb;
    QPushButton *superb;
    QPushButton *logout;
    QTableView *dbtable;
    QLabel *slika_4;
    QTableView *soldtable;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QLabel *slika_2;
    QLineEdit *searchText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *slika_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *od;
    QLineEdit *startmilage;
    QVBoxLayout *verticalLayout_3;
    QLabel *do_2;
    QLineEdit *endmilage;
    QCheckBox *useMileage;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *od_2;
    QLineEdit *startage;
    QVBoxLayout *verticalLayout_6;
    QLabel *do_3;
    QLineEdit *endage;
    QCheckBox *useAge;
    QPushButton *refreshbutton;
    QPushButton *kupiBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1110, 689);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 1071, 677));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        aboutb = new QPushButton(layoutWidget);
        aboutb->setObjectName("aboutb");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutb->sizePolicy().hasHeightForWidth());
        aboutb->setSizePolicy(sizePolicy);
        aboutb->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(aboutb);

        superb = new QPushButton(layoutWidget);
        superb->setObjectName("superb");
        sizePolicy.setHeightForWidth(superb->sizePolicy().hasHeightForWidth());
        superb->setSizePolicy(sizePolicy);
        superb->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(superb);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName("logout");
        sizePolicy.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy);
        logout->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(logout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        dbtable = new QTableView(layoutWidget);
        dbtable->setObjectName("dbtable");

        gridLayout->addWidget(dbtable, 1, 0, 1, 1);


        verticalLayout_9->addLayout(gridLayout);

        slika_4 = new QLabel(layoutWidget);
        slika_4->setObjectName("slika_4");
        slika_4->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slika_4->sizePolicy().hasHeightForWidth());
        slika_4->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        slika_4->setFont(font);
        slika_4->setScaledContents(true);

        verticalLayout_9->addWidget(slika_4);

        soldtable = new QTableView(layoutWidget);
        soldtable->setObjectName("soldtable");

        verticalLayout_9->addWidget(soldtable);


        horizontalLayout_5->addLayout(verticalLayout_9);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        slika_2 = new QLabel(layoutWidget);
        slika_2->setObjectName("slika_2");
        slika_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(slika_2->sizePolicy().hasHeightForWidth());
        slika_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        slika_2->setFont(font1);
        slika_2->setScaledContents(true);

        verticalLayout->addWidget(slika_2);

        searchText = new QLineEdit(layoutWidget);
        searchText->setObjectName("searchText");

        verticalLayout->addWidget(searchText);


        verticalLayout_8->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        slika_3 = new QLabel(layoutWidget);
        slika_3->setObjectName("slika_3");
        slika_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(slika_3->sizePolicy().hasHeightForWidth());
        slika_3->setSizePolicy(sizePolicy1);
        slika_3->setScaledContents(true);

        horizontalLayout_2->addWidget(slika_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setEnabled(true);
        comboBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        comboBox->setEditable(false);

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        od = new QLabel(layoutWidget);
        od->setObjectName("od");
        od->setEnabled(true);
        sizePolicy1.setHeightForWidth(od->sizePolicy().hasHeightForWidth());
        od->setSizePolicy(sizePolicy1);
        od->setScaledContents(true);

        verticalLayout_2->addWidget(od);

        startmilage = new QLineEdit(layoutWidget);
        startmilage->setObjectName("startmilage");
        startmilage->setEnabled(false);

        verticalLayout_2->addWidget(startmilage);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        do_2 = new QLabel(layoutWidget);
        do_2->setObjectName("do_2");
        do_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(do_2->sizePolicy().hasHeightForWidth());
        do_2->setSizePolicy(sizePolicy1);
        do_2->setScaledContents(true);

        verticalLayout_3->addWidget(do_2);

        endmilage = new QLineEdit(layoutWidget);
        endmilage->setObjectName("endmilage");
        endmilage->setEnabled(false);

        verticalLayout_3->addWidget(endmilage);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_4);

        useMileage = new QCheckBox(layoutWidget);
        useMileage->setObjectName("useMileage");

        horizontalLayout_3->addWidget(useMileage);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        od_2 = new QLabel(layoutWidget);
        od_2->setObjectName("od_2");
        od_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(od_2->sizePolicy().hasHeightForWidth());
        od_2->setSizePolicy(sizePolicy1);
        od_2->setScaledContents(true);

        verticalLayout_5->addWidget(od_2);

        startage = new QLineEdit(layoutWidget);
        startage->setObjectName("startage");
        startage->setEnabled(false);

        verticalLayout_5->addWidget(startage);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        do_3 = new QLabel(layoutWidget);
        do_3->setObjectName("do_3");
        do_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(do_3->sizePolicy().hasHeightForWidth());
        do_3->setSizePolicy(sizePolicy1);
        do_3->setScaledContents(true);

        verticalLayout_6->addWidget(do_3);

        endage = new QLineEdit(layoutWidget);
        endage->setObjectName("endage");
        endage->setEnabled(false);

        verticalLayout_6->addWidget(endage);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_7);

        useAge = new QCheckBox(layoutWidget);
        useAge->setObjectName("useAge");

        horizontalLayout_4->addWidget(useAge);


        verticalLayout_8->addLayout(horizontalLayout_4);

        refreshbutton = new QPushButton(layoutWidget);
        refreshbutton->setObjectName("refreshbutton");
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        refreshbutton->setFont(font2);

        verticalLayout_8->addWidget(refreshbutton);

        kupiBtn = new QPushButton(layoutWidget);
        kupiBtn->setObjectName("kupiBtn");

        verticalLayout_8->addWidget(kupiBtn);


        horizontalLayout_5->addLayout(verticalLayout_8);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(2, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1110, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        aboutb->setText(QCoreApplication::translate("MainWindow", "ABOUT US", nullptr));
        superb->setText(QCoreApplication::translate("MainWindow", "SUPERCARS", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "LOG OUT", nullptr));
        slika_4->setText(QCoreApplication::translate("MainWindow", "Bought", nullptr));
        slika_2->setText(QCoreApplication::translate("MainWindow", "FILTERS", nullptr));
        searchText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        slika_3->setText(QCoreApplication::translate("MainWindow", "Fuel type:", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Petrol", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Diesel", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Gas", nullptr));

        comboBox->setCurrentText(QString());
        od->setText(QCoreApplication::translate("MainWindow", "FROM", nullptr));
        do_2->setText(QCoreApplication::translate("MainWindow", "TO", nullptr));
        useMileage->setText(QCoreApplication::translate("MainWindow", "Milage ", nullptr));
        od_2->setText(QCoreApplication::translate("MainWindow", "FROM", nullptr));
        do_3->setText(QCoreApplication::translate("MainWindow", "TO", nullptr));
        useAge->setText(QCoreApplication::translate("MainWindow", "CarAge", nullptr));
        refreshbutton->setText(QCoreApplication::translate("MainWindow", "REFRESH", nullptr));
        kupiBtn->setText(QCoreApplication::translate("MainWindow", "Buy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
