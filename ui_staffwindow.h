/********************************************************************************
** Form generated from reading UI file 'staffwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFWINDOW_H
#define UI_STAFFWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTableView *tableView;
    QPushButton *pushButton_DELETE;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *lineEdit_phone;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_address;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit_pin;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_first;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_last;
    QPushButton *pushButton_ADD;
    QPushButton *pushButton_EDIT;

    void setupUi(QWidget *StaffWindow)
    {
        if (StaffWindow->objectName().isEmpty())
            StaffWindow->setObjectName(QStringLiteral("StaffWindow"));
        StaffWindow->resize(1024, 600);
        StaffWindow->setToolTipDuration(-6);
        StaffWindow->setLayoutDirection(Qt::LeftToRight);
        textBrowser = new QTextBrowser(StaffWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 400, 600));
        textBrowser_2 = new QTextBrowser(StaffWindow);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(400, 0, 624, 600));
        tableView = new QTableView(StaffWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(440, 130, 321, 331));
        pushButton_DELETE = new QPushButton(StaffWindow);
        pushButton_DELETE->setObjectName(QStringLiteral("pushButton_DELETE"));
        pushButton_DELETE->setGeometry(QRect(640, 470, 99, 27));
        verticalLayoutWidget = new QWidget(StaffWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 341, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        lineEdit_phone = new QLineEdit(verticalLayoutWidget);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        horizontalLayout_9->addWidget(lineEdit_phone);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_address = new QLineEdit(verticalLayoutWidget);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));

        horizontalLayout_8->addWidget(lineEdit_address);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_email = new QLineEdit(verticalLayoutWidget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        horizontalLayout_5->addWidget(lineEdit_email);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_pin = new QLineEdit(verticalLayoutWidget);
        lineEdit_pin->setObjectName(QStringLiteral("lineEdit_pin"));

        horizontalLayout_7->addWidget(lineEdit_pin);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_5 = new QWidget(StaffWindow);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(440, 60, 321, 61));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEdit_first = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));

        verticalLayout_4->addWidget(lineEdit_first);


        horizontalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        lineEdit_last = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_last->setObjectName(QStringLiteral("lineEdit_last"));

        verticalLayout_5->addWidget(lineEdit_last);


        horizontalLayout_10->addLayout(verticalLayout_5);

        pushButton_ADD = new QPushButton(StaffWindow);
        pushButton_ADD->setObjectName(QStringLiteral("pushButton_ADD"));
        pushButton_ADD->setGeometry(QRect(470, 470, 99, 27));
        pushButton_EDIT = new QPushButton(StaffWindow);
        pushButton_EDIT->setObjectName(QStringLiteral("pushButton_EDIT"));
        pushButton_EDIT->setGeometry(QRect(90, 430, 99, 27));

        retranslateUi(StaffWindow);

        QMetaObject::connectSlotsByName(StaffWindow);
    } // setupUi

    void retranslateUi(QWidget *StaffWindow)
    {
        StaffWindow->setWindowTitle(QApplication::translate("StaffWindow", "Form", 0));
        pushButton_DELETE->setText(QApplication::translate("StaffWindow", "DELETE", 0));
        label_4->setText(QApplication::translate("StaffWindow", "Phone", 0));
        label_3->setText(QApplication::translate("StaffWindow", "Address", 0));
        label->setText(QApplication::translate("StaffWindow", "Email", 0));
        label_2->setText(QApplication::translate("StaffWindow", "Pin", 0));
        label_5->setText(QApplication::translate("StaffWindow", "Last", 0));
        label_6->setText(QApplication::translate("StaffWindow", "FIrst", 0));
        pushButton_ADD->setText(QApplication::translate("StaffWindow", "ADD", 0));
        pushButton_EDIT->setText(QApplication::translate("StaffWindow", "EDIT", 0));
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
