#-------------------------------------------------
#
# Project created by QtCreator 2016-07-10T17:29:52
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OneSol
TEMPLATE = app

CONFIG += 32bit

CONFIG(32bit){
    TARGET = 32bit_binary
}
CONFIG(64bit){
    TARGET = 64bit_binary
}
SOURCES += main.cpp\
        onesolmain.cpp \
    staffwindow.cpp \
    dbmanager.cpp \
    menuwindow.cpp \
    reportswindow.cpp\
    logindialog.cpp \
    transactionwindow.cpp \
    pinnumpad.cpp \
    inventorywindow.cpp \
    itemmodify.cpp \
    mainwindow.cpp

HEADERS  += onesolmain.h \
    staffwindow.h \
    dbmanager.h \
    menuwindow.h \
    reportswindow.h \
    logindialog.h \
    singleton.h \
    transactionwindow.h \
    pinnumpad.h \
    inventorywindow.h \
    call_once.h \
    itemmodify.h \
    mainwindow.h

FORMS += \
    staffwindow.ui \
    menuwindow.ui \
    reportswindow.ui \
    logindialog.ui \
    transactionwindow.ui \
    pinnumpad.ui \
    inventorywindow.ui \
    itemmodify.ui \
    mainwindow.ui
    logindialog.ui

RESOURCES += \
    resource.qrc

DISTFILES +=
