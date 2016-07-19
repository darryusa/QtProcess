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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventoryWindow
{
public:
    QLabel *label;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QTableView *tableView;
    QLineEdit *searchLineEdit;
    QPushButton *searchIcon;
    QLabel *detailsLabel;
    QLineEdit *detailsLineEdit;
    QLineEdit *itemNameLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *quanitityLineEdit;
    QLabel *itemNameLabel;
    QLabel *priceLabel;
    QLabel *quanitityLabel;

    void setupUi(QWidget *InventoryWindow)
    {
        if (InventoryWindow->objectName().isEmpty())
            InventoryWindow->setObjectName(QStringLiteral("InventoryWindow"));
        InventoryWindow->resize(1024, 600);
        label = new QLabel(InventoryWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 0, 231, 61));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        confirmButton = new QPushButton(InventoryWindow);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(120, 440, 80, 22));
        confirmButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        cancelButton = new QPushButton(InventoryWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(260, 440, 80, 22));
        cancelButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        addButton = new QPushButton(InventoryWindow);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(140, 530, 211, 41));
        addButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        removeButton = new QPushButton(InventoryWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(620, 530, 211, 41));
        removeButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(164, 179, 60);\n"
"}\n"
""));
        tableView = new QTableView(InventoryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(530, 110, 480, 411));
        QFont font1;
        font1.setPointSize(16);
        tableView->setFont(font1);
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
        searchLineEdit = new QLineEdit(InventoryWindow);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(580, 70, 431, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        searchIcon = new QPushButton(InventoryWindow);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        searchIcon->setGeometry(QRect(530, 70, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);
        detailsLabel = new QLabel(InventoryWindow);
        detailsLabel->setObjectName(QStringLiteral("detailsLabel"));
        detailsLabel->setGeometry(QRect(30, 220, 59, 14));
        detailsLineEdit = new QLineEdit(InventoryWindow);
        detailsLineEdit->setObjectName(QStringLiteral("detailsLineEdit"));
        detailsLineEdit->setGeometry(QRect(110, 220, 361, 161));
        itemNameLineEdit = new QLineEdit(InventoryWindow);
        itemNameLineEdit->setObjectName(QStringLiteral("itemNameLineEdit"));
        itemNameLineEdit->setGeometry(QRect(110, 80, 358, 25));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemNameLineEdit->sizePolicy().hasHeightForWidth());
        itemNameLineEdit->setSizePolicy(sizePolicy);
        itemNameLineEdit->setMinimumSize(QSize(335, 25));
        itemNameLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        itemNameLineEdit->setAlignment(Qt::AlignCenter);
        priceLineEdit = new QLineEdit(InventoryWindow);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
        priceLineEdit->setGeometry(QRect(110, 120, 358, 25));
        sizePolicy.setHeightForWidth(priceLineEdit->sizePolicy().hasHeightForWidth());
        priceLineEdit->setSizePolicy(sizePolicy);
        priceLineEdit->setMinimumSize(QSize(335, 25));
        priceLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        priceLineEdit->setAlignment(Qt::AlignCenter);
        quanitityLineEdit = new QLineEdit(InventoryWindow);
        quanitityLineEdit->setObjectName(QStringLiteral("quanitityLineEdit"));
        quanitityLineEdit->setGeometry(QRect(110, 170, 358, 25));
        sizePolicy.setHeightForWidth(quanitityLineEdit->sizePolicy().hasHeightForWidth());
        quanitityLineEdit->setSizePolicy(sizePolicy);
        quanitityLineEdit->setMinimumSize(QSize(335, 25));
        quanitityLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        quanitityLineEdit->setAlignment(Qt::AlignCenter);
        itemNameLabel = new QLabel(InventoryWindow);
        itemNameLabel->setObjectName(QStringLiteral("itemNameLabel"));
        itemNameLabel->setGeometry(QRect(30, 80, 67, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(itemNameLabel->sizePolicy().hasHeightForWidth());
        itemNameLabel->setSizePolicy(sizePolicy1);
        itemNameLabel->setMinimumSize(QSize(66, 25));
        priceLabel = new QLabel(InventoryWindow);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        priceLabel->setGeometry(QRect(30, 120, 65, 25));
        sizePolicy1.setHeightForWidth(priceLabel->sizePolicy().hasHeightForWidth());
        priceLabel->setSizePolicy(sizePolicy1);
        priceLabel->setMinimumSize(QSize(65, 25));
        quanitityLabel = new QLabel(InventoryWindow);
        quanitityLabel->setObjectName(QStringLiteral("quanitityLabel"));
        quanitityLabel->setGeometry(QRect(30, 170, 56, 25));
        sizePolicy1.setHeightForWidth(quanitityLabel->sizePolicy().hasHeightForWidth());
        quanitityLabel->setSizePolicy(sizePolicy1);
        quanitityLabel->setMinimumSize(QSize(49, 25));

        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QWidget *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Form", 0));
        label->setText(QApplication::translate("InventoryWindow", "Inventory", 0));
        confirmButton->setText(QApplication::translate("InventoryWindow", "Confirm", 0));
        cancelButton->setText(QApplication::translate("InventoryWindow", "Cancel", 0));
        addButton->setText(QApplication::translate("InventoryWindow", "Add", 0));
        removeButton->setText(QApplication::translate("InventoryWindow", "Remove", 0));
        searchIcon->setText(QString());
        detailsLabel->setText(QApplication::translate("InventoryWindow", "Details", 0));
        itemNameLabel->setText(QApplication::translate("InventoryWindow", "Item Name", 0));
        priceLabel->setText(QApplication::translate("InventoryWindow", "Price", 0));
        quanitityLabel->setText(QApplication::translate("InventoryWindow", "Quanitity", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
