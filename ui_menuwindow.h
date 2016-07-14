/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QPushButton *inventoryButton;
    QPushButton *saleButton;
    QPushButton *reportButton;
    QPushButton *staffButton;
    QLabel *label;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(1024, 600);
        MenuWindow->setMaximumSize(QSize(1024, 600));
        inventoryButton = new QPushButton(MenuWindow);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));
        inventoryButton->setGeometry(QRect(200, 340, 250, 200));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        inventoryButton->setFont(font);
        inventoryButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 85, 0);\n"
"}"));
        inventoryButton->setInputMethodHints(Qt::ImhNone);
        saleButton = new QPushButton(MenuWindow);
        saleButton->setObjectName(QStringLiteral("saleButton"));
        saleButton->setGeometry(QRect(574, 100, 250, 200));
        saleButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 85, 0);\n"
"}"));
        reportButton = new QPushButton(MenuWindow);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        reportButton->setGeometry(QRect(200, 100, 250, 200));
        reportButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 85, 0);\n"
"}"));
        staffButton = new QPushButton(MenuWindow);
        staffButton->setObjectName(QStringLiteral("staffButton"));
        staffButton->setGeometry(QRect(574, 340, 250, 200));
        staffButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 85, 0);\n"
"}"));
        label = new QLabel(MenuWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 20, 191, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", 0));
        inventoryButton->setText(QApplication::translate("MenuWindow", "Inventory", 0));
        saleButton->setText(QApplication::translate("MenuWindow", "Sales", 0));
        reportButton->setText(QApplication::translate("MenuWindow", "Reports", 0));
        staffButton->setText(QApplication::translate("MenuWindow", "Staff", 0));
        label->setText(QApplication::translate("MenuWindow", "OneSol Point of Sale System", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
