/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeb;
    QPushButton *logout;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(800, 583);
        scrollArea = new QScrollArea(About);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 70, 771, 471));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 769, 469));
        layoutWidget = new QWidget(scrollAreaWidgetContents_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 741, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 11, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"MS Shell Dlg 2\";\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        label->setScaledContents(false);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        verticalLayout->setStretch(1, 2);
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        layoutWidget1 = new QWidget(About);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 771, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeb = new QPushButton(layoutWidget1);
        homeb->setObjectName("homeb");
        sizePolicy.setHeightForWidth(homeb->sizePolicy().hasHeightForWidth());
        homeb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(homeb);

        logout = new QPushButton(layoutWidget1);
        logout->setObjectName("logout");
        sizePolicy.setHeightForWidth(logout->sizePolicy().hasHeightForWidth());
        logout->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(logout);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("About", "About us AutoSalon ", nullptr));
        label_3->setText(QCoreApplication::translate("About", "<html><head/><body><p>&quot;Welcome to AutoSalon, your ultimate destination for high-quality cars at affordable prices. We are a premier car dealership committed to providing exceptional service to our clients. With a wide range of cars to choose from, we offer something for everyone. Our team of professionals is dedicated to ensuring you find the right car to meet your needs.</p><p>If you have any questions or require additional information, please do not hesitate to contact our CEO Emir Halilovic. You can reach him by phone at +387603271266 or via email at <a href=\"mailto:emir.halilovic.tz@hotmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">emir.halilovic.tz@hotmail.com</span></a>. We look forward to hearing from you and helping you find your dream car.&quot;</p></body></html>", nullptr));
        homeb->setText(QCoreApplication::translate("About", "HOME", nullptr));
        logout->setText(QCoreApplication::translate("About", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
