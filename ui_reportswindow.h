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
    QWidget *widget;
    QHBoxLayout *customDateLayout;
    QLabel *label_3;
    QDateEdit *startCustomDate;
    QLabel *label_4;
    QDateEdit *endCustomDate;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1024, 600);
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(861, 70, 151, 31));
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
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        label = new QLabel(ReportsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 931, 61));
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
        returnButton->setGeometry(QRect(20, 10, 71, 31));
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
        timePeriodBox->setGeometry(QRect(190, 70, 261, 31));
        timePeriodBox->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        tableView = new QTableView(ReportsWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 110, 1001, 441));
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
        formLayoutWidget = new QWidget(ReportsWindow);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 560, 731, 27));
        horizontalLayout = new QHBoxLayout(formLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        totalLabel = new QLabel(formLayoutWidget);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));
        totalLabel->setMinimumSize(QSize(0, 25));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        totalLabel->setFont(font2);

        horizontalLayout->addWidget(totalLabel);

        TaxTotalEdit = new QLineEdit(formLayoutWidget);
        TaxTotalEdit->setObjectName(QStringLiteral("TaxTotalEdit"));
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
        totalLabel_3->setFont(font2);

        horizontalLayout->addWidget(totalLabel_3);

        salesTaxTotalEdit = new QLineEdit(formLayoutWidget);
        salesTaxTotalEdit->setObjectName(QStringLiteral("salesTaxTotalEdit"));
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
        totalLabel_2->setFont(font2);

        horizontalLayout->addWidget(totalLabel_2);

        salesTotalEdit = new QLineEdit(formLayoutWidget);
        salesTotalEdit->setObjectName(QStringLiteral("salesTotalEdit"));
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
        label_2->setGeometry(QRect(20, 70, 171, 31));
        label_2->setFont(font2);
        customDateWidget = new QWidget(ReportsWindow);
        customDateWidget->setObjectName(QStringLiteral("customDateWidget"));
        customDateWidget->setGeometry(QRect(485, 68, 311, 33));
        widget = new QWidget(customDateWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -8, 271, 51));
        customDateLayout = new QHBoxLayout(widget);
        customDateLayout->setObjectName(QStringLiteral("customDateLayout"));
        customDateLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 31));
        label_3->setBaseSize(QSize(0, 31));
        label_3->setFont(font2);

        customDateLayout->addWidget(label_3);

        startCustomDate = new QDateEdit(widget);
        startCustomDate->setObjectName(QStringLiteral("startCustomDate"));
        startCustomDate->setMinimumSize(QSize(0, 31));
        startCustomDate->setBaseSize(QSize(0, 31));
        startCustomDate->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        startCustomDate->setDateTime(QDateTime(QDate(2000, 3, 1), QTime(0, 0, 0)));
        startCustomDate->setCalendarPopup(true);
        startCustomDate->setCurrentSectionIndex(0);
        startCustomDate->setDate(QDate(2000, 3, 1));

        customDateLayout->addWidget(startCustomDate);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 31));
        label_4->setBaseSize(QSize(0, 31));
        label_4->setFont(font2);

        customDateLayout->addWidget(label_4);

        endCustomDate = new QDateEdit(widget);
        endCustomDate->setObjectName(QStringLiteral("endCustomDate"));
        endCustomDate->setMinimumSize(QSize(0, 31));
        endCustomDate->setBaseSize(QSize(0, 31));
        endCustomDate->setStyleSheet(QLatin1String("\n"
"	border-radius: 8px; \n"
"	color:rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255); \n"
""));
        endCustomDate->setCurrentSection(QDateTimeEdit::YearSection);
        endCustomDate->setCalendarPopup(true);
        endCustomDate->setDate(QDate(2016, 7, 23));

        customDateLayout->addWidget(endCustomDate);

        label_3->raise();
        startCustomDate->raise();
        label_4->raise();
        endCustomDate->raise();
        widget->raise();
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
