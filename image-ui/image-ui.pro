#-------------------------------------------------
#
# Project created by QtCreator 2023-02-25T13:39:23
#
#-------------------------------------------------

QT       += core gui sql
QT += printsupport
QMAKE_CXXFLAGS += -std=c++0x

#RESOURCES += asert.qrc


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = image-ui
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    loginbox.cpp \
    viewinvo.cpp \
    partstracker.cpp \
    partsquantityviwer.cpp \
    viewproject.cpp \
    manageprojects.cpp \
    viewrecipient.cpp \
    changelogincred.cpp \
    genisn.cpp \
    viewisn.cpp \
    generatemrs.cpp \
    mrsslipviewer.cpp \
    addnewpart.cpp \
    add_qty_part.cpp \
    managerecipients.cpp \
    add_user.cpp \
    customtablemodel.cpp \
    mrsmodel.cpp

HEADERS += \
        mainwindow.h \
    loginbox.h \
    viewinvo.h \
    partstracker.h \
    partsquantityviwer.h \
    viewproject.h \
    manageprojects.h \
    viewrecipient.h \
    changelogincred.h \
    genisn.h \
    viewisn.h \
    generatemrs.h \
    mrsslipviewer.h \
    addnewpart.h \
    add_qty_part.h \
    managerecipients.h \
    add_user.h \
    customtablemodel.h \
    inventorydata.h \
    mrsmodel.h

FORMS += \
        mainwindow.ui \
    loginbox.ui \
    viewinvo.ui \
    partstracker.ui \
    partsquantityviwer.ui \
    viewproject.ui \
    manageprojects.ui \
    viewrecipient.ui \
    changelogincred.ui \
    genisn.ui \
    viewisn.ui \
    generatemrs.ui \
    mrsslipviewer.ui \
    addnewpart.ui \
    add_qty_part.ui \
    managerecipients.ui \
    add_user.ui \
    delete_user.ui

RESOURCES += \
    asert.qrc

RC_ICONS = may.ico

DISTFILES += \
    Images/may.ico \
    Images/authorise.png \
    Images/back.png \
    Images/clear.png \
    Images/close.png \
    Images/comments.png \
    Images/date.png \
    Images/delete.png \
    Images/details.png \
    Images/edit.png \
    Images/export.png \
    Images/find_multiple.png \
    Images/import.png \
    Images/invoice.png \
    Images/issue.png
