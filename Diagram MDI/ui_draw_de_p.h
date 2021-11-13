/********************************************************************************
** Form generated from reading UI file 'draw_de_p.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_DE_P_H
#define UI_DRAW_DE_P_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_De_p
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *De_p_graph;

    void setupUi(QWidget *Draw_De_p)
    {
        if (Draw_De_p->objectName().isEmpty())
            Draw_De_p->setObjectName(QString::fromUtf8("Draw_De_p"));
        Draw_De_p->resize(400, 300);
        gridLayout = new QGridLayout(Draw_De_p);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        De_p_graph = new QCustomPlot(Draw_De_p);
        De_p_graph->setObjectName(QString::fromUtf8("De_p_graph"));

        gridLayout->addWidget(De_p_graph, 0, 0, 1, 1);


        retranslateUi(Draw_De_p);

        QMetaObject::connectSlotsByName(Draw_De_p);
    } // setupUi

    void retranslateUi(QWidget *Draw_De_p)
    {
        Draw_De_p->setWindowTitle(QCoreApplication::translate("Draw_De_p", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_De_p: public Ui_Draw_De_p {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_DE_P_H
