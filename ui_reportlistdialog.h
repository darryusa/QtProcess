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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReportListDialog
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ReportListDialog)
    {
        if (ReportListDialog->objectName().isEmpty())
            ReportListDialog->setObjectName(QStringLiteral("ReportListDialog"));
        ReportListDialog->resize(1024, 600);
        tableView = new QTableView(ReportListDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 90, 1001, 501));

        retranslateUi(ReportListDialog);

        QMetaObject::connectSlotsByName(ReportListDialog);
    } // setupUi

    void retranslateUi(QDialog *ReportListDialog)
    {
        ReportListDialog->setWindowTitle(QApplication::translate("ReportListDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ReportListDialog: public Ui_ReportListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTLISTDIALOG_H
