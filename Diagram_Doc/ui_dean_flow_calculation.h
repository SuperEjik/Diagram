/********************************************************************************
** Form generated from reading UI file 'dean_flow_calculation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAN_FLOW_CALCULATION_H
#define UI_DEAN_FLOW_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dean_flow_calculation
{
public:
    QTextBrowser *text_De;
    QFrame *line_down;
    QLabel *label_Down;
    QLabel *label_up;
    QFrame *line_up;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label_p;
    QLabel *label_D;
    QLabel *label_v;
    QLabel *label_nu;
    QLabel *label_Rc;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_p;
    QLabel *label_kg;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_D;
    QLabel *label_mm;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_v;
    QLabel *label_m_c;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_nu;
    QLabel *label_Pa_c;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_Rc;
    QLabel *label_mm_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *Clear_calculation;
    QPushButton *flow_De_calculation;

    void setupUi(QWidget *dean_flow_calculation)
    {
        if (dean_flow_calculation->objectName().isEmpty())
            dean_flow_calculation->setObjectName(QString::fromUtf8("dean_flow_calculation"));
        dean_flow_calculation->setWindowModality(Qt::NonModal);
        dean_flow_calculation->resize(500, 380);
        dean_flow_calculation->setMinimumSize(QSize(500, 380));
        dean_flow_calculation->setMaximumSize(QSize(500, 380));
        text_De = new QTextBrowser(dean_flow_calculation);
        text_De->setObjectName(QString::fromUtf8("text_De"));
        text_De->setGeometry(QRect(250, 340, 184, 27));
        text_De->setAcceptDrops(true);
        text_De->setTabChangesFocus(false);
        text_De->setReadOnly(true);
        line_down = new QFrame(dean_flow_calculation);
        line_down->setObjectName(QString::fromUtf8("line_down"));
        line_down->setGeometry(QRect(0, 320, 498, 20));
        line_down->setFrameShape(QFrame::HLine);
        line_down->setFrameShadow(QFrame::Sunken);
        label_Down = new QLabel(dean_flow_calculation);
        label_Down->setObjectName(QString::fromUtf8("label_Down"));
        label_Down->setGeometry(QRect(10, 300, 81, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        label_Down->setFont(font);
        label_up = new QLabel(dean_flow_calculation);
        label_up->setObjectName(QString::fromUtf8("label_up"));
        label_up->setGeometry(QRect(10, 10, 101, 21));
        label_up->setFont(font);
        line_up = new QFrame(dean_flow_calculation);
        line_up->setObjectName(QString::fromUtf8("line_up"));
        line_up->setGeometry(QRect(0, 30, 498, 20));
        line_up->setFrameShape(QFrame::HLine);
        line_up->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(dean_flow_calculation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 471, 191));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_p = new QLabel(layoutWidget);
        label_p->setObjectName(QString::fromUtf8("label_p"));
        label_p->setFont(font);

        gridLayout_2->addWidget(label_p, 0, 0, 1, 1);

        label_D = new QLabel(layoutWidget);
        label_D->setObjectName(QString::fromUtf8("label_D"));
        label_D->setFont(font);

        gridLayout_2->addWidget(label_D, 1, 0, 1, 1);

        label_v = new QLabel(layoutWidget);
        label_v->setObjectName(QString::fromUtf8("label_v"));
        label_v->setFont(font);

        gridLayout_2->addWidget(label_v, 2, 0, 1, 1);

        label_nu = new QLabel(layoutWidget);
        label_nu->setObjectName(QString::fromUtf8("label_nu"));
        label_nu->setFont(font);

        gridLayout_2->addWidget(label_nu, 3, 0, 1, 1);

        label_Rc = new QLabel(layoutWidget);
        label_Rc->setObjectName(QString::fromUtf8("label_Rc"));
        label_Rc->setFont(font);

        gridLayout_2->addWidget(label_Rc, 4, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_p = new QLineEdit(layoutWidget);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));
        lineEdit_p->setFont(font);

        horizontalLayout->addWidget(lineEdit_p);

        label_kg = new QLabel(layoutWidget);
        label_kg->setObjectName(QString::fromUtf8("label_kg"));
        label_kg->setFont(font);

        horizontalLayout->addWidget(label_kg);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_D = new QLineEdit(layoutWidget);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));
        lineEdit_D->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_D);

        label_mm = new QLabel(layoutWidget);
        label_mm->setObjectName(QString::fromUtf8("label_mm"));
        label_mm->setFont(font);

        horizontalLayout_2->addWidget(label_mm);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_v = new QLineEdit(layoutWidget);
        lineEdit_v->setObjectName(QString::fromUtf8("lineEdit_v"));
        lineEdit_v->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_v);

        label_m_c = new QLabel(layoutWidget);
        label_m_c->setObjectName(QString::fromUtf8("label_m_c"));
        label_m_c->setFont(font);

        horizontalLayout_3->addWidget(label_m_c);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEdit_nu = new QLineEdit(layoutWidget);
        lineEdit_nu->setObjectName(QString::fromUtf8("lineEdit_nu"));
        lineEdit_nu->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_nu);

        label_Pa_c = new QLabel(layoutWidget);
        label_Pa_c->setObjectName(QString::fromUtf8("label_Pa_c"));
        label_Pa_c->setFont(font);

        horizontalLayout_4->addWidget(label_Pa_c);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_Rc = new QLineEdit(layoutWidget);
        lineEdit_Rc->setObjectName(QString::fromUtf8("lineEdit_Rc"));
        lineEdit_Rc->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_Rc);

        label_mm_2 = new QLabel(layoutWidget);
        label_mm_2->setObjectName(QString::fromUtf8("label_mm_2"));
        label_mm_2->setFont(font);

        horizontalLayout_5->addWidget(label_mm_2);


        formLayout->setLayout(4, QFormLayout::LabelRole, horizontalLayout_5);


        horizontalLayout_6->addLayout(formLayout);

        layoutWidget1 = new QWidget(dean_flow_calculation);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 250, 90, 66));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Clear_calculation = new QPushButton(layoutWidget1);
        Clear_calculation->setObjectName(QString::fromUtf8("Clear_calculation"));
        Clear_calculation->setFont(font);

        gridLayout->addWidget(Clear_calculation, 2, 0, 1, 1);

        flow_De_calculation = new QPushButton(layoutWidget1);
        flow_De_calculation->setObjectName(QString::fromUtf8("flow_De_calculation"));
        flow_De_calculation->setFont(font);

        gridLayout->addWidget(flow_De_calculation, 1, 0, 1, 1);


        retranslateUi(dean_flow_calculation);

        QMetaObject::connectSlotsByName(dean_flow_calculation);
    } // setupUi

    void retranslateUi(QWidget *dean_flow_calculation)
    {
        dean_flow_calculation->setWindowTitle(QCoreApplication::translate("dean_flow_calculation", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \321\207\320\270\321\201\320\273\320\260 \320\224\320\270\320\275\320\260", nullptr));
        label_Down->setText(QCoreApplication::translate("dean_flow_calculation", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_up->setText(QCoreApplication::translate("dean_flow_calculation", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label_p->setText(QCoreApplication::translate("dean_flow_calculation", "\320\237\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 \320\266\320\270\320\264\320\272\320\276\321\201\321\202\320\270 (p)", nullptr));
        label_D->setText(QCoreApplication::translate("dean_flow_calculation", "\320\224\320\270\320\274\320\265\321\202\321\200 (D)", nullptr));
        label_v->setText(QCoreApplication::translate("dean_flow_calculation", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\202\320\265\321\207\320\265\320\275\320\270\321\217 (v)", nullptr));
        label_nu->setText(QCoreApplication::translate("dean_flow_calculation", "\320\224\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\262\321\217\320\267\320\272\320\276\321\201\321\202\321\214 (\316\274)", nullptr));
        label_Rc->setText(QCoreApplication::translate("dean_flow_calculation", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\272\321\200\320\270\320\262\320\270\320\267\320\275\321\213 \320\277\321\203\321\202\320\270 (r)", nullptr));
        label_kg->setText(QCoreApplication::translate("dean_flow_calculation", "\320\272\320\263/\320\274\302\263", nullptr));
        label_mm->setText(QCoreApplication::translate("dean_flow_calculation", "\320\274", nullptr));
        label_m_c->setText(QCoreApplication::translate("dean_flow_calculation", "\320\274/\321\201", nullptr));
        label_Pa_c->setText(QCoreApplication::translate("dean_flow_calculation", "\320\237\320\260 \302\267 \321\201", nullptr));
        label_mm_2->setText(QCoreApplication::translate("dean_flow_calculation", "\320\274", nullptr));
        Clear_calculation->setText(QCoreApplication::translate("dean_flow_calculation", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        flow_De_calculation->setText(QCoreApplication::translate("dean_flow_calculation", "\320\240\320\260\321\201\321\207\321\221\321\202 De", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dean_flow_calculation: public Ui_dean_flow_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAN_FLOW_CALCULATION_H
