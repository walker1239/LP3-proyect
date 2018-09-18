#-------------------------------------------------
#
# Project created by QtCreator 2018-09-18T17:05:29
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = avatar
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    avatar.cpp \
    boca.cpp \
    cara.cpp \
    caradebalon.cpp \
    caraovalada.cpp \
    cararedonda.cpp \
    ojos.cpp

HEADERS += \
        mainwindow.h \
    avatar.h \
    blanco.h \
    boca.h \
    bocafeliz.h \
    bocaserio.h \
    bocatriste.h \
    cara.h \
    caradebalon.h \
    caraovalada.h \
    cararedonda.h \
    ojos.h \
    ojosenojados.h \
    ojosfelises.h \
    ojospro.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
