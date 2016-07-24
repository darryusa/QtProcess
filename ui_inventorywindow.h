/********************************************************************************
** Form generated from reading UI file 'inventorywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYWINDOW_H
#define UI_INVENTORYWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventoryWindow
{
public:
    QLabel *backgroundLabel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *itemNameLabel;
    QLineEdit *firstNameLineEdit;
    QSpacerItem *verticalSpacer;
    QLabel *priceLabel;
    QLineEdit *lastNameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *quantityLabel;
    QLineEdit *addressLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *cancelButton;
    QPushButton *removeButton;
    QPushButton *addButton;
    QPushButton *confirmButton;
    QTableView *tableView;
    QPushButton *searchIcon;
    QLineEdit *searchLineEdit;
    QLabel *inventoryTitle;
    QPushButton *returnButton;
    QPushButton *editButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchIcon1;
    QLineEdit *searchLineEdit1;

    void setupUi(QWidget *InventoryWindow)
    {
        if (InventoryWindow->objectName().isEmpty())
            InventoryWindow->setObjectName(QStringLiteral("InventoryWindow"));
        InventoryWindow->resize(1024, 600);
        backgroundLabel = new QLabel(InventoryWindow);
        backgroundLabel->setObjectName(QStringLiteral("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(0, 0, 1024, 600));
        backgroundLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        backgroundLabel->setScaledContents(true);
        formLayoutWidget = new QWidget(InventoryWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 80, 511, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(40, 0, 40, 0);
        itemNameLabel = new QLabel(formLayoutWidget);
        itemNameLabel->setObjectName(QStringLiteral("itemNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemNameLabel->sizePolicy().hasHeightForWidth());
        itemNameLabel->setSizePolicy(sizePolicy);
        itemNameLabel->setMinimumSize(QSize(66, 25));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        itemNameLabel->setFont(font);
        itemNameLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, itemNameLabel);

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

        verticalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        priceLabel = new QLabel(formLayoutWidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        sizePolicy.setHeightForWidth(priceLabel->sizePolicy().hasHeightForWidth());
        priceLabel->setSizePolicy(sizePolicy);
        priceLabel->setMinimumSize(QSize(65, 25));
        priceLabel->setFont(font);
        priceLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, priceLabel);

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

        quantityLabel = new QLabel(formLayoutWidget);
        quantityLabel->setObjectName(QStringLiteral("quantityLabel"));
        sizePolicy.setHeightForWidth(quantityLabel->sizePolicy().hasHeightForWidth());
        quantityLabel->setSizePolicy(sizePolicy);
        quantityLabel->setMinimumSize(QSize(49, 25));
        quantityLabel->setFont(font);
        quantityLabel->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, quantityLabel);

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

        verticalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        cancelButton = new QPushButton(InventoryWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(350, 470, 80, 22));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        cancelButton->setFont(font1);
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
        removeButton = new QPushButton(InventoryWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(650, 540, 211, 41));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        removeButton->setFont(font2);
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
        addButton = new QPushButton(InventoryWindow);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(120, 540, 211, 41));
        addButton->setFont(font2);
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
        confirmButton = new QPushButton(InventoryWindow);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(50, 470, 80, 22));
        confirmButton->setFont(font1);
        confirmButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-radius: 8px;\n"
"	color: rgb(0, 0, 127);\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"}\n"
""));
        tableView = new QTableView(InventoryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(29, 110, 961, 411));
        QFont font3;
        font3.setPointSize(16);
        tableView->setFont(font3);
        tableView->setStyleSheet(QLatin1String("QTableView { \n"
"	border-image: url(:/image/whiteboxBorder.jpeg);\n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"	\n"
"} \n"
"QHeaderView::section\n"
"{\n"
"	border-radius: 8px;\n"
"	background: rgb(164, 179, 60);\n"
"	height: 25px;\n"
"}\n"
"QTableView::item:selected {\n"
"   	background-color: rgb(164, 179, 60);\n"
"\n"
"}\n"
"QTableView::item {\n"
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
""
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
        tableView->horizontalHeader()->setVisible(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setMinimumSectionSize(10);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        searchIcon = new QPushButton(InventoryWindow);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        searchIcon->setGeometry(QRect(510, 80, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);
        searchLineEdit = new QLineEdit(InventoryWindow);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(550, 80, 431, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	\n"
"	border-radius: 10px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        searchLineEdit->setText(QStringLiteral(""));
        searchLineEdit->setMaxLength(32767);
        searchLineEdit->setCursorPosition(0);
        inventoryTitle = new QLabel(InventoryWindow);
        inventoryTitle->setObjectName(QStringLiteral("inventoryTitle"));
        inventoryTitle->setGeometry(QRect(0, 0, 1024, 60));
        QFont font4;
        font4.setFamily(QStringLiteral("Symbola"));
        font4.setPointSize(36);
        font4.setBold(true);
        font4.setWeight(75);
        inventoryTitle->setFont(font4);
        inventoryTitle->setStyleSheet(QLatin1String("\n"
"	\n"
"color: rgb(0, 0, 127);\n"
"\n"
""));
        inventoryTitle->setScaledContents(false);
        inventoryTitle->setAlignment(Qt::AlignCenter);
        returnButton = new QPushButton(InventoryWindow);
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
        editButton = new QPushButton(InventoryWindow);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(380, 540, 211, 41));
        editButton->setFont(font2);
        editButton->setStyleSheet(QLatin1String("QPushButton{\n"
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
        layoutWidget = new QWidget(InventoryWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 951, 39));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchIcon1 = new QPushButton(layoutWidget);
        searchIcon1->setObjectName(QStringLiteral("searchIcon1"));
        searchIcon1->setIcon(icon);
        searchIcon1->setIconSize(QSize(41, 31));
        searchIcon1->setFlat(true);

        horizontalLayout->addWidget(searchIcon1);

        searchLineEdit1 = new QLineEdit(layoutWidget);
        searchLineEdit1->setObjectName(QStringLiteral("searchLineEdit1"));
        searchLineEdit1->setMinimumSize(QSize(0, 25));
        searchLineEdit1->setStyleSheet(QLatin1String("QLineEdit { \n"
"	\n"
"	border-radius: 10px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));

        horizontalLayout->addWidget(searchLineEdit1);


        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QWidget *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Form", 0));
        backgroundLabel->setText(QString());
        itemNameLabel->setText(QApplication::translate("InventoryWindow", "Item Name", 0));
        priceLabel->setText(QApplication::translate("InventoryWindow", "Price", 0));
        quantityLabel->setText(QApplication::translate("InventoryWindow", "Quantity", 0));
        cancelButton->setText(QApplication::translate("InventoryWindow", "Cancel", 0));
        removeButton->setText(QApplication::translate("InventoryWindow", "Remove", 0));
        addButton->setText(QApplication::translate("InventoryWindow", "Add", 0));
        confirmButton->setText(QApplication::translate("InventoryWindow", "Confirm", 0));
        searchIcon->setText(QString());
        searchLineEdit->setInputMask(QString());
        inventoryTitle->setText(QApplication::translate("InventoryWindow", "Inventory", 0));
        returnButton->setText(QString());
        editButton->setText(QApplication::translate("InventoryWindow", "Edit", 0));
        searchIcon1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
