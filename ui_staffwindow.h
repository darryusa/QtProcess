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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QLabel *employeeTitle;
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
    QPushButton *cancelButton;
    QPushButton *confirmButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QTableView *tableView;
    QPushButton *searchIcon;
    QLineEdit *searchLineEdit;

    void setupUi(QWidget *StaffWindow)
    {
        if (StaffWindow->objectName().isEmpty())
            StaffWindow->setObjectName(QStringLiteral("StaffWindow"));
        StaffWindow->resize(1024, 600);
        StaffWindow->setToolTipDuration(-6);
        StaffWindow->setLayoutDirection(Qt::LeftToRight);
        employeeTitle = new QLabel(StaffWindow);
        employeeTitle->setObjectName(QStringLiteral("employeeTitle"));
        employeeTitle->setGeometry(QRect(0, 0, 1024, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        employeeTitle->setFont(font);
        employeeTitle->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        employeeTitle->setAlignment(Qt::AlignCenter);
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

        cancelButton = new QPushButton(StaffWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(360, 400, 80, 22));
        cancelButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        confirmButton = new QPushButton(StaffWindow);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(160, 400, 80, 22));
        confirmButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        addButton = new QPushButton(StaffWindow);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(110, 530, 211, 41));
        addButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        removeButton = new QPushButton(StaffWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(700, 530, 211, 41));
        removeButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        tableView = new QTableView(StaffWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(510, 99, 480, 411));
        QFont font2;
        font2.setPointSize(16);
        tableView->setFont(font2);
        tableView->setStyleSheet(QLatin1String("QTableView { \n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
"QTableView::item:selected {\n"
"   	background-color: red;\n"
"	border-radius: 5px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: red;\n"
"    border: 2px outset red;\n"
"}"));
        tableView->setLineWidth(1);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setMinimumSectionSize(10);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        searchIcon = new QPushButton(StaffWindow);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        searchIcon->setGeometry(QRect(510, 60, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);
        searchLineEdit = new QLineEdit(StaffWindow);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(550, 60, 441, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
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
        employeeTitle->setText(QApplication::translate("StaffWindow", "Employee", 0));
        firstNameLabel->setText(QApplication::translate("StaffWindow", "First Name", 0));
        lastNameLabel->setText(QApplication::translate("StaffWindow", "Last Name", 0));
        addressLabel->setText(QApplication::translate("StaffWindow", "Address", 0));
        phoneNumberLabel->setText(QApplication::translate("StaffWindow", "Phone Number", 0));
        emailAddressLabel->setText(QApplication::translate("StaffWindow", "Email Address", 0));
        pINLabel->setText(QApplication::translate("StaffWindow", "PIN", 0));
        modifyPINButton->setText(QApplication::translate("StaffWindow", "*    *    *    *", 0));
        cancelButton->setText(QApplication::translate("StaffWindow", "Cancel", 0));
        confirmButton->setText(QApplication::translate("StaffWindow", "Confirm", 0));
        addButton->setText(QApplication::translate("StaffWindow", "Add", 0));
        removeButton->setText(QApplication::translate("StaffWindow", "Remove", 0));
        searchIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
