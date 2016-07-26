/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *pictureLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *reportButton;
    QPushButton *staffButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *inventoryButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *saleButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1280, 70));
        QFont font;
        font.setFamily(QStringLiteral("Symbola"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"\n"
"\n"
""));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        pictureLabel = new QLabel(centralwidget);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1280, 720));
        sizePolicy.setHeightForWidth(pictureLabel->sizePolicy().hasHeightForWidth());
        pictureLabel->setSizePolicy(sizePolicy);
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/yesBorder.png);"));
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(230, 110, 831, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        reportButton = new QPushButton(gridLayoutWidget);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        sizePolicy.setHeightForWidth(reportButton->sizePolicy().hasHeightForWidth());
        reportButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        reportButton->setFont(font1);
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

        gridLayout->addWidget(reportButton, 5, 0, 1, 1);

        staffButton = new QPushButton(gridLayoutWidget);
        staffButton->setObjectName(QStringLiteral("staffButton"));
        sizePolicy.setHeightForWidth(staffButton->sizePolicy().hasHeightForWidth());
        staffButton->setSizePolicy(sizePolicy);
        staffButton->setFont(font1);
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

        gridLayout->addWidget(staffButton, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(30, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        inventoryButton = new QPushButton(gridLayoutWidget);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));
        sizePolicy.setHeightForWidth(inventoryButton->sizePolicy().hasHeightForWidth());
        inventoryButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Sans Serif"));
        font2.setPointSize(34);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        inventoryButton->setFont(font2);
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

        gridLayout->addWidget(inventoryButton, 5, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        saleButton = new QPushButton(gridLayoutWidget);
        saleButton->setObjectName(QStringLiteral("saleButton"));
        sizePolicy.setHeightForWidth(saleButton->sizePolicy().hasHeightForWidth());
        saleButton->setSizePolicy(sizePolicy);
        saleButton->setFont(font1);
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

        gridLayout->addWidget(saleButton, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        pictureLabel->raise();
        label->raise();
        gridLayoutWidget->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "OneSol Point of Sale System", 0));
        pictureLabel->setText(QString());
        reportButton->setText(QApplication::translate("MainWindow", "Report", 0));
        staffButton->setText(QApplication::translate("MainWindow", "Staff", 0));
        inventoryButton->setText(QApplication::translate("MainWindow", "Inventory", 0));
        saleButton->setText(QApplication::translate("MainWindow", "Sales", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
