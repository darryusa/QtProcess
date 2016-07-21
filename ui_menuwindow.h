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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QLabel *pictureLabel;
    QFrame *frame_2;
    QPushButton *staffButton;
    QPushButton *staffButton_2;
    QPushButton *staffButton_3;
    QPushButton *staffButton_4;
    QLabel *label;
    QButtonGroup *menuButtonGroup;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(1024, 600);
        MenuWindow->setMaximumSize(QSize(1024, 600));
        MenuWindow->setAutoFillBackground(true);
        pictureLabel = new QLabel(MenuWindow);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/background.jpg")));
        pictureLabel->setScaledContents(true);
        frame_2 = new QFrame(MenuWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 1000, 72));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(90, 130, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        staffButton = new QPushButton(MenuWindow);
        menuButtonGroup = new QButtonGroup(MenuWindow);
        menuButtonGroup->setObjectName(QStringLiteral("menuButtonGroup"));
        menuButtonGroup->addButton(staffButton);
        staffButton->setObjectName(QStringLiteral("staffButton"));
        staffButton->setGeometry(QRect(240, 340, 250, 210));
        QFont font;
        font.setFamily(QStringLiteral("Umpush"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        staffButton->setFont(font);
        staffButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        staffButton->setFlat(false);
        staffButton_2 = new QPushButton(MenuWindow);
        staffButton_2->setObjectName(QStringLiteral("staffButton_2"));
        staffButton_2->setGeometry(QRect(530, 120, 250, 210));
        staffButton_2->setFont(font);
        staffButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        staffButton_2->setFlat(false);
        staffButton_3 = new QPushButton(MenuWindow);
        staffButton_3->setObjectName(QStringLiteral("staffButton_3"));
        staffButton_3->setGeometry(QRect(530, 340, 250, 210));
        staffButton_3->setFont(font);
        staffButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        staffButton_3->setFlat(false);
        staffButton_4 = new QPushButton(MenuWindow);
        staffButton_4->setObjectName(QStringLiteral("staffButton_4"));
        staffButton_4->setGeometry(QRect(240, 110, 250, 210));
        staffButton_4->setFont(font);
        staffButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        staffButton_4->setFlat(false);
        label = new QLabel(MenuWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1000, 72));
        QFont font1;
        font1.setFamily(QStringLiteral("Umpush"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", 0));
        pictureLabel->setText(QString());
        staffButton->setText(QApplication::translate("MenuWindow", "Staff", 0));
        staffButton_2->setText(QApplication::translate("MenuWindow", "Staff", 0));
        staffButton_3->setText(QApplication::translate("MenuWindow", "Staff", 0));
        staffButton_4->setText(QApplication::translate("MenuWindow", "Staff", 0));
        label->setText(QApplication::translate("MenuWindow", "OneSol Point of Sale System", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
