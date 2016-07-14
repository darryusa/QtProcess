/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *passwordButtonLayout;
    QPushButton *pushButtonBack;
    QPushButton *pushButton1;
    QPushButton *pushButton7;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton0;
    QPushButton *pushButton3;
    QPushButton *pushButton6;
    QPushButton *pushButton9;
    QPushButton *pushButtonEnter;
    QLineEdit *lineEdit;
    QPushButton *backButton;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(512, 600);
        QFont font;
        font.setPointSize(16);
        LoginDialog->setFont(font);
        LoginDialog->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhSensitiveData);
        LoginDialog->setModal(false);
        gridLayoutWidget = new QWidget(LoginDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 110, 511, 491));
        passwordButtonLayout = new QGridLayout(gridLayoutWidget);
        passwordButtonLayout->setObjectName(QStringLiteral("passwordButtonLayout"));
        passwordButtonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        passwordButtonLayout->setContentsMargins(10, 0, 10, 0);
        pushButtonBack = new QPushButton(gridLayoutWidget);
        buttonGroup = new QButtonGroup(LoginDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(pushButtonBack);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonBack, 3, 0, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton1);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton7);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton5);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton4);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton2);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton8);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton0);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        pushButton0->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton3);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton6);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButton9);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButtonEnter = new QPushButton(gridLayoutWidget);
        buttonGroup->addButton(pushButtonEnter);
        pushButtonEnter->setObjectName(QStringLiteral("pushButtonEnter"));
        pushButtonEnter->setStyleSheet(QLatin1String("QPushButton{\n"
"    background-color: white;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 16px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    width: 4em;\n"
"	height: 4em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonEnter, 3, 2, 1, 1);

        lineEdit = new QLineEdit(LoginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 411, 111));
        QFont font1;
        font1.setPointSize(58);
        lineEdit->setFont(font1);
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);
        backButton = new QPushButton(LoginDialog);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(410, 0, 111, 111));
        backButton->setInputMethodHints(Qt::ImhNone);
        QIcon icon;
        icon.addFile(QStringLiteral("image/backButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(111, 111));
        backButton->raise();
        gridLayoutWidget->raise();
        lineEdit->raise();

        retranslateUi(LoginDialog);
        QObject::connect(pushButtonBack, SIGNAL(clicked()), lineEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        pushButtonBack->setText(QApplication::translate("LoginDialog", "Back", 0));
        pushButton1->setText(QApplication::translate("LoginDialog", "1", 0));
        pushButton7->setText(QApplication::translate("LoginDialog", "7", 0));
        pushButton5->setText(QApplication::translate("LoginDialog", "5", 0));
        pushButton4->setText(QApplication::translate("LoginDialog", "4", 0));
        pushButton2->setText(QApplication::translate("LoginDialog", "2", 0));
        pushButton8->setText(QApplication::translate("LoginDialog", "8", 0));
        pushButton0->setText(QApplication::translate("LoginDialog", "0", 0));
        pushButton3->setText(QApplication::translate("LoginDialog", "3", 0));
        pushButton6->setText(QApplication::translate("LoginDialog", "6", 0));
        pushButton9->setText(QApplication::translate("LoginDialog", "9", 0));
        pushButtonEnter->setText(QApplication::translate("LoginDialog", "Enter", 0));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
