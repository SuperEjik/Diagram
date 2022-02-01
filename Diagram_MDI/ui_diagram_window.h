/********************************************************************************
** Form generated from reading UI file 'diagram_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAM_WINDOW_H
#define UI_DIAGRAM_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_diagram_window
{
public:
    QGridLayout *gridLayout;
    QPushButton *Save;
    QSpacerItem *horizontalSpacer;
    QCustomPlot *widget;

    void setupUi(QWidget *diagram_window)
    {
        if (diagram_window->objectName().isEmpty())
            diagram_window->setObjectName(QString::fromUtf8("diagram_window"));
        diagram_window->resize(301, 207);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diagram_window->sizePolicy().hasHeightForWidth());
        diagram_window->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(diagram_window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Save = new QPushButton(diagram_window);
        Save->setObjectName(QString::fromUtf8("Save"));

        gridLayout->addWidget(Save, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        widget = new QCustomPlot(diagram_window);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 1, 0, 1, 2);


        retranslateUi(diagram_window);

        QMetaObject::connectSlotsByName(diagram_window);
    } // setupUi

    void retranslateUi(QWidget *diagram_window)
    {
        diagram_window->setWindowTitle(QCoreApplication::translate("diagram_window", "Form", nullptr));
        Save->setText(QCoreApplication::translate("diagram_window", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diagram_window: public Ui_diagram_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAM_WINDOW_H
