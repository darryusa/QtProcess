/********************************************************************************
** Form generated from reading UI file 'reportswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSWINDOW_H
#define UI_REPORTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *totalLabel;
    QLineEdit *totalLineEdit;

    void setupUi(QWidget *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QStringLiteral("ReportsWindow"));
        ReportsWindow->resize(1024, 600);
        generateButton = new QPushButton(ReportsWindow);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(730, 80, 71, 31));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        generateButton->setFont(font);
        generateButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
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
        dateEdit = new QDateEdit(ReportsWindow);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(380, 72, 110, 31));
        dateEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(0);
        dateEdit_2 = new QDateEdit(ReportsWindow);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(520, 72, 110, 31));
        comboBox = new QComboBox(ReportsWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 71, 261, 31));
        tableView = new QTableView(ReportsWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(70, 110, 881, 401));
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
        formLayoutWidget->setGeometry(QRect(590, 520, 361, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        totalLabel = new QLabel(formLayoutWidget);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));
        totalLabel->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::LabelRole, totalLabel);

        totalLineEdit = new QLineEdit(formLayoutWidget);
        totalLineEdit->setObjectName(QStringLiteral("totalLineEdit"));
        totalLineEdit->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, totalLineEdit);

        pictureLabel->raise();
        generateButton->raise();
        label->raise();
        returnButton->raise();
        dateEdit->raise();
        dateEdit_2->raise();
        comboBox->raise();
        tableView->raise();
        formLayoutWidget->raise();

        retranslateUi(ReportsWindow);

        QMetaObject::connectSlotsByName(ReportsWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportsWindow)
    {
        ReportsWindow->setWindowTitle(QApplication::translate("ReportsWindow", "Form", 0));
        generateButton->setText(QApplication::translate("ReportsWindow", "Generate Reports", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("ReportsWindow", "Transaction Report", 0));
        returnButton->setText(QString());
        dateEdit->setDisplayFormat(QApplication::translate("ReportsWindow", "MM/dd/yyyy", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ReportsWindow", "Today", 0)
         << QApplication::translate("ReportsWindow", "Yesterday", 0)
         << QApplication::translate("ReportsWindow", "This Week", 0)
         << QApplication::translate("ReportsWindow", "LastWeek", 0)
         << QApplication::translate("ReportsWindow", "Custom", 0)
        );
        totalLabel->setText(QApplication::translate("ReportsWindow", "Total", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
