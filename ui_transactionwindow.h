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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionWindow
{
public:
    QTableView *tableView;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_subTotal;
    QLineEdit *lineEdit_2_tax;
    QLineEdit *lineEdit_3_grandTotal;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TransactionWindow)
    {
        if (TransactionWindow->objectName().isEmpty())
            TransactionWindow->setObjectName(QStringLiteral("TransactionWindow"));
        TransactionWindow->resize(1024, 600);
        tableView = new QTableView(TransactionWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(535, 10, 441, 431));
        listWidget = new QListWidget(TransactionWindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 481, 431));
        pushButton = new QPushButton(TransactionWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 550, 99, 27));
        label = new QLabel(TransactionWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 470, 67, 17));
        label_2 = new QLabel(TransactionWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 500, 67, 17));
        label_3 = new QLabel(TransactionWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 520, 91, 17));
        lineEdit_subTotal = new QLineEdit(TransactionWindow);
        lineEdit_subTotal->setObjectName(QStringLiteral("lineEdit_subTotal"));
        lineEdit_subTotal->setGeometry(QRect(260, 460, 113, 27));
        lineEdit_2_tax = new QLineEdit(TransactionWindow);
        lineEdit_2_tax->setObjectName(QStringLiteral("lineEdit_2_tax"));
        lineEdit_2_tax->setGeometry(QRect(210, 490, 113, 27));
        lineEdit_3_grandTotal = new QLineEdit(TransactionWindow);
        lineEdit_3_grandTotal->setObjectName(QStringLiteral("lineEdit_3_grandTotal"));
        lineEdit_3_grandTotal->setGeometry(QRect(250, 520, 113, 27));
        pushButton_2 = new QPushButton(TransactionWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 550, 99, 27));

        retranslateUi(TransactionWindow);

        QMetaObject::connectSlotsByName(TransactionWindow);
    } // setupUi

    void retranslateUi(QWidget *TransactionWindow)
    {
        TransactionWindow->setWindowTitle(QApplication::translate("TransactionWindow", "Form", 0));
        pushButton->setText(QApplication::translate("TransactionWindow", "DELETE", 0));
        label->setText(QApplication::translate("TransactionWindow", "sub total: ", 0));
        label_2->setText(QApplication::translate("TransactionWindow", "tax:", 0));
        label_3->setText(QApplication::translate("TransactionWindow", "grand total:", 0));
        pushButton_2->setText(QApplication::translate("TransactionWindow", "CHECK OUT", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactionWindow: public Ui_TransactionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONWINDOW_H
