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
    loginwindow.cpp \
    staffwindow.cpp \
    dbmanager.cpp \
    menuwindow.cpp

HEADERS  += onesolmain.h \
    loginwindow.h \
    staffwindow.h \
    dbmanager.h \
    menuwindow.h

FORMS += \
    loginwindow.ui \
    staffwindow.ui \
    menuwindow.ui
