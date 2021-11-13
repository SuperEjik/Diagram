/********************************************************************************
** Form generated from reading UI file 'draw_l_nu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_L_NU_H
#define UI_DRAW_L_NU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_L_nu
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *L_nu_graph;

    void setupUi(QWidget *Draw_L_nu)
    {
        if (Draw_L_nu->objectName().isEmpty())
            Draw_L_nu->setObjectName(QString::fromUtf8("Draw_L_nu"));
        Draw_L_nu->resize(400, 300);
        gridLayout = new QGridLayout(Draw_L_nu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        L_nu_graph = new QCustomPlot(Draw_L_nu);
        L_nu_graph->setObjectName(QString::fromUtf8("L_nu_graph"));

        gridLayout->addWidget(L_nu_graph, 0, 0, 1, 1);


        retranslateUi(Draw_L_nu);

        QMetaObject::connectSlotsByName(Draw_L_nu);
    } // setupUi

    void retranslateUi(QWidget *Draw_L_nu)
    {
        Draw_L_nu->setWindowTitle(QCoreApplication::translate("Draw_L_nu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_L_nu: public Ui_Draw_L_nu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_L_NU_H
