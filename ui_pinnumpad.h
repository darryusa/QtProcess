/********************************************************************************
** Form generated from reading UI file 'pinnumpad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINNUMPAD_H
#define UI_PINNUMPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PINNumPad
{
public:
    QPushButton *backButton;
    QWidget *gridLayoutWidget;
    QGridLayout *passwordButtonLayout;
    QPushButton *pushButtonBack;
    QPushButton *pushButton1;
    QPushButton *pushButton7;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton0;
    QPushButton *pushButton3;
    QPushButton *pushButton6;
    QPushButton *pushButton9;
    QPushButton *pushButtonEnter;
    QLineEdit *lineEdit;

    void setupUi(QDialog *PINNumPad)
    {
        if (PINNumPad->objectName().isEmpty())
            PINNumPad->setObjectName(QStringLiteral("PINNumPad"));
        PINNumPad->resize(511, 600);
        PINNumPad->setStyleSheet(QLatin1String("border-image: url(:/image/featured-overlayOK.png);\n"
"\n"
"background-color: rgb(211, 225, 178);\n"
""));
        backButton = new QPushButton(PINNumPad);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(410, 0, 101, 118));
        backButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/backButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(101, 111));
        backButton->setFlat(true);
        gridLayoutWidget = new QWidget(PINNumPad);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 120, 511, 481));
        passwordButtonLayout = new QGridLayout(gridLayoutWidget);
        passwordButtonLayout->setObjectName(QStringLiteral("passwordButtonLayout"));
        passwordButtonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        passwordButtonLayout->setContentsMargins(10, 0, 10, 0);
        pushButtonBack = new QPushButton(gridLayoutWidget);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonBack->sizePolicy().hasHeightForWidth());
        pushButtonBack->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButtonBack->setFont(font);
        pushButtonBack->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonBack, 3, 0, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        QFont font1;
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setStyleStrategy(QFont::PreferAntialias);
        pushButton1->setFont(font1);
        pushButton1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setEnabled(true);
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton7->setFont(font2);
        pushButton7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setEnabled(true);
        pushButton5->setFont(font2);
        pushButton5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setEnabled(true);
        pushButton4->setFont(font2);
        pushButton4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setEnabled(true);
        pushButton2->setFont(font2);
        pushButton2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setEnabled(true);
        pushButton8->setFont(font2);
        pushButton8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        pushButton0->setEnabled(true);
        pushButton0->setFont(font2);
        pushButton0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setEnabled(true);
        pushButton3->setFont(font2);
        pushButton3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setEnabled(true);
        pushButton6->setFont(font2);
        pushButton6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setEnabled(true);
        pushButton9->setFont(font2);
        pushButton9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButtonEnter = new QPushButton(gridLayoutWidget);
        pushButtonEnter->setObjectName(QStringLiteral("pushButtonEnter"));
        pushButtonEnter->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonEnter->sizePolicy().hasHeightForWidth());
        pushButtonEnter->setSizePolicy(sizePolicy);
        pushButtonEnter->setFont(font);
        pushButtonEnter->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	color: rgb(0,0,0);\n"
"}\n"
"QPushButton:pressed{\n"
"    background-color: red;\n"
"    border-style: inset;\n"
"}"));

        passwordButtonLayout->addWidget(pushButtonEnter, 3, 2, 1, 1);

        lineEdit = new QLineEdit(PINNumPad);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 411, 118));
        QFont font3;
        font3.setPointSize(58);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setAlignment(Qt::AlignCenter);

        retranslateUi(PINNumPad);

        QMetaObject::connectSlotsByName(PINNumPad);
    } // setupUi

    void retranslateUi(QDialog *PINNumPad)
    {
        PINNumPad->setWindowTitle(QApplication::translate("PINNumPad", "Dialog", 0));
        backButton->setText(QString());
        pushButtonBack->setText(QApplication::translate("PINNumPad", "Back", 0));
        pushButton1->setText(QApplication::translate("PINNumPad", "1", 0));
        pushButton7->setText(QApplication::translate("PINNumPad", "7", 0));
        pushButton5->setText(QApplication::translate("PINNumPad", "5", 0));
        pushButton4->setText(QApplication::translate("PINNumPad", "4", 0));
        pushButton2->setText(QApplication::translate("PINNumPad", "2", 0));
        pushButton8->setText(QApplication::translate("PINNumPad", "8", 0));
        pushButton0->setText(QApplication::translate("PINNumPad", "0", 0));
        pushButton3->setText(QApplication::translate("PINNumPad", "3", 0));
        pushButton6->setText(QApplication::translate("PINNumPad", "6", 0));
        pushButton9->setText(QApplication::translate("PINNumPad", "9", 0));
        pushButtonEnter->setText(QApplication::translate("PINNumPad", "Enter", 0));
    } // retranslateUi

};

namespace Ui {
    class PINNumPad: public Ui_PINNumPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINNUMPAD_H
