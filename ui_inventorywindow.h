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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventoryWindow
{
public:
    QTableView *tableView;
    QLineEdit *searchLineEdit;
    QPushButton *searchIcon;
    QLabel *backgroundLabel;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_3;
    QLineEdit *detailsLineEdit;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLineEdit *itemNameLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *quanitityLineEdit;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *removeButton;
    QPushButton *addButton;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *itemNameLabel;
    QLabel *quanitityLabel;
    QLabel *priceLabel;
    QLabel *detailsLabel;

    void setupUi(QWidget *InventoryWindow)
    {
        if (InventoryWindow->objectName().isEmpty())
            InventoryWindow->setObjectName(QStringLiteral("InventoryWindow"));
        InventoryWindow->resize(1024, 600);
        tableView = new QTableView(InventoryWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(580, 160, 431, 391));
        QFont font;
        font.setPointSize(16);
        tableView->setFont(font);
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
        searchLineEdit->setGeometry(QRect(610, 120, 401, 31));
        searchLineEdit->setMinimumSize(QSize(0, 25));
        searchLineEdit->setFont(font);
        searchLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
""));
        searchIcon = new QPushButton(InventoryWindow);
        searchIcon->setObjectName(QStringLiteral("searchIcon"));
        searchIcon->setGeometry(QRect(570, 120, 41, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/noun_79907_cc.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchIcon->setIcon(icon);
        searchIcon->setIconSize(QSize(41, 31));
        searchIcon->setFlat(true);
        backgroundLabel = new QLabel(InventoryWindow);
        backgroundLabel->setObjectName(QStringLiteral("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(0, 0, 1024, 600));
        backgroundLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        backgroundLabel->setScaledContents(true);
        frame_2 = new QFrame(InventoryWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(12, 12, 1000, 72));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 0, 231, 61));
        QFont font1;
        font1.setPointSize(36);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(InventoryWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(160, 120, 400, 360));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(202, 218, 154);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        detailsLineEdit = new QLineEdit(frame_3);
        detailsLineEdit->setObjectName(QStringLiteral("detailsLineEdit"));
        detailsLineEdit->setGeometry(QRect(10, 150, 381, 150));
        detailsLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} "));
        detailsLineEdit->setAlignment(Qt::AlignCenter);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 400, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        itemNameLineEdit = new QLineEdit(frame);
        itemNameLineEdit->setObjectName(QStringLiteral("itemNameLineEdit"));
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

        verticalLayout->addWidget(itemNameLineEdit);

        priceLineEdit = new QLineEdit(frame);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));
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

        verticalLayout->addWidget(priceLineEdit);

        quanitityLineEdit = new QLineEdit(frame);
        quanitityLineEdit->setObjectName(QStringLiteral("quanitityLineEdit"));
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

        verticalLayout->addWidget(quanitityLineEdit);

        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 300, 401, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        confirmButton = new QPushButton(frame_4);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(22);
        confirmButton->setFont(font2);
        confirmButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout->addWidget(confirmButton);

        cancelButton = new QPushButton(frame_4);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy3);
        cancelButton->setFont(font2);
        cancelButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout->addWidget(cancelButton);

        frame_5 = new QFrame(InventoryWindow);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(160, 480, 401, 111));
        frame_5->setFont(font2);
        frame_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        removeButton = new QPushButton(frame_5);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        QFont font3;
        font3.setPointSize(26);
        removeButton->setFont(font3);
        removeButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(removeButton);

        addButton = new QPushButton(frame_5);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setFont(font3);
        addButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(addButton);

        frame_6 = new QFrame(InventoryWindow);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 120, 151, 191));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        frame_6->setFont(font4);
        frame_6->setToolTipDuration(-3);
        frame_6->setLayoutDirection(Qt::RightToLeft);
        frame_6->setAutoFillBackground(false);
        frame_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        itemNameLabel = new QLabel(frame_6);
        itemNameLabel->setObjectName(QStringLiteral("itemNameLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(itemNameLabel->sizePolicy().hasHeightForWidth());
        itemNameLabel->setSizePolicy(sizePolicy4);
        itemNameLabel->setMinimumSize(QSize(66, 25));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        itemNameLabel->setFont(font5);

        verticalLayout_2->addWidget(itemNameLabel);

        quanitityLabel = new QLabel(frame_6);
        quanitityLabel->setObjectName(QStringLiteral("quanitityLabel"));
        sizePolicy4.setHeightForWidth(quanitityLabel->sizePolicy().hasHeightForWidth());
        quanitityLabel->setSizePolicy(sizePolicy4);
        quanitityLabel->setMinimumSize(QSize(49, 25));
        quanitityLabel->setFont(font5);

        verticalLayout_2->addWidget(quanitityLabel);

        priceLabel = new QLabel(frame_6);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));
        sizePolicy4.setHeightForWidth(priceLabel->sizePolicy().hasHeightForWidth());
        priceLabel->setSizePolicy(sizePolicy4);
        priceLabel->setMinimumSize(QSize(65, 25));
        priceLabel->setFont(font5);

        verticalLayout_2->addWidget(priceLabel);

        detailsLabel = new QLabel(frame_6);
        detailsLabel->setObjectName(QStringLiteral("detailsLabel"));
        detailsLabel->setFont(font5);

        verticalLayout_2->addWidget(detailsLabel);

        backgroundLabel->raise();
        tableView->raise();
        searchLineEdit->raise();
        searchIcon->raise();
        frame_2->raise();
        frame_3->raise();
        frame_5->raise();
        frame_6->raise();

        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QWidget *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QApplication::translate("InventoryWindow", "Form", 0));
        searchLineEdit->setText(QApplication::translate("InventoryWindow", "  Search...", 0));
        searchIcon->setText(QString());
        backgroundLabel->setText(QString());
        label->setText(QApplication::translate("InventoryWindow", "Inventory", 0));
        confirmButton->setText(QApplication::translate("InventoryWindow", "Confirm", 0));
        cancelButton->setText(QApplication::translate("InventoryWindow", "Cancel", 0));
        removeButton->setText(QApplication::translate("InventoryWindow", "Remove", 0));
        addButton->setText(QApplication::translate("InventoryWindow", "Add", 0));
#ifndef QT_NO_TOOLTIP
        frame_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        itemNameLabel->setText(QApplication::translate("InventoryWindow", "Item Name", 0));
        quanitityLabel->setText(QApplication::translate("InventoryWindow", "Quanitity", 0));
        priceLabel->setText(QApplication::translate("InventoryWindow", "Price", 0));
        detailsLabel->setText(QApplication::translate("InventoryWindow", "Details", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
