/********************************************************************************
** Form generated from reading UI file 'registracija.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRACIJA_H
#define UI_REGISTRACIJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registracija
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelname;
    QLineEdit *fname;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_13;
    QLineEdit *lname;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QLineEdit *email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass;
    QCheckBox *pokazi;
    QHBoxLayout *horizontalLayout;
    QPushButton *Create;
    QPushButton *Back;

    void setupUi(QDialog *Registracija)
    {
        if (Registracija->objectName().isEmpty())
            Registracija->setObjectName("Registracija");
        Registracija->resize(576, 420);
        layoutWidget = new QWidget(Registracija);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(65, 36, 371, 291));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelname = new QLabel(layoutWidget);
        labelname->setObjectName("labelname");

        horizontalLayout_5->addWidget(labelname);

        fname = new QLineEdit(layoutWidget);
        fname->setObjectName("fname");
        fname->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fname->sizePolicy().hasHeightForWidth());
        fname->setSizePolicy(sizePolicy);
        fname->setMinimumSize(QSize(0, 0));
        fname->setContextMenuPolicy(Qt::NoContextMenu);
        fname->setAcceptDrops(true);
        fname->setMaxLength(1000);
        fname->setEchoMode(QLineEdit::Normal);

        horizontalLayout_5->addWidget(fname);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        horizontalLayout_19->addWidget(label_13);

        lname = new QLineEdit(layoutWidget);
        lname->setObjectName("lname");
        lname->setEnabled(true);
        sizePolicy.setHeightForWidth(lname->sizePolicy().hasHeightForWidth());
        lname->setSizePolicy(sizePolicy);
        lname->setMinimumSize(QSize(0, 0));
        lname->setContextMenuPolicy(Qt::NoContextMenu);
        lname->setAcceptDrops(true);
        lname->setMaxLength(1000);
        lname->setEchoMode(QLineEdit::Normal);

        horizontalLayout_19->addWidget(lname);


        gridLayout->addLayout(horizontalLayout_19, 1, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        horizontalLayout_18->addWidget(label_12);

        email = new QLineEdit(layoutWidget);
        email->setObjectName("email");
        email->setEnabled(true);
        sizePolicy.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy);
        email->setMinimumSize(QSize(0, 0));
        email->setContextMenuPolicy(Qt::NoContextMenu);
        email->setAcceptDrops(true);
        email->setMaxLength(1000);
        email->setEchoMode(QLineEdit::Normal);

        horizontalLayout_18->addWidget(email);


        gridLayout->addLayout(horizontalLayout_18, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        user = new QLineEdit(layoutWidget);
        user->setObjectName("user");

        horizontalLayout_3->addWidget(user);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        pass = new QLineEdit(layoutWidget);
        pass->setObjectName("pass");
        pass->setEnabled(true);
        sizePolicy.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy);
        pass->setMinimumSize(QSize(0, 0));
        pass->setContextMenuPolicy(Qt::NoContextMenu);
        pass->setAcceptDrops(true);
        pass->setMaxLength(1000);
        pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pass);

        pokazi = new QCheckBox(layoutWidget);
        pokazi->setObjectName("pokazi");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pokazi->sizePolicy().hasHeightForWidth());
        pokazi->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        pokazi->setFont(font);
        pokazi->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(pokazi);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Create = new QPushButton(layoutWidget);
        Create->setObjectName("Create");
        Create->setCheckable(false);

        horizontalLayout->addWidget(Create);

        Back = new QPushButton(layoutWidget);
        Back->setObjectName("Back");
        Back->setCheckable(false);

        horizontalLayout->addWidget(Back);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        retranslateUi(Registracija);

        QMetaObject::connectSlotsByName(Registracija);
    } // setupUi

    void retranslateUi(QDialog *Registracija)
    {
        Registracija->setWindowTitle(QCoreApplication::translate("Registracija", "Dialog", nullptr));
        labelname->setText(QCoreApplication::translate("Registracija", "FirstName:", nullptr));
#if QT_CONFIG(tooltip)
        fname->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("Registracija", "LastName", nullptr));
#if QT_CONFIG(tooltip)
        lname->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("Registracija", " Email      ", nullptr));
#if QT_CONFIG(tooltip)
        email->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Registracija", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Registracija", "Password", nullptr));
#if QT_CONFIG(tooltip)
        pass->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pokazi->setText(QCoreApplication::translate("Registracija", "SHOW", nullptr));
        Create->setText(QCoreApplication::translate("Registracija", "Create", nullptr));
        Back->setText(QCoreApplication::translate("Registracija", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registracija: public Ui_Registracija {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRACIJA_H
