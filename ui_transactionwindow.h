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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:

    void setupUi(QWidget *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName(QStringLiteral("TransactionWindow"));
        TransactionWindow->resize(400, 300);

        retranslateUi(TransactionWindow);

        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QWidget *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QApplication::translate("TransactionWindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
