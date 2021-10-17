/********************************************************************************
** Form generated from reading UI file 'draw_l_n.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_L_N_H
#define UI_DRAW_L_N_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_L_N
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *L_N_graph;

    void setupUi(QWidget *Draw_L_N)
    {
        if (Draw_L_N->objectName().isEmpty())
            Draw_L_N->setObjectName(QString::fromUtf8("Draw_L_N"));
        Draw_L_N->resize(400, 300);
        gridLayout = new QGridLayout(Draw_L_N);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        L_N_graph = new QCustomPlot(Draw_L_N);
        L_N_graph->setObjectName(QString::fromUtf8("L_N_graph"));

        gridLayout->addWidget(L_N_graph, 0, 0, 1, 1);


        retranslateUi(Draw_L_N);

        QMetaObject::connectSlotsByName(Draw_L_N);
    } // setupUi

    void retranslateUi(QWidget *Draw_L_N)
    {
        Draw_L_N->setWindowTitle(QCoreApplication::translate("Draw_L_N", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_L_N: public Ui_Draw_L_N {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_L_N_H
