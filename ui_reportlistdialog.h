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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReportListDialog
{
public:
    QTableView *tableView;
    QLabel *pictureLabel;
    QFrame *frame_2;
    QLabel *label;

    void setupUi(QDialog *ReportListDialog)
    {
        if (ReportListDialog->objectName().isEmpty())
            ReportListDialog->setObjectName(QStringLiteral("ReportListDialog"));
        ReportListDialog->resize(1024, 600);
        tableView = new QTableView(ReportListDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 100, 890, 450));
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
        pictureLabel = new QLabel(ReportListDialog);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(ReportListDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1000, 72));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1001, 71));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        pictureLabel->raise();
        tableView->raise();
        frame_2->raise();

        retranslateUi(ReportListDialog);

        QMetaObject::connectSlotsByName(ReportListDialog);
    } // setupUi

    void retranslateUi(QDialog *ReportListDialog)
    {
        ReportListDialog->setWindowTitle(QApplication::translate("ReportListDialog", "Dialog", 0));
        pictureLabel->setText(QString());
        label->setText(QApplication::translate("ReportListDialog", "Transaction Report", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportListDialog: public Ui_ReportListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTLISTDIALOG_H
