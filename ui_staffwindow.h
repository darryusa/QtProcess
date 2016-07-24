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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLabel *sSNLabel;
    QLineEdit *sSNLineEdit;
    QSpacerItem *verticalSpacer_6;
    QPushButton *cancelButton;
    QPushButton *confirmButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QTableView *tableView;
    QPushButton *searchIcon;
    QLineEdit *searchLineEdit;
    QPushButton *modifyPINButton;
    QLabel *pINLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *employeeRadioButton;
    QRadioButton *managerRadioButton;
    QLabel *label;
    QPushButton *returnButton;

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
        font.setFamily(QStringLiteral("Symbola"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        employeeTitle->setFont(font);
        employeeTitle->setStyleSheet(QLatin1String("\n"
"	\n"
"color: rgb(0, 0, 127);\n"
"\n"
""));
        employeeTitle->setScaledContents(false);
        employeeTitle->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(StaffWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 60, 511, 317));
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
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        firstNameLabel->setFont(font1);
        firstNameLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

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
        firstNameLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText);
        firstNameLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameLineEdit);

        verticalSpacer = new QSpacerItem(332, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));
        sizePolicy.setHeightForWidth(lastNameLabel->sizePolicy().hasHeightForWidth());
        lastNameLabel->setSizePolicy(sizePolicy);
        lastNameLabel->setMinimumSize(QSize(65, 25));
        lastNameLabel->setFont(font1);
        lastNameLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

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
        lastNameLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText);
        lastNameLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, lastNameLineEdit);

        verticalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        addressLabel = new QLabel(formLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        sizePolicy.setHeightForWidth(addressLabel->sizePolicy().hasHeightForWidth());
        addressLabel->setSizePolicy(sizePolicy);
        addressLabel->setMinimumSize(QSize(49, 25));
        addressLabel->setFont(font1);
        addressLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

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
        addressLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText);
        addressLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, addressLineEdit);

        verticalSpacer_3 = new QSpacerItem(332, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        phoneNumberLabel = new QLabel(formLayoutWidget);
        phoneNumberLabel->setObjectName(QStringLiteral("phoneNumberLabel"));
        sizePolicy.setHeightForWidth(phoneNumberLabel->sizePolicy().hasHeightForWidth());
        phoneNumberLabel->setSizePolicy(sizePolicy);
        phoneNumberLabel->setMinimumSize(QSize(90, 25));
        phoneNumberLabel->setFont(font1);
        phoneNumberLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

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
        phoneNumberLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText);
        phoneNumberLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, phoneNumberLineEdit);

        verticalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_4);

        emailAddressLabel = new QLabel(formLayoutWidget);
        emailAddressLabel->setObjectName(QStringLiteral("emailAddressLabel"));
        sizePolicy.setHeightForWidth(emailAddressLabel->sizePolicy().hasHeightForWidth());
        emailAddressLabel->setSizePolicy(sizePolicy);
        emailAddressLabel->setMinimumSize(QSize(86, 25));
        emailAddressLabel->setFont(font1);
        emailAddressLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

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
        emailAddressLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText);
        emailAddressLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, emailAddressLineEdit);

        verticalSpacer_5 = new QSpacerItem(332, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::FieldRole, verticalSpacer_5);

        sSNLabel = new QLabel(formLayoutWidget);
        sSNLabel->setObjectName(QStringLiteral("sSNLabel"));
        sSNLabel->setFont(font1);
        sSNLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

        formLayout->setWidget(10, QFormLayout::LabelRole, sSNLabel);

        sSNLineEdit = new QLineEdit(formLayoutWidget);
        sSNLineEdit->setObjectName(QStringLiteral("sSNLineEdit"));
        sSNLineEdit->setMinimumSize(QSize(0, 25));
        sSNLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        sSNLineEdit->setInputMethodHints(Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        sSNLineEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(10, QFormLayout::FieldRole, sSNLineEdit);

        verticalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(11, QFormLayout::FieldRole, verticalSpacer_6);

        cancelButton = new QPushButton(StaffWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(360, 450, 80, 22));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 8px;\n"
"\n"
"\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	\n"
"\n"
"\n"
"\n"
"}\n"
""));
        confirmButton = new QPushButton(StaffWindow);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(60, 450, 80, 22));
        confirmButton->setFont(font2);
        confirmButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-radius: 8px;\n"
"	color: rgb(0, 0, 127);\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"}\n"
""));
        addButton = new QPushButton(StaffWindow);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(110, 530, 211, 41));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        addButton->setFont(font3);
        addButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(164, 179, 60);\n"
"\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	\n"
"\n"
"\n"
"\n"
"}\n"
""));
        removeButton = new QPushButton(StaffWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(640, 530, 211, 41));
        removeButton->setFont(font3);
        removeButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 20px;\n"
"	background-color: rgb(164, 179, 60);\n"
"\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	\n"
"\n"
"\n"
"\n"
"}\n"
""));
        tableView = new QTableView(StaffWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(510, 90, 481, 411));
        QFont font4;
        font4.setPointSize(16);
        tableView->setFont(font4);
        tableView->setStyleSheet(QLatin1String("QTableView { \n"
"	border-image: url(:/image/whiteboxBorder.jpeg);\n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
"QTableView::item:selected {\n"
"   	background-color: rgb(164, 179, 60);\n"
"	border-radius: 5px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: rgb(164, 179, 60);\n"
"    border: 2px outset rgb(164, 179, 60);\n"
"}\n"
"QScrollBar:vertical {               \n"
"	background-color: none;\n"
"	width: 10px;    \n"
"	border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"	stop: 0  rgb(164, 179, 60), stop: 0.5 rgb(164, 179, 60),  stop:1 rgb(164, 179, 60));\n"
"	min-height: 10px;\n"
"    border-radius: 5px;\n"
"    }\n"
"QScrollBar::add-line:vertical {\n"
"	height: 1px;\n"
"	border-radius: 3px;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"	height: 1px;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
" "));
        tableView->setLineWidth(1);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setSortingEnabled(false);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
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
        searchLineEdit->setGeometry(QRect(560, 60, 431, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	\n"
"	border-radius: 10px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        searchLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        modifyPINButton = new QPushButton(StaffWindow);
        modifyPINButton->setObjectName(QStringLiteral("modifyPINButton"));
        modifyPINButton->setGeometry(QRect(136, 380, 91, 25));
        modifyPINButton->setMinimumSize(QSize(0, 25));
        QFont font5;
        font5.setPointSize(10);
        modifyPINButton->setFont(font5);
        modifyPINButton->setStyleSheet(QLatin1String("QPushButton { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: red; \n"
"} \n"
"\n"
"QPushButton::checked{\n"
"	background-color: rgb(164, 179, 60);\n"
"}"));
        modifyPINButton->setCheckable(true);
        pINLabel = new QLabel(StaffWindow);
        pINLabel->setObjectName(QStringLiteral("pINLabel"));
        pINLabel->setGeometry(QRect(40, 380, 20, 24));
        pINLabel->setFont(font1);
        pINLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        layoutWidget = new QWidget(StaffWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 380, 171, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        employeeRadioButton = new QRadioButton(layoutWidget);
        employeeRadioButton->setObjectName(QStringLiteral("employeeRadioButton"));
        employeeRadioButton->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        employeeRadioButton->setChecked(true);

        horizontalLayout->addWidget(employeeRadioButton);

        managerRadioButton = new QRadioButton(layoutWidget);
        managerRadioButton->setObjectName(QStringLiteral("managerRadioButton"));
        managerRadioButton->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        managerRadioButton->setChecked(false);

        horizontalLayout->addWidget(managerRadioButton);

        label = new QLabel(StaffWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(0, 0, 1024, 600));
        label->setAutoFillBackground(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        returnButton = new QPushButton(StaffWindow);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 10, 71, 31));
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(140, 177, 63);\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon1);
        returnButton->setIconSize(QSize(71, 31));
        label->raise();
        employeeTitle->raise();
        formLayoutWidget->raise();
        cancelButton->raise();
        confirmButton->raise();
        addButton->raise();
        removeButton->raise();
        tableView->raise();
        searchIcon->raise();
        searchLineEdit->raise();
        modifyPINButton->raise();
        pINLabel->raise();
        layoutWidget->raise();
        returnButton->raise();

        retranslateUi(StaffWindow);
        QObject::connect(addButton, SIGNAL(clicked()), firstNameLineEdit, SLOT(clear()));
        QObject::connect(addButton, SIGNAL(clicked()), lastNameLineEdit, SLOT(clear()));
        QObject::connect(addButton, SIGNAL(clicked()), addressLineEdit, SLOT(clear()));
        QObject::connect(addButton, SIGNAL(clicked()), phoneNumberLineEdit, SLOT(clear()));
        QObject::connect(addButton, SIGNAL(clicked()), emailAddressLineEdit, SLOT(clear()));
        QObject::connect(addButton, SIGNAL(clicked()), sSNLineEdit, SLOT(clear()));
        QObject::connect(cancelButton, SIGNAL(clicked()), addButton, SLOT(click()));

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
        sSNLabel->setText(QApplication::translate("StaffWindow", "SSN", 0));
        cancelButton->setText(QApplication::translate("StaffWindow", "Cancel", 0));
        confirmButton->setText(QApplication::translate("StaffWindow", "Confirm", 0));
        addButton->setText(QApplication::translate("StaffWindow", "Add", 0));
        removeButton->setText(QApplication::translate("StaffWindow", "Remove", 0));
        searchIcon->setText(QString());
        searchLineEdit->setText(QApplication::translate("StaffWindow", "  Search...", 0));
#ifndef QT_NO_TOOLTIP
        modifyPINButton->setToolTip(QApplication::translate("StaffWindow", "<html><head/><body><p>Click to Edit PIN</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        modifyPINButton->setText(QApplication::translate("StaffWindow", "*    *    *    *", 0));
        pINLabel->setText(QApplication::translate("StaffWindow", "PIN", 0));
        employeeRadioButton->setText(QApplication::translate("StaffWindow", "Employee", 0));
        managerRadioButton->setText(QApplication::translate("StaffWindow", "Manager", 0));
        label->setText(QString());
        returnButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
