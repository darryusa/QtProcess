/********************************************************************************
** Form generated from reading UI file 'reportlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTLISTDIALOG_H
#define UI_REPORTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReportListDialog
{
public:
    QTableView *tableView;
    QLabel *pictureLabel;
    QLabel *label;
    QPushButton *returnButton;
    QTableView *tableView_2;

    void setupUi(QDialog *ReportListDialog)
    {
        if (ReportListDialog->objectName().isEmpty())
            ReportListDialog->setObjectName(QStringLiteral("ReportListDialog"));
        ReportListDialog->resize(1024, 600);
        tableView = new QTableView(ReportListDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 100, 881, 450));
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
        pictureLabel = new QLabel(ReportListDialog);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        pictureLabel->setFont(font);
        pictureLabel->setAutoFillBackground(false);
        pictureLabel->setStyleSheet(QLatin1String("background-color: rgb(121, 149, 47);\n"
""));
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        label = new QLabel(ReportListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 861, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Symbola"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        label->setAlignment(Qt::AlignCenter);
        returnButton = new QPushButton(ReportListDialog);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(20, 10, 71, 31));
        returnButton->setStyleSheet(QLatin1String("QPushButton{\n"
"\n"
"	background-color: rgb(140, 177, 63);\n"
"\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        returnButton->setIcon(icon);
        returnButton->setIconSize(QSize(71, 31));
        tableView_2 = new QTableView(ReportListDialog);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(320, 220, 881, 450));
        tableView_2->setStyleSheet(QLatin1String("QTableView { \n"
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
        pictureLabel->raise();
        tableView->raise();
        label->raise();
        returnButton->raise();
        tableView_2->raise();

        retranslateUi(ReportListDialog);

        QMetaObject::connectSlotsByName(ReportListDialog);
    } // setupUi

    void retranslateUi(QDialog *ReportListDialog)
    {
        ReportListDialog->setWindowTitle(QApplication::translate("ReportListDialog", "Dialog", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("ReportListDialog", "Transaction Report", 0));
        returnButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReportListDialog: public Ui_ReportListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTLISTDIALOG_H
