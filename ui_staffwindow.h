/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QScrollBar *verticalScrollBar;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameLineEdit;
    QSpacerItem *verticalSpacer;
    QLabel *lastNameLabel;
    QLineEdit *lastNameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *addressLabel;
    QLineEdit *addressLineEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *phoneNumberLabel;
    QLineEdit *phoneNumberLineEdit;
    QSpacerItem *verticalSpacer_4;
    QLabel *emailAddressLabel;
    QLineEdit *emailAddressLineEdit;
    QSpacerItem *verticalSpacer_5;
    QLabel *pINLabel;
    QPushButton *modifyPINButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QListWidget *listWidget;

    void setupUi(QWidget *StaffWindow)
    {
        if (StaffWindow->objectName().isEmpty())
            StaffWindow->setObjectName(QStringLiteral("StaffWindow"));
        StaffWindow->resize(1024, 600);
        StaffWindow->setToolTipDuration(-6);
        StaffWindow->setLayoutDirection(Qt::LeftToRight);
        verticalScrollBar = new QScrollBar(StaffWindow);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(992, 60, 16, 450));
        verticalScrollBar->setStyleSheet(QStringLiteral(""));
        verticalScrollBar->setOrientation(Qt::Vertical);
        label = new QLabel(StaffWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1024, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(StaffWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 60, 511, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(40, 0, 40, 0);
        firstNameLabel = new QLabel(formLayoutWidget);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstNameLabel->sizePolicy().hasHeightForWidth());
        firstNameLabel->setSizePolicy(sizePolicy);
        firstNameLabel->setMinimumSize(QSize(66, 25));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstNameLabel);

        firstNameLineEdit = new QLineEdit(formLayoutWidget);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(firstNameLineEdit->sizePolicy().hasHeightForWidth());
        firstNameLineEdit->setSizePolicy(sizePolicy1);
        firstNameLineEdit->setMinimumSize(QSize(335, 25));
        firstNameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        firstNameLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameLineEdit);

        verticalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));
        sizePolicy.setHeightForWidth(lastNameLabel->sizePolicy().hasHeightForWidth());
        lastNameLabel->setSizePolicy(sizePolicy);
        lastNameLabel->setMinimumSize(QSize(65, 25));

        formLayout->setWidget(2, QFormLayout::LabelRole, lastNameLabel);

        lastNameLineEdit = new QLineEdit(formLayoutWidget);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));
        sizePolicy1.setHeightForWidth(lastNameLineEdit->sizePolicy().hasHeightForWidth());
        lastNameLineEdit->setSizePolicy(sizePolicy1);
        lastNameLineEdit->setMinimumSize(QSize(335, 25));
        lastNameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        lastNameLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, lastNameLineEdit);

        verticalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        addressLabel = new QLabel(formLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        sizePolicy.setHeightForWidth(addressLabel->sizePolicy().hasHeightForWidth());
        addressLabel->setSizePolicy(sizePolicy);
        addressLabel->setMinimumSize(QSize(49, 25));

        formLayout->setWidget(4, QFormLayout::LabelRole, addressLabel);

        addressLineEdit = new QLineEdit(formLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        sizePolicy1.setHeightForWidth(addressLineEdit->sizePolicy().hasHeightForWidth());
        addressLineEdit->setSizePolicy(sizePolicy1);
        addressLineEdit->setMinimumSize(QSize(335, 25));
        addressLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        addressLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, addressLineEdit);

        verticalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        phoneNumberLabel = new QLabel(formLayoutWidget);
        phoneNumberLabel->setObjectName(QStringLiteral("phoneNumberLabel"));
        sizePolicy.setHeightForWidth(phoneNumberLabel->sizePolicy().hasHeightForWidth());
        phoneNumberLabel->setSizePolicy(sizePolicy);
        phoneNumberLabel->setMinimumSize(QSize(90, 25));

        formLayout->setWidget(6, QFormLayout::LabelRole, phoneNumberLabel);

        phoneNumberLineEdit = new QLineEdit(formLayoutWidget);
        phoneNumberLineEdit->setObjectName(QStringLiteral("phoneNumberLineEdit"));
        sizePolicy1.setHeightForWidth(phoneNumberLineEdit->sizePolicy().hasHeightForWidth());
        phoneNumberLineEdit->setSizePolicy(sizePolicy1);
        phoneNumberLineEdit->setMinimumSize(QSize(335, 25));
        phoneNumberLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        phoneNumberLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, phoneNumberLineEdit);

        verticalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        emailAddressLabel = new QLabel(formLayoutWidget);
        emailAddressLabel->setObjectName(QStringLiteral("emailAddressLabel"));
        sizePolicy.setHeightForWidth(emailAddressLabel->sizePolicy().hasHeightForWidth());
        emailAddressLabel->setSizePolicy(sizePolicy);
        emailAddressLabel->setMinimumSize(QSize(86, 25));

        formLayout->setWidget(8, QFormLayout::LabelRole, emailAddressLabel);

        emailAddressLineEdit = new QLineEdit(formLayoutWidget);
        emailAddressLineEdit->setObjectName(QStringLiteral("emailAddressLineEdit"));
        sizePolicy1.setHeightForWidth(emailAddressLineEdit->sizePolicy().hasHeightForWidth());
        emailAddressLineEdit->setSizePolicy(sizePolicy1);
        emailAddressLineEdit->setMinimumSize(QSize(335, 25));
        emailAddressLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        emailAddressLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, emailAddressLineEdit);

        verticalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::FieldRole, verticalSpacer_5);

        pINLabel = new QLabel(formLayoutWidget);
        pINLabel->setObjectName(QStringLiteral("pINLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, pINLabel);

        modifyPINButton = new QPushButton(formLayoutWidget);
        modifyPINButton->setObjectName(QStringLiteral("modifyPINButton"));
        modifyPINButton->setMinimumSize(QSize(0, 25));
        QFont font1;
        font1.setPointSize(15);
        modifyPINButton->setFont(font1);
        modifyPINButton->setStyleSheet(QLatin1String("QPushButton { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));

        formLayout->setWidget(10, QFormLayout::FieldRole, modifyPINButton);

        pushButton = new QPushButton(StaffWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 400, 80, 22));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(StaffWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 400, 80, 22));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(StaffWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 530, 211, 41));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(StaffWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(370, 530, 211, 41));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(StaffWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(700, 530, 211, 41));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        listWidget = new QListWidget(StaffWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(510, 60, 480, 450));
        listWidget->setStyleSheet(QLatin1String("QListWidget { \n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));

        retranslateUi(StaffWindow);

        QMetaObject::connectSlotsByName(StaffWindow);
    } // setupUi

    void retranslateUi(QWidget *StaffWindow)
    {
        StaffWindow->setWindowTitle(QApplication::translate("StaffWindow", "Form", 0));
        label->setText(QApplication::translate("StaffWindow", "Employee", 0));
        firstNameLabel->setText(QApplication::translate("StaffWindow", "First Name", 0));
        lastNameLabel->setText(QApplication::translate("StaffWindow", "Last Name", 0));
        addressLabel->setText(QApplication::translate("StaffWindow", "Address", 0));
        phoneNumberLabel->setText(QApplication::translate("StaffWindow", "Phone Number", 0));
        emailAddressLabel->setText(QApplication::translate("StaffWindow", "Email Address", 0));
        pINLabel->setText(QApplication::translate("StaffWindow", "PIN", 0));
        modifyPINButton->setText(QApplication::translate("StaffWindow", "*    *    *    *", 0));
        pushButton->setText(QApplication::translate("StaffWindow", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("StaffWindow", "Confirm", 0));
        pushButton_3->setText(QApplication::translate("StaffWindow", "Edit", 0));
        pushButton_4->setText(QApplication::translate("StaffWindow", "Add", 0));
        pushButton_5->setText(QApplication::translate("StaffWindow", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
