QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calculation.cpp \
    dean_flow.cpp \
    dean_menu.cpp \
    diagram_window.cpp \
    draw_de_d.cpp \
    draw_de_nu.cpp \
    draw_de_p.cpp \
    draw_de_r.cpp \
    draw_de_v.cpp \
    draw_l_R.cpp \
    draw_l_h.cpp \
    draw_l_inner_r.cpp \
    draw_l_n.cpp \
    draw_l_nu.cpp \
    inductance_calculation.cpp \
    inductance_menu.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    testform.cpp

HEADERS += \
    calculation.h \
    dean_flow.h \
    dean_menu.h \
    diagram_window.h \
    draw_de_d.h \
    draw_de_nu.h \
    draw_de_p.h \
    draw_de_r.h \
    draw_de_v.h \
    draw_l_R.h \
    draw_l_h.h \
    draw_l_inner_r.h \
    draw_l_n.h \
    draw_l_nu.h \
    inductance_calculation.h \
    inductance_menu.h \
    mainwindow.h \
    qcustomplot.h \
    testform.h

FORMS += \
    dean_flow.ui \
    dean_menu.ui \
    diagram_window.ui \
    draw_de_d.ui \
    draw_de_nu.ui \
    draw_de_p.ui \
    draw_de_r.ui \
    draw_de_v.ui \
    draw_l_R.ui \
    draw_l_h.ui \
    draw_l_inner_r.ui \
    draw_l_n.ui \
    draw_l_nu.ui \
    inductance_calculation.ui \
    inductance_menu.ui \
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
