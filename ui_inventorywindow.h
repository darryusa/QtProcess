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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *backgroundLabel;
    QPushButton *cancelButton;
    QPushButton *removeButton;
    QPushButton *addButton;
    QPushButton *confirmButton;
    QTableView *tableView;
    QLabel *inventoryTitle;
    QPushButton *returnButton;
    QPushButton *editButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *searchIcon;
    QLineEdit *searchLineEdit;

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
        cancelButton = new QPushButton(InventoryWindow);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(350, 470, 80, 22));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        cancelButton->setFont(font);
        cancelButton->setStyleSheet(QLatin1String("QPushButton{\n"
"        border-radius: 8px;\n"
"\n"
"\n"
"\n"
"        color: rgb(0, 0, 127);\n"
"\n"
"        background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
""));
        removeButton = new QPushButton(InventoryWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(663, 540, 210, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        removeButton->setFont(font1);
        removeButton->setStyleSheet(QLatin1String("QPushButton{\n"
"        border-radius: 20px;\n"
"        background-color: rgb(164, 179, 60);\n"
"\n"
"\n"
"        color: rgb(0, 0, 127);\n"
"\n"
"        background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
""));
        addButton = new QPushButton(InventoryWindow);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(151, 540, 210, 41));
        addButton->setFont(font1);
        addButton->setStyleSheet(QLatin1String("QPushButton{\n"
"        border-radius: 20px;\n"
"        background-color: rgb(164, 179, 60);\n"
"\n"
"\n"
"        color: rgb(0, 0, 127);\n"
"\n"
"        background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
""));
        confirmButton = new QPushButton(InventoryWindow);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(50, 470, 80, 22));
        confirmButton->setFont(font);
        confirmButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"        border-radius: 8px;\n"
"        color: rgb(0, 0, 127);\n"
"        background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"}\n"
""));
        tableView = new QTableView(InventoryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(29, 100, 961, 421));
        QFont font2;
        font2.setPointSize(16);
        tableView->setFont(font2);
        tableView->setStyleSheet(QLatin1String("QTableView {\n"
"        border-image: url(:/image/whiteboxBorder.jpeg);\n"
"        border-radius: 20px;\n"
"        color:rgb(0, 0, 0);\n"
"        background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"        border-radius: 8px;\n"
"        background: rgb(164, 179, 60);\n"
"        height: 25px;\n"
"}\n"
"QTableView::item:selected {\n"
"        background-color: rgb(164, 179, 60);\n"
"\n"
"}\n"
"QTableView::item {\n"
"        border-radius: 5px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: rgb(164, 179, 60);\n"
"    border: 2px outset rgb(164, 179, 60);\n"
"}\n"
"QScrollBar:vertical {\n"
"        background-color: none;\n"
"        width: 10px;\n"
"        border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"        background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"        stop: 0  rgb(164, 179, 60), stop: 0.5 rgb(164, 179, 60),  stop:1 rgb(164, 179, 60));\n"
"        min-height: 10px;\n"
"    border-radius: 5px;\n"
"    }\n"
"QScroll"
                        "Bar::add-line:vertical {\n"
"        height: 1px;\n"
"        border-radius: 3px;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"        height: 1px;\n"
"        border-radius: 3px;\n"
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
        inventoryTitle = new QLabel(InventoryWindow);
        inventoryTitle->setObjectName(QStringLiteral("inventoryTitle"));
        inventoryTitle->setGeometry(QRect(0, 0, 1024, 60));
        QFont font3;
        font3.setFamily(QStringLiteral("Symbola"));
        font3.setPointSize(36);
        font3.setBold(true);
        font3.setWeight(75);
        inventoryTitle->setFont(font3);
        inventoryTitle->setStyleSheet(QLatin1String("\n"
"\n"
"color: rgb(0, 0, 127);\n"
"\n"
""));
        inventoryTitle->setScaledContents(false);
        inventoryTitle->setAlignment(Qt::AlignCenter);
        returnButton = new QPushButton(InventoryWindow);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 10, 71, 31));
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"        background-color: rgb(140, 177, 63);\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(71, 31));
        editButton = new QPushButton(InventoryWindow);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(407, 540, 210, 41));
        editButton->setFont(font1);
        editButton->setStyleSheet(QLatin1String("QPushButton{\n"
"        border-radius: 20px;\n"
"        background-color: rgb(164, 179, 60);\n"
"\n"
"\n"
"        color: rgb(0, 0, 127);\n"
"\n"
"        background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
""));
        layoutWidget = new QWidget(InventoryWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 60, 491, 39));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchIcon = new QPushButton(layoutWidget);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon1);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);

        horizontalLayout->addWidget(searchIcon);

        searchLineEdit = new QLineEdit(layoutWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setMinimumSize(QSize(0, 35));
        QFont font4;
        font4.setPointSize(12);
        font4.setKerning(false);
        searchLineEdit->setFont(font4);
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"\n"
"        border-radius: 10px;\n"
"        color:rgb(0, 0, 0);\n"
"        background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        searchLineEdit->setMaxLength(32767);
        searchLineEdit->setCursorPosition(0);

        horizontalLayout->addWidget(searchLineEdit);


        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QWidget *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Form", 0));
        backgroundLabel->setText(QString());
        cancelButton->setText(QApplication::translate("InventoryWindow", "Cancel", 0));
        removeButton->setText(QApplication::translate("InventoryWindow", "Remove", 0));
        addButton->setText(QApplication::translate("InventoryWindow", "Add", 0));
        confirmButton->setText(QApplication::translate("InventoryWindow", "Confirm", 0));
        inventoryTitle->setText(QApplication::translate("InventoryWindow", "Inventory", 0));
        returnButton->setText(QString());
        editButton->setText(QApplication::translate("InventoryWindow", "Edit", 0));
        searchIcon->setText(QString());
        searchLineEdit->setText(QApplication::translate("InventoryWindow", " Search...", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
