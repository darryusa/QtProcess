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
    QPushButton *pushButton2;
    QPushButton *pushButton0_2;
    QPushButton *pushButton5;
    QPushButton *pushButton3;
    QPushButton *pushButton7;
    QPushButton *pushButtonBack;
    QPushButton *pushButton8;
    QPushButton *pushButtonEnter_2;
    QPushButton *pushButton6;
    QPushButton *pushButton1_2;
    QPushButton *pushButton9;
    QPushButton *pushButton4;
    QLineEdit *lineEdit;
    QPushButton *backButton;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(511, 600);
        QFont font;
        font.setPointSize(48);
        LoginDialog->setFont(font);
        LoginDialog->setStyleSheet(QLatin1String("border-image: url(:/image/featured-overlayOK.png);\n"
"\n"
"background-color: rgb(211, 225, 178);"));
        LoginDialog->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhSensitiveData);
        LoginDialog->setModal(false);
        gridLayoutWidget = new QWidget(LoginDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 120, 511, 481));
        passwordButtonLayout = new QGridLayout(gridLayoutWidget);
        passwordButtonLayout->setObjectName(QStringLiteral("passwordButtonLayout"));
        passwordButtonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        passwordButtonLayout->setContentsMargins(10, 0, 10, 0);
        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setEnabled(true);
        QFont font1;
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton2->setFont(font1);
        pushButton2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton0_2 = new QPushButton(gridLayoutWidget);
        pushButton0_2->setObjectName(QStringLiteral("pushButton0_2"));
        pushButton0_2->setEnabled(true);
        pushButton0_2->setFont(font1);
        pushButton0_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton0_2, 4, 1, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setEnabled(true);
        pushButton5->setFont(font1);
        pushButton5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setEnabled(true);
        pushButton3->setFont(font1);
        pushButton3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setEnabled(true);
        pushButton7->setFont(font1);
        pushButton7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton7, 3, 0, 1, 1);

        pushButtonBack = new QPushButton(gridLayoutWidget);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setEnabled(true);
        pushButtonBack->setFont(font1);
        pushButtonBack->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonBack, 4, 2, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setEnabled(true);
        pushButton8->setFont(font1);
        pushButton8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton8, 3, 1, 1, 1);

        pushButtonEnter_2 = new QPushButton(gridLayoutWidget);
        pushButtonEnter_2->setObjectName(QStringLiteral("pushButtonEnter_2"));
        pushButtonEnter_2->setEnabled(true);
        pushButtonEnter_2->setFont(font1);
        pushButtonEnter_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonEnter_2, 4, 0, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setEnabled(true);
        pushButton6->setFont(font1);
        pushButton6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButton1_2 = new QPushButton(gridLayoutWidget);
        pushButton1_2->setObjectName(QStringLiteral("pushButton1_2"));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStyleStrategy(QFont::PreferAntialias);
        pushButton1_2->setFont(font2);
        pushButton1_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton1_2, 0, 0, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setEnabled(true);
        pushButton9->setFont(font1);
        pushButton9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton9, 3, 2, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setEnabled(true);
        pushButton4->setFont(font1);
        pushButton4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton4, 2, 0, 1, 1);

        lineEdit = new QLineEdit(LoginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 411, 111));
        QFont font3;
        font3.setPointSize(58);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);
        backButton = new QPushButton(LoginDialog);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(410, 10, 101, 111));
        backButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/backButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(101, 111));
        backButton->setFlat(true);

        retranslateUi(LoginDialog);
        QObject::connect(backButton, SIGNAL(clicked()), lineEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        pushButton2->setText(QApplication::translate("LoginDialog", "2", 0));
        pushButton0_2->setText(QApplication::translate("LoginDialog", "0", 0));
        pushButton5->setText(QApplication::translate("LoginDialog", "5", 0));
        pushButton3->setText(QApplication::translate("LoginDialog", "3", 0));
        pushButton7->setText(QApplication::translate("LoginDialog", "7", 0));
        pushButtonBack->setText(QApplication::translate("LoginDialog", "Back", 0));
        pushButton8->setText(QApplication::translate("LoginDialog", "8", 0));
        pushButtonEnter_2->setText(QApplication::translate("LoginDialog", "Enter", 0));
        pushButton6->setText(QApplication::translate("LoginDialog", "6", 0));
        pushButton1_2->setText(QApplication::translate("LoginDialog", "1", 0));
        pushButton9->setText(QApplication::translate("LoginDialog", "9", 0));
        pushButton4->setText(QApplication::translate("LoginDialog", "4", 0));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
