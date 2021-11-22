/********************************************************************************
** Form generated from reading UI file 'draw_de_d.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_DE_D_H
#define UI_DRAW_DE_D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_De_D
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *De_D_graph;
    QPushButton *pushButton;

    void setupUi(QWidget *Draw_De_D)
    {
        if (Draw_De_D->objectName().isEmpty())
            Draw_De_D->setObjectName(QString::fromUtf8("Draw_De_D"));
        Draw_De_D->resize(400, 300);
        gridLayout = new QGridLayout(Draw_De_D);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        De_D_graph = new QCustomPlot(Draw_De_D);
        De_D_graph->setObjectName(QString::fromUtf8("De_D_graph"));

        gridLayout->addWidget(De_D_graph, 1, 0, 1, 1);

        pushButton = new QPushButton(Draw_De_D);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(Draw_De_D);

        QMetaObject::connectSlotsByName(Draw_De_D);
    } // setupUi

    void retranslateUi(QWidget *Draw_De_D)
    {
        Draw_De_D->setWindowTitle(QCoreApplication::translate("Draw_De_D", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Draw_De_D", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_De_D: public Ui_Draw_De_D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_DE_D_H
