/********************************************************************************
** Form generated from reading UI file 'draw_l_R.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_L_R_H
#define UI_DRAW_L_R_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_L_R
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *L_R_graph;

    void setupUi(QWidget *Draw_L_R)
    {
        if (Draw_L_R->objectName().isEmpty())
            Draw_L_R->setObjectName(QString::fromUtf8("Draw_L_R"));
        Draw_L_R->resize(400, 300);
        gridLayout = new QGridLayout(Draw_L_R);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        L_R_graph = new QCustomPlot(Draw_L_R);
        L_R_graph->setObjectName(QString::fromUtf8("L_R_graph"));

        gridLayout->addWidget(L_R_graph, 0, 0, 1, 1);


        retranslateUi(Draw_L_R);

        QMetaObject::connectSlotsByName(Draw_L_R);
    } // setupUi

    void retranslateUi(QWidget *Draw_L_R)
    {
        Draw_L_R->setWindowTitle(QCoreApplication::translate("Draw_L_R", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_L_R: public Ui_Draw_L_R {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_L_R_H
