/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeb;
    QPushButton *aboutb;
    QPushButton *superb;
    QPushButton *logout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName("home");
        home->resize(892, 523);
        layoutWidget = new QWidget(home);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 851, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeb = new QPushButton(layoutWidget);
        homeb->setObjectName("homeb");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(homeb->sizePolicy().hasHeightForWidth());
        homeb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(homeb);

        aboutb = new QPushButton(layoutWidget);
        aboutb->setObjectName("aboutb");
        sizePolicy.setHeightForWidth(aboutb->sizePolicy().hasHeightForWidth());
        aboutb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(aboutb);

        superb = new QPushButton(layoutWidget);
        superb->setObjectName("superb");
        sizePolicy.setHeightForWidth(superb->sizePolicy().hasHeightForWidth());
        superb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(superb);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName("logout");
        sizePolicy.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(logout);

        scrollArea = new QScrollArea(home);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 130, 591, 381));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 572, 362));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QDialog *home)
    {
        home->setWindowTitle(QCoreApplication::translate("home", "Dialog", nullptr));
        homeb->setText(QCoreApplication::translate("home", "HOME", nullptr));
        aboutb->setText(QCoreApplication::translate("home", "O NAMA", nullptr));
        superb->setText(QCoreApplication::translate("home", "SUPERCARS", nullptr));
        logout->setText(QCoreApplication::translate("home", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
