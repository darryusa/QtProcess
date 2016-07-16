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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffWindow
{
public:
    QTextBrowser *textBrowser;
    QPushButton *Add;
    QPushButton *Remove;
    QTextBrowser *textBrowser_2;

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
        Add = new QPushButton(StaffWindow);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setGeometry(QRect(510, 650, 281, 81));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        Add->setFont(font);
        Remove = new QPushButton(StaffWindow);
        Remove->setObjectName(QStringLiteral("Remove"));
        Remove->setGeometry(QRect(800, 650, 281, 81));
        Remove->setFont(font);
        Remove->setLayoutDirection(Qt::RightToLeft);
        textBrowser_2 = new QTextBrowser(StaffWindow);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(400, 0, 624, 600));

        retranslateUi(StaffWindow);

        QMetaObject::connectSlotsByName(StaffWindow);
    } // setupUi

    void retranslateUi(QWidget *StaffWindow)
    {
        StaffWindow->setWindowTitle(QApplication::translate("StaffWindow", "Form", 0));
        Add->setText(QApplication::translate("StaffWindow", "Add", 0));
        Remove->setText(QApplication::translate("StaffWindow", "Remove", 0));
    } // retranslateUi

};

namespace Ui {
    class StaffWindow: public Ui_StaffWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFWINDOW_H
