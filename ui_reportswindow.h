/********************************************************************************
** Form generated from reading UI file 'reportswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSWINDOW_H
#define UI_REPORTSWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportsWindow
{
public:
    QPushButton *generateButton;
    QLabel *pictureLabel;
    QLabel *label;
    QPushButton *returnButton;
    QComboBox *timePeriodBox;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *totalLabel;
    QLineEdit *TaxTotalEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *totalLabel_3;
    QLineEdit *salesTaxTotalEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *totalLabel_2;
    QLineEdit *salesTotalEdit;
    QLabel *label_2;
    QWidget *customDateWidget;
    QWidget *layoutWidget;
    QHBoxLayout *customDateLayout;
    QLabel *label_3;
    QDateEdit *startCustomDate;
    QLabel *label_4;
    QDateEdit *endCustomDate;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1280, 720);
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(920, 90, 211, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        generateButton->setFont(font);
        generateButton->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"	border-image: url(:/image/featured-overlayOK.png);\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        pictureLabel = new QLabel(ReportsWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1280, 720));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        label = new QLabel(ReportsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 1041, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Symbola"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        returnButton = new QPushButton(ReportsWindow);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 10, 81, 41));
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(140, 177, 63);\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(71, 31));
        timePeriodBox = new QComboBox(ReportsWindow);
        timePeriodBox->setObjectName(QStringLiteral("timePeriodBox"));
        timePeriodBox->setGeometry(QRect(220, 90, 261, 49));
        timePeriodBox->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        tableView = new QTableView(ReportsWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(100, 150, 1061, 481));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(14);
        tableView->setFont(font2);
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QLatin1String("QTableView { \n"
"border-color: rgb(211, 225, 148);\n"
"	\n"
"	\n"
"	border-image: url(:/image/whiteboxBorder.jpeg);\n"
"	border-color: rgb(0, 0, 127);\n"
"	border-radius: 20px; \n"
"	\n"
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
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->horizontalHeader()->setDefaultSectionSize(175);
        tableView->horizontalHeader()->setMinimumSectionSize(300);
        tableView->verticalHeader()->setDefaultSectionSize(100);
        tableView->verticalHeader()->setMinimumSectionSize(100);
        formLayoutWidget = new QWidget(ReportsWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(170, 640, 921, 51));
        horizontalLayout = new QHBoxLayout(formLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        totalLabel = new QLabel(formLayoutWidget);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));
        totalLabel->setMinimumSize(QSize(0, 25));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        totalLabel->setFont(font3);

        horizontalLayout->addWidget(totalLabel);

        TaxTotalEdit = new QLineEdit(formLayoutWidget);
        TaxTotalEdit->setObjectName(QStringLiteral("TaxTotalEdit"));
        sizePolicy.setHeightForWidth(TaxTotalEdit->sizePolicy().hasHeightForWidth());
        TaxTotalEdit->setSizePolicy(sizePolicy);
        TaxTotalEdit->setMinimumSize(QSize(0, 25));
        TaxTotalEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} "));
        TaxTotalEdit->setReadOnly(true);

        horizontalLayout->addWidget(TaxTotalEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        totalLabel_3 = new QLabel(formLayoutWidget);
        totalLabel_3->setObjectName(QStringLiteral("totalLabel_3"));
        totalLabel_3->setMinimumSize(QSize(0, 25));
        totalLabel_3->setFont(font3);

        horizontalLayout->addWidget(totalLabel_3);

        salesTaxTotalEdit = new QLineEdit(formLayoutWidget);
        salesTaxTotalEdit->setObjectName(QStringLiteral("salesTaxTotalEdit"));
        sizePolicy.setHeightForWidth(salesTaxTotalEdit->sizePolicy().hasHeightForWidth());
        salesTaxTotalEdit->setSizePolicy(sizePolicy);
        salesTaxTotalEdit->setMinimumSize(QSize(0, 25));
        salesTaxTotalEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} "));
        salesTaxTotalEdit->setReadOnly(true);

        horizontalLayout->addWidget(salesTaxTotalEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        totalLabel_2 = new QLabel(formLayoutWidget);
        totalLabel_2->setObjectName(QStringLiteral("totalLabel_2"));
        totalLabel_2->setMinimumSize(QSize(0, 25));
        totalLabel_2->setFont(font3);

        horizontalLayout->addWidget(totalLabel_2);

        salesTotalEdit = new QLineEdit(formLayoutWidget);
        salesTotalEdit->setObjectName(QStringLiteral("salesTotalEdit"));
        sizePolicy.setHeightForWidth(salesTotalEdit->sizePolicy().hasHeightForWidth());
        salesTotalEdit->setSizePolicy(sizePolicy);
        salesTotalEdit->setMinimumSize(QSize(0, 25));
        salesTotalEdit->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
"} "));
        salesTotalEdit->setReadOnly(true);

        horizontalLayout->addWidget(salesTotalEdit);

        label_2 = new QLabel(ReportsWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 171, 49));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        customDateWidget = new QWidget(ReportsWindow);
        customDateWidget->setObjectName(QStringLiteral("customDateWidget"));
        customDateWidget->setGeometry(QRect(490, 90, 411, 61));
        layoutWidget = new QWidget(customDateWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 371, 51));
        customDateLayout = new QHBoxLayout(layoutWidget);
        customDateLayout->setObjectName(QStringLiteral("customDateLayout"));
        customDateLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 31));
        label_3->setBaseSize(QSize(0, 31));
        label_3->setFont(font4);

        customDateLayout->addWidget(label_3);

        startCustomDate = new QDateEdit(layoutWidget);
        startCustomDate->setObjectName(QStringLiteral("startCustomDate"));
        sizePolicy.setHeightForWidth(startCustomDate->sizePolicy().hasHeightForWidth());
        startCustomDate->setSizePolicy(sizePolicy);
        startCustomDate->setMinimumSize(QSize(0, 31));
        startCustomDate->setBaseSize(QSize(0, 31));
        startCustomDate->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        startCustomDate->setDateTime(QDateTime(QDate(2016, 7, 1), QTime(0, 0, 0)));
        startCustomDate->setCalendarPopup(true);
        startCustomDate->setCurrentSectionIndex(0);
        startCustomDate->setDate(QDate(2016, 7, 1));

        customDateLayout->addWidget(startCustomDate);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 31));
        label_4->setBaseSize(QSize(0, 31));
        label_4->setFont(font4);

        customDateLayout->addWidget(label_4);

        endCustomDate = new QDateEdit(layoutWidget);
        endCustomDate->setObjectName(QStringLiteral("endCustomDate"));
        sizePolicy.setHeightForWidth(endCustomDate->sizePolicy().hasHeightForWidth());
        endCustomDate->setSizePolicy(sizePolicy);
        endCustomDate->setMinimumSize(QSize(0, 31));
        endCustomDate->setBaseSize(QSize(0, 31));
        endCustomDate->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        endCustomDate->setCurrentSection(QDateTimeEdit::YearSection);
        endCustomDate->setCalendarPopup(true);
        endCustomDate->setDate(QDate(2016, 7, 26));

        customDateLayout->addWidget(endCustomDate);

        pictureLabel->raise();
        generateButton->raise();
        label->raise();
        returnButton->raise();
        timePeriodBox->raise();
        tableView->raise();
        formLayoutWidget->raise();
        label_2->raise();
        customDateWidget->raise();

        retranslateUi(ReportsWindow);

        QMetaObject::connectSlotsByName(ReportsWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportsWindow)
    {
        ReportsWindow->setWindowTitle(QApplication::translate("ReportsWindow", "Form", 0));
        generateButton->setText(QApplication::translate("ReportsWindow", "Submit", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("ReportsWindow", "Transaction Report", 0));
        returnButton->setText(QString());
        timePeriodBox->clear();
        timePeriodBox->insertItems(0, QStringList()
         << QApplication::translate("ReportsWindow", "Today", 0)
         << QApplication::translate("ReportsWindow", "Yesterday", 0)
         << QApplication::translate("ReportsWindow", "This Week", 0)
         << QApplication::translate("ReportsWindow", "LastWeek", 0)
         << QApplication::translate("ReportsWindow", "Custom", 0)
        );
        totalLabel->setText(QApplication::translate("ReportsWindow", "Tax Total", 0));
        totalLabel_3->setText(QApplication::translate("ReportsWindow", "Sales + Tax Total", 0));
        totalLabel_2->setText(QApplication::translate("ReportsWindow", "Sales Total", 0));
        label_2->setText(QApplication::translate("ReportsWindow", "Select time period", 0));
        label_3->setText(QApplication::translate("ReportsWindow", "From", 0));
        startCustomDate->setDisplayFormat(QApplication::translate("ReportsWindow", "yyyy-MM-dd", 0));
        label_4->setText(QApplication::translate("ReportsWindow", "To", 0));
        endCustomDate->setDisplayFormat(QApplication::translate("ReportsWindow", "yyyy-MM-dd", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
