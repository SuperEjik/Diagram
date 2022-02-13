QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calculation.cpp \
    dean_flow_calculation.cpp \
    dean_menu.cpp \
    dean_menu_D.cpp \
    dean_menu_D1.cpp \
    dean_menu_nu.cpp \
    dean_menu_p.cpp \
    dean_menu_r.cpp \
    dean_menu_v.cpp \
    diagram_window.cpp \
    draw_de_d.cpp \
    draw_de_nu.cpp \
    draw_de_p.cpp \
    draw_de_r.cpp \
    draw_de_v.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    testform.cpp

HEADERS += \
    calculation.h \
    dean_flow_calculation.h \
    dean_menu.h \
    dean_menu_D.h \
    dean_menu_D1.h \
    dean_menu_nu.h \
    dean_menu_p.h \
    dean_menu_r.h \
    dean_menu_v.h \
    diagram_window.h \
    draw_de_d.h \
    draw_de_nu.h \
    draw_de_p.h \
    draw_de_r.h \
    draw_de_v.h \
    mainwindow.h \
    qcustomplot.h \
    testform.h

FORMS += \
    dean_flow_calculation.ui \
    dean_menu.ui \
    dean_menu_D.ui \
    dean_menu_D1.ui \
    dean_menu_nu.ui \
    dean_menu_p.ui \
    dean_menu_r.ui \
    dean_menu_v.ui \
    diagram_window.ui \
    draw_de_d.ui \
    draw_de_nu.ui \
    draw_de_p.ui \
    draw_de_r.ui \
    draw_de_v.ui \
    mainwindow.ui \
    testform.ui

TRANSLATIONS += \
    Diagram_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    pic/lable_ipu.png

RESOURCES += \
    image.qrc

win32:RC_FILE = main_ico.rc
