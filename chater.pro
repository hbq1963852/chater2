#-------------------------------------------------
#
# Project created by QtCreator 2016-07-03T00:22:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chater
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    mainwindow.cpp \
    myregister.cpp \
    chatwindow.cpp

HEADERS  += login.h \
    mainwindow.h \
    myregister.h \
    chatwindow.h

FORMS    += login.ui \
    mainwindow.ui \
    myregister.ui \
    chatwindow.ui

RESOURCES += \
    image.qrc
