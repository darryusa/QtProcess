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
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *passwordButtonLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pin7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->setWindowModality(Qt::NonModal);
        LoginWindow->resize(411, 499);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        lineEdit = new QLineEdit(LoginWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 411, 81));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(60);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setMaxLength(4);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(LoginWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 99, 411, 401));
        passwordButtonLayout = new QGridLayout(gridLayoutWidget);
        passwordButtonLayout->setObjectName(QStringLiteral("passwordButtonLayout"));
        passwordButtonLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font1);

        passwordButtonLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_5, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        pin7 = new QPushButton(gridLayoutWidget);
        pin7->setObjectName(QStringLiteral("pin7"));
        sizePolicy1.setHeightForWidth(pin7->sizePolicy().hasHeightForWidth());
        pin7->setSizePolicy(sizePolicy1);
        pin7->setFont(font1);

        passwordButtonLayout->addWidget(pin7, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_11, 2, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_10, 4, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_12, 4, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_7, 4, 3, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_6, 5, 3, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_3, 5, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font1);

        passwordButtonLayout->addWidget(pushButton_8, 5, 0, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", 0));
        pushButton_2->setText(QApplication::translate("LoginWindow", "9", 0));
        pushButton->setText(QApplication::translate("LoginWindow", "8", 0));
        pushButton_5->setText(QApplication::translate("LoginWindow", "6", 0));
        pushButton_4->setText(QApplication::translate("LoginWindow", "5", 0));
        pin7->setText(QApplication::translate("LoginWindow", "7", 0));
        pushButton_11->setText(QApplication::translate("LoginWindow", "4", 0));
        pushButton_10->setText(QApplication::translate("LoginWindow", "1", 0));
        pushButton_12->setText(QApplication::translate("LoginWindow", "2", 0));
        pushButton_7->setText(QApplication::translate("LoginWindow", "3", 0));
        pushButton_6->setText(QApplication::translate("LoginWindow", "BACK", 0));
        pushButton_3->setText(QApplication::translate("LoginWindow", "0", 0));
        pushButton_8->setText(QApplication::translate("LoginWindow", "ENTER", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
