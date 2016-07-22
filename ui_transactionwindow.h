/********************************************************************************
** Form generated from reading UI file 'transactionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONWINDOW_H
#define UI_TRANSACTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:
    QPushButton *deleteButton;
    QPushButton *checkoutButton;
    QLabel *pictureLabel;
    QFrame *frame_2;
    QLabel *label_4;
    QLabel *name;
    QFrame *frame_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QLabel *subTotalLabel;
    QLineEdit *subTotalLineEdit;
    QLabel *taxLabel;
    QLineEdit *taxLineEdit;
    QLabel *totalLabel;
    QLineEdit *totalLineEdit;
    QLabel *label;
    QTreeWidget *treeWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *searchBarLabel;
    QLineEdit *searchBarLineEdit;
    QTabWidget *tabWidget;
    QWidget *allTab;
    QTableView *allTableView;
    QWidget *massageTab;
    QTableView *massageTableView;
    QWidget *hairTab;
    QTableView *hairTableView;
    QWidget *nailTab;
    QTableView *nailTableView;
    QWidget *itemsTab;
    QTableView *itemTableview;

    void setupUi(QWidget *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName(QStringLiteral("TransactionWindow"));
        TransactionWindow->resize(1024, 600);
        deleteButton = new QPushButton(TransactionWindow);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(610, 520, 181, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        deleteButton->setFont(font);
        deleteButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 20px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        checkoutButton = new QPushButton(TransactionWindow);
        checkoutButton->setObjectName(QStringLiteral("checkoutButton"));
        checkoutButton->setGeometry(QRect(810, 520, 181, 51));
        checkoutButton->setFont(font);
        checkoutButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 20px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        pictureLabel = new QLabel(TransactionWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, -10, 1024, 611));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(TransactionWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1000, 61));
        frame_2->setStyleSheet(QStringLiteral("background-color:none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 0, 931, 61));
        QFont font1;
        font1.setPointSize(36);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color: black;"));
        label_4->setAlignment(Qt::AlignCenter);
        name = new QLabel(frame_2);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(880, 0, 121, 61));
        QFont font2;
        font2.setPointSize(18);
        name->setFont(font2);
        frame_3 = new QFrame(TransactionWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(80, 80, 481, 501));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(202, 218, 154);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 390, 481, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        subTotalLabel = new QLabel(frame);
        subTotalLabel->setObjectName(QStringLiteral("subTotalLabel"));
        subTotalLabel->setMinimumSize(QSize(0, 25));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, subTotalLabel);

        subTotalLineEdit = new QLineEdit(frame);
        subTotalLineEdit->setObjectName(QStringLiteral("subTotalLineEdit"));
        subTotalLineEdit->setMinimumSize(QSize(0, 25));
        subTotalLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));
        subTotalLineEdit->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, subTotalLineEdit);

        taxLabel = new QLabel(frame);
        taxLabel->setObjectName(QStringLiteral("taxLabel"));
        taxLabel->setMinimumSize(QSize(0, 25));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, taxLabel);

        taxLineEdit = new QLineEdit(frame);
        taxLineEdit->setObjectName(QStringLiteral("taxLineEdit"));
        taxLineEdit->setMinimumSize(QSize(0, 25));
        taxLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));
        taxLineEdit->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, taxLineEdit);

        totalLabel = new QLabel(frame);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));
        totalLabel->setMinimumSize(QSize(0, 25));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, totalLabel);

        totalLineEdit = new QLineEdit(frame);
        totalLineEdit->setObjectName(QStringLiteral("totalLineEdit"));
        totalLineEdit->setMinimumSize(QSize(0, 25));
        totalLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));
        totalLineEdit->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, totalLineEdit);


        verticalLayout->addLayout(formLayout_3);

        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 481, 41));
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        treeWidget = new QTreeWidget(frame_3);
        QFont font4;
        font4.setPointSize(9);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(0, font4);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 50, 481, 341));
        treeWidget->setMinimumSize(QSize(25, 25));
        QFont font5;
        font5.setPointSize(14);
        treeWidget->setFont(font5);
        treeWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        treeWidget->setUniformRowHeights(true);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->setWordWrap(true);
        treeWidget->setColumnCount(3);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setDefaultSectionSize(100);
        treeWidget->header()->setMinimumSectionSize(26);
        treeWidget->header()->setStretchLastSection(false);
        frame->raise();
        label->raise();
        treeWidget->raise();
        label_4->raise();
        formLayoutWidget = new QWidget(TransactionWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(590, 80, 421, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        searchBarLabel = new QLabel(formLayoutWidget);
        searchBarLabel->setObjectName(QStringLiteral("searchBarLabel"));
        searchBarLabel->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::LabelRole, searchBarLabel);

        searchBarLineEdit = new QLineEdit(formLayoutWidget);
        searchBarLineEdit->setObjectName(QStringLiteral("searchBarLineEdit"));
        searchBarLineEdit->setMinimumSize(QSize(0, 25));
        searchBarLineEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 12px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
""));
        searchBarLineEdit->setAlignment(Qt::AlignCenter);
        searchBarLineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);

        formLayout->setWidget(0, QFormLayout::FieldRole, searchBarLineEdit);

        tabWidget = new QTabWidget(TransactionWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(590, 110, 421, 371));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setTabBarAutoHide(true);
        allTab = new QWidget();
        allTab->setObjectName(QStringLiteral("allTab"));
        allTableView = new QTableView(allTab);
        allTableView->setObjectName(QStringLiteral("allTableView"));
        allTableView->setGeometry(QRect(0, 0, 401, 371));
        allTableView->setStyleSheet(QLatin1String("QTableView { \n"
"	border-radius: 20px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} \n"
"\n"
"QTableView::item:selected {\n"
"   	background-color: rgb(164, 179, 60);\n"
"	border-radius: 8px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: red;\n"
"    border: 2px outset red;\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"	border-radius: 8px;\n"
"	background: rgb(164, 179, 60);\n"
"	height: 25px;\n"
"}\n"
"QTableView::item\n"
"{\n"
"	border-radius: 8px;\n"
"\n"
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
""
                        "	border-radius: 3px;\n"
"\n"
"}"));
        allTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        allTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        allTableView->setDragEnabled(true);
        allTableView->setDragDropOverwriteMode(false);
        allTableView->setAlternatingRowColors(true);
        allTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        allTableView->setGridStyle(Qt::NoPen);
        allTableView->setCornerButtonEnabled(false);
        allTableView->horizontalHeader()->setVisible(false);
        allTableView->horizontalHeader()->setCascadingSectionResizes(true);
        allTableView->horizontalHeader()->setHighlightSections(false);
        allTableView->verticalHeader()->setVisible(false);
        allTableView->verticalHeader()->setCascadingSectionResizes(true);
        allTableView->verticalHeader()->setHighlightSections(false);
        allTableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        tabWidget->addTab(allTab, QString());
        massageTab = new QWidget();
        massageTab->setObjectName(QStringLiteral("massageTab"));
        massageTableView = new QTableView(massageTab);
        massageTableView->setObjectName(QStringLiteral("massageTableView"));
        massageTableView->setGeometry(QRect(0, 0, 401, 371));
        massageTableView->setStyleSheet(QLatin1String("QTableView { \n"
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
        tabWidget->addTab(massageTab, QString());
        hairTab = new QWidget();
        hairTab->setObjectName(QStringLiteral("hairTab"));
        hairTableView = new QTableView(hairTab);
        hairTableView->setObjectName(QStringLiteral("hairTableView"));
        hairTableView->setGeometry(QRect(0, 0, 401, 371));
        hairTableView->setStyleSheet(QLatin1String("QTableView { \n"
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
        tabWidget->addTab(hairTab, QString());
        nailTab = new QWidget();
        nailTab->setObjectName(QStringLiteral("nailTab"));
        nailTableView = new QTableView(nailTab);
        nailTableView->setObjectName(QStringLiteral("nailTableView"));
        nailTableView->setGeometry(QRect(0, 0, 401, 371));
        nailTableView->setStyleSheet(QLatin1String("QTableView { \n"
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
        tabWidget->addTab(nailTab, QString());
        itemsTab = new QWidget();
        itemsTab->setObjectName(QStringLiteral("itemsTab"));
        itemTableview = new QTableView(itemsTab);
        itemTableview->setObjectName(QStringLiteral("itemTableview"));
        itemTableview->setGeometry(QRect(0, 0, 401, 371));
        itemTableview->setStyleSheet(QLatin1String("QTableView { \n"
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
        itemTableview->setFrameShape(QFrame::NoFrame);
        itemTableview->setLineWidth(0);
        itemTableview->setGridStyle(Qt::NoPen);
        tabWidget->addTab(itemsTab, QString());
        pictureLabel->raise();
        deleteButton->raise();
        checkoutButton->raise();
        frame_2->raise();
        frame_3->raise();
        formLayoutWidget->raise();
        tabWidget->raise();
        label_4->raise();

        retranslateUi(TransactionWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QWidget *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QApplication::translate("TransactionWindow", "Form", 0));
        deleteButton->setText(QApplication::translate("TransactionWindow", "DELETE", 0));
        checkoutButton->setText(QApplication::translate("TransactionWindow", "CHECK OUT", 0));
        pictureLabel->setText(QString());
        label_4->setText(QApplication::translate("TransactionWindow", "Sale Transaction", 0));
        name->setText(QApplication::translate("TransactionWindow", "Name", 0));
        subTotalLabel->setText(QApplication::translate("TransactionWindow", "Sub Total: ", 0));
        taxLabel->setText(QApplication::translate("TransactionWindow", "Tax", 0));
        totalLabel->setText(QApplication::translate("TransactionWindow", "Total", 0));
        label->setText(QApplication::translate("TransactionWindow", "Bill of Sale", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("TransactionWindow", "Price", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("TransactionWindow", "Quantity", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("TransactionWindow", "Name", 0));
        searchBarLabel->setText(QApplication::translate("TransactionWindow", "searchBar", 0));
        tabWidget->setTabText(tabWidget->indexOf(allTab), QApplication::translate("TransactionWindow", "All", 0));
        tabWidget->setTabText(tabWidget->indexOf(massageTab), QApplication::translate("TransactionWindow", "Massage ", 0));
        tabWidget->setTabText(tabWidget->indexOf(hairTab), QApplication::translate("TransactionWindow", "Hair", 0));
        tabWidget->setTabText(tabWidget->indexOf(nailTab), QApplication::translate("TransactionWindow", "Nail", 0));
        tabWidget->setTabText(tabWidget->indexOf(itemsTab), QApplication::translate("TransactionWindow", "Items", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
