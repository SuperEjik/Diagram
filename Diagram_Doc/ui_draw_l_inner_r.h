/********************************************************************************
** Form generated from reading UI file 'draw_l_inner_r.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_L_INNER_R_H
#define UI_DRAW_L_INNER_R_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_L_Inner_r
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *L_r_graph;

    void setupUi(QWidget *Draw_L_Inner_r)
    {
        if (Draw_L_Inner_r->objectName().isEmpty())
            Draw_L_Inner_r->setObjectName(QString::fromUtf8("Draw_L_Inner_r"));
        Draw_L_Inner_r->resize(400, 300);
        gridLayout = new QGridLayout(Draw_L_Inner_r);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        L_r_graph = new QCustomPlot(Draw_L_Inner_r);
        L_r_graph->setObjectName(QString::fromUtf8("L_r_graph"));

        gridLayout->addWidget(L_r_graph, 0, 0, 1, 1);


        retranslateUi(Draw_L_Inner_r);

        QMetaObject::connectSlotsByName(Draw_L_Inner_r);
    } // setupUi

    void retranslateUi(QWidget *Draw_L_Inner_r)
    {
        Draw_L_Inner_r->setWindowTitle(QCoreApplication::translate("Draw_L_Inner_r", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_L_Inner_r: public Ui_Draw_L_Inner_r {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_L_INNER_R_H
