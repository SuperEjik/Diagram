/********************************************************************************
** Form generated from reading UI file 'draw_de_nu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_DE_NU_H
#define UI_DRAW_DE_NU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_De_nu
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *De_nu_graph;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *Draw_De_nu)
    {
        if (Draw_De_nu->objectName().isEmpty())
            Draw_De_nu->setObjectName(QString::fromUtf8("Draw_De_nu"));
        Draw_De_nu->resize(478, 344);
        gridLayout = new QGridLayout(Draw_De_nu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        De_nu_graph = new QCustomPlot(Draw_De_nu);
        De_nu_graph->setObjectName(QString::fromUtf8("De_nu_graph"));
        gridLayout_2 = new QGridLayout(De_nu_graph);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(De_nu_graph, 0, 0, 1, 1);


        retranslateUi(Draw_De_nu);

        QMetaObject::connectSlotsByName(Draw_De_nu);
    } // setupUi

    void retranslateUi(QWidget *Draw_De_nu)
    {
        Draw_De_nu->setWindowTitle(QCoreApplication::translate("Draw_De_nu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_De_nu: public Ui_Draw_De_nu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_DE_NU_H
