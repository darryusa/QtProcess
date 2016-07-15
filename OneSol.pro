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


SOURCES += main.cpp\
        onesolmain.cpp \
    staffwindow.cpp \
    dbmanager.cpp \
    menuwindow.cpp \
<<<<<<< HEAD
    reportswindow.cpp
=======
    logindialog.cpp
>>>>>>> master

HEADERS  += onesolmain.h \
    staffwindow.h \
    dbmanager.h \
    menuwindow.h \
<<<<<<< HEAD
    reportswindow.h
=======
    logindialog.h \
    singleton.h
>>>>>>> master

FORMS += \
    staffwindow.ui \
    menuwindow.ui \
<<<<<<< HEAD
    reportswindow.ui
=======
    logindialog.ui

RESOURCES += \
    resource.qrc
>>>>>>> master
