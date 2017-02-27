#-------------------------------------------------
#
# Project created by QtCreator 2017-01-26T10:04:49
#
#-------------------------------------------------


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = sans_titre
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    window.cpp \
    clock.cpp \
    plot.cpp \
    signaldata.cpp \
    curvedata.cpp

HEADERS  += mainwindow.h \
    window.h \
    clock.h \
    plot.h \
    signaldata.h \
    curvedata.h

FORMS    += mainwindow.ui \
    window.ui


#   QWT library
INCLUDEPATH += /usr/local/qwt-6.1.3/include
LIBS += -L/usr/local/qwt-6.1.3/lib \
        -lqwt

DEFINES += QWT_DLL
