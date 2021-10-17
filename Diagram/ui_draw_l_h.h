/********************************************************************************
** Form generated from reading UI file 'draw_l_h.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_L_H_H
#define UI_DRAW_L_H_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_L_h
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *L_h_graph;

    void setupUi(QWidget *Draw_L_h)
    {
        if (Draw_L_h->objectName().isEmpty())
            Draw_L_h->setObjectName(QString::fromUtf8("Draw_L_h"));
        Draw_L_h->resize(400, 300);
        gridLayout = new QGridLayout(Draw_L_h);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        L_h_graph = new QCustomPlot(Draw_L_h);
        L_h_graph->setObjectName(QString::fromUtf8("L_h_graph"));

        gridLayout->addWidget(L_h_graph, 0, 0, 1, 1);


        retranslateUi(Draw_L_h);

        QMetaObject::connectSlotsByName(Draw_L_h);
    } // setupUi

    void retranslateUi(QWidget *Draw_L_h)
    {
        Draw_L_h->setWindowTitle(QCoreApplication::translate("Draw_L_h", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_L_h: public Ui_Draw_L_h {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_L_H_H
