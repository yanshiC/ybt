#-------------------------------------------------
#
# Project created by QtCreator 2019-04-30T19:03:08
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ybt
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
        a_1_ypls.cpp \
        a_1_ypls_check.cpp \
        a_2_lsqd.cpp \
        a_3_ypxstj.cpp \
        a_4_tkcl.cpp \
        b_1_qssq.cpp \
        b_2_qscx.cpp \
        c_1_xgybkmm.cpp \
        main.cpp \
        ybtmain.cpp

HEADERS += \
        a_1_ypls.h \
        a_1_ypls_check.h \
        a_2_lsqd.h \
        a_3_ypxstj.h \
        a_4_tkcl.h \
        b_1_qssq.h \
        b_2_qscx.h \
        c_1_xgybkmm.h \
        ybtmain.h

FORMS += \
        a_1_ypls.ui \
        a_1_ypls_check.ui \
        a_2_lsqd.ui \
        a_3_ypxstj.ui \
        a_4_tkcl.ui \
        b_1_qssq.ui \
        b_2_qscx.ui \
        c_1_xgybkmm.ui \
        ybtmain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

win32: LIBS += -LD:/Qt/5.12.3/mingw73_32/bin/ -llibmysql

INCLUDEPATH += D:/Qt/5.12.3/mingw73_32/bin
DEPENDPATH += D:/Qt/5.12.3/mingw73_32/bin

RC_ICONS = ybt.ico
