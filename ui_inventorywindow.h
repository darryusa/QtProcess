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
    QPushButton *removeButton;
    QPushButton *addButton;
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
        removeButton = new QPushButton(InventoryWindow);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(650, 540, 211, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        removeButton->setFont(font);
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
        addButton->setFont(font);
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
        tableView = new QTableView(InventoryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(29, 110, 961, 411));
        QFont font1;
        font1.setPointSize(16);
        tableView->setFont(font1);
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
        inventoryTitle = new QLabel(InventoryWindow);
        inventoryTitle->setObjectName(QStringLiteral("inventoryTitle"));
        inventoryTitle->setGeometry(QRect(0, 0, 1024, 60));
        QFont font2;
        font2.setFamily(QStringLiteral("Symbola"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        inventoryTitle->setFont(font2);
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
"background-color: none;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(71, 31));
        editButton = new QPushButton(InventoryWindow);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(380, 540, 211, 41));
        editButton->setFont(font);
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
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	\n"
"	border-radius: 10px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));

        horizontalLayout->addWidget(searchLineEdit);


        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QWidget *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Form", 0));
        backgroundLabel->setText(QString());
        removeButton->setText(QApplication::translate("InventoryWindow", "Remove", 0));
        addButton->setText(QApplication::translate("InventoryWindow", "Add", 0));
        inventoryTitle->setText(QApplication::translate("InventoryWindow", "Inventory", 0));
        returnButton->setText(QString());
        editButton->setText(QApplication::translate("InventoryWindow", "Edit", 0));
        searchIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
