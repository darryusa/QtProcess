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
    QLabel *pictureLabel;
    QPushButton *reportButton;
    QPushButton *inventoryButton;
    QPushButton *saleButton;
    QPushButton *staffButton;
    QLabel *label;
    QButtonGroup *menuButtonGroup;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(1024, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MenuWindow->sizePolicy().hasHeightForWidth());
        MenuWindow->setSizePolicy(sizePolicy);
        MenuWindow->setMaximumSize(QSize(1024, 600));
        MenuWindow->setAutoFillBackground(true);
        pictureLabel = new QLabel(MenuWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/yesBorder.png);"));
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        reportButton = new QPushButton(MenuWindow);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        reportButton->setGeometry(QRect(169, 350, 281, 210));
        sizePolicy.setHeightForWidth(reportButton->sizePolicy().hasHeightForWidth());
        reportButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        reportButton->setFont(font);
        reportButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        reportButton->setFlat(false);
        inventoryButton = new QPushButton(MenuWindow);
        menuButtonGroup = new QButtonGroup(MenuWindow);
        menuButtonGroup->setObjectName(QStringLiteral("menuButtonGroup"));
        menuButtonGroup->addButton(inventoryButton);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));
        inventoryButton->setGeometry(QRect(169, 100, 281, 210));
        sizePolicy.setHeightForWidth(inventoryButton->sizePolicy().hasHeightForWidth());
        inventoryButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(34);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        inventoryButton->setFont(font1);
        inventoryButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        inventoryButton->setFlat(false);
        saleButton = new QPushButton(MenuWindow);
        saleButton->setObjectName(QStringLiteral("saleButton"));
        saleButton->setGeometry(QRect(560, 100, 281, 210));
        sizePolicy.setHeightForWidth(saleButton->sizePolicy().hasHeightForWidth());
        saleButton->setSizePolicy(sizePolicy);
        saleButton->setFont(font);
        saleButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        saleButton->setFlat(false);
        staffButton = new QPushButton(MenuWindow);
        staffButton->setObjectName(QStringLiteral("staffButton"));
        staffButton->setGeometry(QRect(560, 350, 281, 210));
        sizePolicy.setHeightForWidth(staffButton->sizePolicy().hasHeightForWidth());
        staffButton->setSizePolicy(sizePolicy);
        staffButton->setFont(font);
        staffButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        staffButton->setFlat(false);
        label = new QLabel(MenuWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1024, 70));
        QFont font2;
        font2.setFamily(QStringLiteral("Symbola"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"\n"
"\n"
""));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", 0));
        pictureLabel->setText(QString());
        reportButton->setText(QApplication::translate("MenuWindow", "Report", 0));
        inventoryButton->setText(QApplication::translate("MenuWindow", "Inventory", 0));
        saleButton->setText(QApplication::translate("MenuWindow", "Sales", 0));
        staffButton->setText(QApplication::translate("MenuWindow", "Staff", 0));
        label->setText(QApplication::translate("MenuWindow", "OneSol Point of Sale System", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
