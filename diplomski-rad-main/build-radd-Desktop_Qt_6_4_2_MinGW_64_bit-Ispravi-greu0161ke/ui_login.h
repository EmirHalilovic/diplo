/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logIn
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass;
    QHBoxLayout *horizontalLayout;
    QPushButton *Login;
    QPushButton *Register;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *pokazi;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *dbLocationLineEdit;
    QPushButton *Confirmdb;
    QLabel *stanje;

    void setupUi(QDialog *logIn)
    {
        if (logIn->objectName().isEmpty())
            logIn->setObjectName("logIn");
        logIn->resize(523, 483);
        layoutWidget = new QWidget(logIn);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 31, 491, 421));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        user = new QLineEdit(layoutWidget);
        user->setObjectName("user");

        horizontalLayout_3->addWidget(user);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 25);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        pass = new QLineEdit(layoutWidget);
        pass->setObjectName("pass");
        pass->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy);
        pass->setMinimumSize(QSize(0, 0));
        pass->setContextMenuPolicy(Qt::NoContextMenu);
        pass->setAcceptDrops(true);
        pass->setMaxLength(1000);
        pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Login = new QPushButton(layoutWidget);
        Login->setObjectName("Login");
        Login->setCheckable(false);

        horizontalLayout->addWidget(Login);

        Register = new QPushButton(layoutWidget);
        Register->setObjectName("Register");
        Register->setCheckable(false);

        horizontalLayout->addWidget(Register);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 25);
        pokazi = new QCheckBox(layoutWidget);
        pokazi->setObjectName("pokazi");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pokazi->sizePolicy().hasHeightForWidth());
        pokazi->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        pokazi->setFont(font);
        pokazi->setAutoFillBackground(true);

        verticalLayout_2->addWidget(pokazi);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        dbLocationLineEdit = new QLineEdit(layoutWidget);
        dbLocationLineEdit->setObjectName("dbLocationLineEdit");

        horizontalLayout_5->addWidget(dbLocationLineEdit);

        Confirmdb = new QPushButton(layoutWidget);
        Confirmdb->setObjectName("Confirmdb");

        horizontalLayout_5->addWidget(Confirmdb);

        stanje = new QLabel(layoutWidget);
        stanje->setObjectName("stanje");
        stanje->setMaximumSize(QSize(16777215, 100000));

        horizontalLayout_5->addWidget(stanje);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(logIn);

        QMetaObject::connectSlotsByName(logIn);
    } // setupUi

    void retranslateUi(QDialog *logIn)
    {
        logIn->setWindowTitle(QCoreApplication::translate("logIn", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("logIn", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("logIn", "Password", nullptr));
#if QT_CONFIG(tooltip)
        pass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Login->setText(QCoreApplication::translate("logIn", "Log In", nullptr));
        Register->setText(QCoreApplication::translate("logIn", "Registration", nullptr));
        pokazi->setText(QCoreApplication::translate("logIn", "SHOW", nullptr));
        dbLocationLineEdit->setPlaceholderText(QCoreApplication::translate("logIn", "Database Location", nullptr));
        Confirmdb->setText(QCoreApplication::translate("logIn", "Confirm", nullptr));
        stanje->setText(QCoreApplication::translate("logIn", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logIn: public Ui_logIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
