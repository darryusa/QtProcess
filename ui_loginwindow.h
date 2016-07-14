/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLineEdit *pinInput;
    QWidget *gridLayoutWidget;
    QGridLayout *passwordButtonLayout;
    QPushButton *pin9;
    QPushButton *pin8;
    QPushButton *pin6;
    QPushButton *pin5;
    QPushButton *pin7;
    QPushButton *pin4;
    QPushButton *pin1;
    QPushButton *pin2;
    QPushButton *pin3;
    QPushButton *pinBackButton;
    QPushButton *pin0;
    QPushButton *pinEnterButton;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->setWindowModality(Qt::NonModal);
        LoginWindow->setEnabled(true);
        LoginWindow->resize(600, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        pinInput = new QLineEdit(LoginWindow);
        pinInput->setObjectName(QStringLiteral("pinInput"));
        pinInput->setGeometry(QRect(20, 0, 400, 80));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(60);
        font.setBold(true);
        font.setWeight(75);
        pinInput->setFont(font);
        pinInput->setMaxLength(4);
        pinInput->setEchoMode(QLineEdit::Password);
        pinInput->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(LoginWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 99, 542, 401));
        passwordButtonLayout = new QGridLayout(gridLayoutWidget);
        passwordButtonLayout->setObjectName(QStringLiteral("passwordButtonLayout"));
        passwordButtonLayout->setContentsMargins(0, 0, 0, 0);
        pin9 = new QPushButton(gridLayoutWidget);
        pin9->setObjectName(QStringLiteral("pin9"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pin9->sizePolicy().hasHeightForWidth());
        pin9->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pin9->setFont(font1);
        pin9->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin9, 0, 3, 1, 1);

        pin8 = new QPushButton(gridLayoutWidget);
        pin8->setObjectName(QStringLiteral("pin8"));
        sizePolicy1.setHeightForWidth(pin8->sizePolicy().hasHeightForWidth());
        pin8->setSizePolicy(sizePolicy1);
        pin8->setFont(font1);
        pin8->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: green;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin8, 0, 2, 1, 1);

        pin6 = new QPushButton(gridLayoutWidget);
        pin6->setObjectName(QStringLiteral("pin6"));
        sizePolicy1.setHeightForWidth(pin6->sizePolicy().hasHeightForWidth());
        pin6->setSizePolicy(sizePolicy1);
        pin6->setFont(font1);
        pin6->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin6, 2, 3, 1, 1);

        pin5 = new QPushButton(gridLayoutWidget);
        pin5->setObjectName(QStringLiteral("pin5"));
        sizePolicy1.setHeightForWidth(pin5->sizePolicy().hasHeightForWidth());
        pin5->setSizePolicy(sizePolicy1);
        pin5->setFont(font1);
        pin5->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin5, 2, 2, 1, 1);

        pin7 = new QPushButton(gridLayoutWidget);
        pin7->setObjectName(QStringLiteral("pin7"));
        sizePolicy1.setHeightForWidth(pin7->sizePolicy().hasHeightForWidth());
        pin7->setSizePolicy(sizePolicy1);
        pin7->setFont(font1);
        pin7->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin7, 0, 0, 1, 1);

        pin4 = new QPushButton(gridLayoutWidget);
        pin4->setObjectName(QStringLiteral("pin4"));
        sizePolicy1.setHeightForWidth(pin4->sizePolicy().hasHeightForWidth());
        pin4->setSizePolicy(sizePolicy1);
        pin4->setFont(font1);
        pin4->setAutoFillBackground(false);
        pin4->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin4, 2, 0, 1, 1);

        pin1 = new QPushButton(gridLayoutWidget);
        pin1->setObjectName(QStringLiteral("pin1"));
        sizePolicy1.setHeightForWidth(pin1->sizePolicy().hasHeightForWidth());
        pin1->setSizePolicy(sizePolicy1);
        pin1->setFont(font1);
        pin1->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin1, 4, 0, 1, 1);

        pin2 = new QPushButton(gridLayoutWidget);
        pin2->setObjectName(QStringLiteral("pin2"));
        sizePolicy1.setHeightForWidth(pin2->sizePolicy().hasHeightForWidth());
        pin2->setSizePolicy(sizePolicy1);
        pin2->setFont(font1);
        pin2->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin2, 4, 2, 1, 1);

        pin3 = new QPushButton(gridLayoutWidget);
        pin3->setObjectName(QStringLiteral("pin3"));
        sizePolicy1.setHeightForWidth(pin3->sizePolicy().hasHeightForWidth());
        pin3->setSizePolicy(sizePolicy1);
        pin3->setFont(font1);
        pin3->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin3, 4, 3, 1, 1);

        pinBackButton = new QPushButton(gridLayoutWidget);
        pinBackButton->setObjectName(QStringLiteral("pinBackButton"));
        sizePolicy1.setHeightForWidth(pinBackButton->sizePolicy().hasHeightForWidth());
        pinBackButton->setSizePolicy(sizePolicy1);
        pinBackButton->setFont(font1);
        pinBackButton->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pinBackButton, 5, 3, 1, 1);

        pin0 = new QPushButton(gridLayoutWidget);
        pin0->setObjectName(QStringLiteral("pin0"));
        sizePolicy1.setHeightForWidth(pin0->sizePolicy().hasHeightForWidth());
        pin0->setSizePolicy(sizePolicy1);
        pin0->setFont(font1);
        pin0->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pin0, 5, 2, 1, 1);

        pinEnterButton = new QPushButton(gridLayoutWidget);
        pinEnterButton->setObjectName(QStringLiteral("pinEnterButton"));
        sizePolicy1.setHeightForWidth(pinEnterButton->sizePolicy().hasHeightForWidth());
        pinEnterButton->setSizePolicy(sizePolicy1);
        pinEnterButton->setFont(font1);
        pinEnterButton->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pinEnterButton, 5, 0, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", 0));
        pin9->setText(QApplication::translate("LoginWindow", "9", 0));
        pin8->setText(QApplication::translate("LoginWindow", "8", 0));
        pin6->setText(QApplication::translate("LoginWindow", "6", 0));
        pin5->setText(QApplication::translate("LoginWindow", "5", 0));
        pin7->setText(QApplication::translate("LoginWindow", "7", 0));
        pin4->setText(QApplication::translate("LoginWindow", "4", 0));
        pin1->setText(QApplication::translate("LoginWindow", "1", 0));
        pin2->setText(QApplication::translate("LoginWindow", "2", 0));
        pin3->setText(QApplication::translate("LoginWindow", "3", 0));
        pinBackButton->setText(QApplication::translate("LoginWindow", "BACK", 0));
        pin0->setText(QApplication::translate("LoginWindow", "0", 0));
        pinEnterButton->setText(QApplication::translate("LoginWindow", "ENTER", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
