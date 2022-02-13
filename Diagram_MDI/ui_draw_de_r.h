/********************************************************************************
** Form generated from reading UI file 'draw_de_r.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_DE_R_H
#define UI_DRAW_DE_R_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Draw_De_r
{
public:
    QGridLayout *gridLayout;
    QPushButton *Save;
    QSpacerItem *horizontalSpacer;
    QCustomPlot *De_r_graph;

    void setupUi(QWidget *Draw_De_r)
    {
        if (Draw_De_r->objectName().isEmpty())
            Draw_De_r->setObjectName(QString::fromUtf8("Draw_De_r"));
        Draw_De_r->resize(400, 300);
        gridLayout = new QGridLayout(Draw_De_r);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Save = new QPushButton(Draw_De_r);
        Save->setObjectName(QString::fromUtf8("Save"));

        gridLayout->addWidget(Save, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        De_r_graph = new QCustomPlot(Draw_De_r);
        De_r_graph->setObjectName(QString::fromUtf8("De_r_graph"));

        gridLayout->addWidget(De_r_graph, 1, 0, 1, 2);


        retranslateUi(Draw_De_r);

        QMetaObject::connectSlotsByName(Draw_De_r);
    } // setupUi

    void retranslateUi(QWidget *Draw_De_r)
    {
        Draw_De_r->setWindowTitle(QCoreApplication::translate("Draw_De_r", "Form", nullptr));
        Save->setText(QCoreApplication::translate("Draw_De_r", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Draw_De_r: public Ui_Draw_De_r {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_DE_R_H
