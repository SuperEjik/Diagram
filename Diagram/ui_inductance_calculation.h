/********************************************************************************
** Form generated from reading UI file 'inductance_calculation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDUCTANCE_CALCULATION_H
#define UI_INDUCTANCE_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inductance_calculation
{
public:
    QLabel *label_up;
    QFrame *line_up;
    QFrame *line_down;
    QTextBrowser *text_L;
    QLabel *label_Down;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_N;
    QLabel *label_nu;
    QLabel *label_R;
    QLabel *label_r;
    QLabel *label_h;
    QLineEdit *lineEdit_N;
    QLineEdit *lineEdit_nu;
    QLineEdit *lineEdit_R;
    QLineEdit *lineEdit_r;
    QLineEdit *lineEdit_h;
    QLabel *label_pieces;
    QLabel *label_none;
    QLabel *label_m_R;
    QLabel *label_m_r;
    QLabel *label_m_h;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QPushButton *Clear_calculation;
    QPushButton *L_calculation;

    void setupUi(QWidget *Inductance_calculation)
    {
        if (Inductance_calculation->objectName().isEmpty())
            Inductance_calculation->setObjectName(QString::fromUtf8("Inductance_calculation"));
        Inductance_calculation->resize(440, 390);
        label_up = new QLabel(Inductance_calculation);
        label_up->setObjectName(QString::fromUtf8("label_up"));
        label_up->setGeometry(QRect(10, 10, 57, 16));
        line_up = new QFrame(Inductance_calculation);
        line_up->setObjectName(QString::fromUtf8("line_up"));
        line_up->setGeometry(QRect(0, 20, 439, 16));
        line_up->setFrameShape(QFrame::HLine);
        line_up->setFrameShadow(QFrame::Sunken);
        line_down = new QFrame(Inductance_calculation);
        line_down->setObjectName(QString::fromUtf8("line_down"));
        line_down->setGeometry(QRect(0, 330, 439, 16));
        line_down->setFrameShape(QFrame::HLine);
        line_down->setFrameShadow(QFrame::Sunken);
        text_L = new QTextBrowser(Inductance_calculation);
        text_L->setObjectName(QString::fromUtf8("text_L"));
        text_L->setGeometry(QRect(310, 350, 111, 31));
        text_L->setAcceptDrops(true);
        text_L->setTabChangesFocus(false);
        text_L->setReadOnly(true);
        label_Down = new QLabel(Inductance_calculation);
        label_Down->setObjectName(QString::fromUtf8("label_Down"));
        label_Down->setGeometry(QRect(10, 310, 48, 16));
        widget = new QWidget(Inductance_calculation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 377, 201));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_N = new QLabel(widget);
        label_N->setObjectName(QString::fromUtf8("label_N"));

        gridLayout->addWidget(label_N, 0, 0, 1, 1);

        label_nu = new QLabel(widget);
        label_nu->setObjectName(QString::fromUtf8("label_nu"));

        gridLayout->addWidget(label_nu, 1, 0, 1, 1);

        label_R = new QLabel(widget);
        label_R->setObjectName(QString::fromUtf8("label_R"));

        gridLayout->addWidget(label_R, 2, 0, 1, 1);

        label_r = new QLabel(widget);
        label_r->setObjectName(QString::fromUtf8("label_r"));

        gridLayout->addWidget(label_r, 3, 0, 1, 1);

        label_h = new QLabel(widget);
        label_h->setObjectName(QString::fromUtf8("label_h"));

        gridLayout->addWidget(label_h, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 5, 1);

        lineEdit_N = new QLineEdit(widget);
        lineEdit_N->setObjectName(QString::fromUtf8("lineEdit_N"));

        gridLayout_2->addWidget(lineEdit_N, 0, 1, 1, 1);

        lineEdit_nu = new QLineEdit(widget);
        lineEdit_nu->setObjectName(QString::fromUtf8("lineEdit_nu"));

        gridLayout_2->addWidget(lineEdit_nu, 1, 1, 1, 1);

        lineEdit_R = new QLineEdit(widget);
        lineEdit_R->setObjectName(QString::fromUtf8("lineEdit_R"));

        gridLayout_2->addWidget(lineEdit_R, 2, 1, 1, 1);

        lineEdit_r = new QLineEdit(widget);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));

        gridLayout_2->addWidget(lineEdit_r, 3, 1, 1, 1);

        lineEdit_h = new QLineEdit(widget);
        lineEdit_h->setObjectName(QString::fromUtf8("lineEdit_h"));

        gridLayout_2->addWidget(lineEdit_h, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 5, 1);

        label_pieces = new QLabel(widget);
        label_pieces->setObjectName(QString::fromUtf8("label_pieces"));

        gridLayout_3->addWidget(label_pieces, 0, 1, 1, 1);

        label_none = new QLabel(widget);
        label_none->setObjectName(QString::fromUtf8("label_none"));

        gridLayout_3->addWidget(label_none, 1, 1, 1, 1);

        label_m_R = new QLabel(widget);
        label_m_R->setObjectName(QString::fromUtf8("label_m_R"));

        gridLayout_3->addWidget(label_m_R, 2, 1, 1, 1);

        label_m_r = new QLabel(widget);
        label_m_r->setObjectName(QString::fromUtf8("label_m_r"));

        gridLayout_3->addWidget(label_m_r, 3, 1, 1, 1);

        label_m_h = new QLabel(widget);
        label_m_h->setObjectName(QString::fromUtf8("label_m_h"));

        gridLayout_3->addWidget(label_m_h, 4, 1, 1, 1);

        widget1 = new QWidget(Inductance_calculation);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(260, 300, 158, 25));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Clear_calculation = new QPushButton(widget1);
        Clear_calculation->setObjectName(QString::fromUtf8("Clear_calculation"));

        gridLayout_4->addWidget(Clear_calculation, 0, 0, 1, 1);

        L_calculation = new QPushButton(widget1);
        L_calculation->setObjectName(QString::fromUtf8("L_calculation"));

        gridLayout_4->addWidget(L_calculation, 0, 1, 1, 1);


        retranslateUi(Inductance_calculation);

        QMetaObject::connectSlotsByName(Inductance_calculation);
    } // setupUi

    void retranslateUi(QWidget *Inductance_calculation)
    {
        Inductance_calculation->setWindowTitle(QCoreApplication::translate("Inductance_calculation", "Form", nullptr));
        label_up->setText(QCoreApplication::translate("Inductance_calculation", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label_Down->setText(QCoreApplication::translate("Inductance_calculation", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_N->setText(QCoreApplication::translate("Inductance_calculation", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\270\321\202\320\272\320\276\320\262 (N)", nullptr));
        label_nu->setText(QCoreApplication::translate("Inductance_calculation", "\320\234\320\260\320\263\320\275\320\270\321\202\320\275\320\260\321\217 \320\277\321\200\320\276\320\275\320\270\321\206\320\260\320\265\320\274\320\276\321\201\321\202\321\214 \321\201\320\265\321\200\320\264\320\265\321\207\320\275\320\270\320\272\320\260 (\302\265)", nullptr));
        label_R->setText(QCoreApplication::translate("Inductance_calculation", "\320\235\320\260\321\200\321\203\320\266\320\275\321\213\320\271 \321\200\320\260\320\264\320\270\321\203\321\201 (R)", nullptr));
        label_r->setText(QCoreApplication::translate("Inductance_calculation", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \321\200\320\260\320\264\320\270\321\203\321\201 (r)", nullptr));
        label_h->setText(QCoreApplication::translate("Inductance_calculation", "\320\222\321\213\321\201\320\276\321\202\320\260 \321\202\320\276\321\200\320\276\320\270\320\264\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\201\320\265\321\200\320\264\320\265\321\207\320\275\320\270\320\272\320\260 (h)", nullptr));
        label_pieces->setText(QCoreApplication::translate("Inductance_calculation", "\321\210\321\202", nullptr));
        label_none->setText(QString());
        label_m_R->setText(QCoreApplication::translate("Inductance_calculation", "\320\274", nullptr));
        label_m_r->setText(QCoreApplication::translate("Inductance_calculation", "\320\274", nullptr));
        label_m_h->setText(QCoreApplication::translate("Inductance_calculation", "\320\274", nullptr));
        Clear_calculation->setText(QCoreApplication::translate("Inductance_calculation", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        L_calculation->setText(QCoreApplication::translate("Inductance_calculation", "\320\240\320\260\321\201\321\207\321\221\321\202 L", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inductance_calculation: public Ui_Inductance_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDUCTANCE_CALCULATION_H
