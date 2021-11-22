/********************************************************************************
** Form generated from reading UI file 'draw_de_v.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_DE_V_H
#define UI_DRAW_DE_V_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_De_v
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *De_v_graph;

    void setupUi(QWidget *Draw_De_v)
    {
        if (Draw_De_v->objectName().isEmpty())
            Draw_De_v->setObjectName(QString::fromUtf8("Draw_De_v"));
        Draw_De_v->resize(400, 300);
        gridLayout = new QGridLayout(Draw_De_v);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        De_v_graph = new QCustomPlot(Draw_De_v);
        De_v_graph->setObjectName(QString::fromUtf8("De_v_graph"));

        gridLayout->addWidget(De_v_graph, 0, 0, 1, 1);


        retranslateUi(Draw_De_v);

        QMetaObject::connectSlotsByName(Draw_De_v);
    } // setupUi

    void retranslateUi(QWidget *Draw_De_v)
    {
        Draw_De_v->setWindowTitle(QCoreApplication::translate("Draw_De_v", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_De_v: public Ui_Draw_De_v {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_DE_V_H
