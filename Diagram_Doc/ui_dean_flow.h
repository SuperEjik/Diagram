/********************************************************************************
** Form generated from reading UI file 'dean_flow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAN_FLOW_H
#define UI_DEAN_FLOW_H

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

class Ui_dean_flow_calculation
{
public:
    QTextBrowser *text_De;
    QFrame *line_down;
    QLabel *label_Down;
    QLabel *label_up;
    QFrame *line_up;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Clear_calculation;
    QPushButton *flow_De_calculation;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_p;
    QLabel *label_D;
    QLabel *label_v;
    QLabel *label_nu;
    QLabel *label_Rc;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_Rc;
    QLineEdit *lineEdit_D;
    QLineEdit *lineEdit_nu;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_v;
    QLabel *label_kg;
    QLabel *label_mm;
    QLabel *label_m_c;
    QLabel *label_Pa_c;
    QLabel *label_mm_2;

    void setupUi(QWidget *dean_flow)
    {
        if (dean_flow->objectName().isEmpty())
            dean_flow->setObjectName(QString::fromUtf8("dean_flow"));
        dean_flow->resize(438, 397);
        text_De = new QTextBrowser(dean_flow);
        text_De->setObjectName(QString::fromUtf8("text_De"));
        text_De->setGeometry(QRect(310, 350, 111, 31));
        text_De->setAcceptDrops(true);
        text_De->setTabChangesFocus(false);
        text_De->setReadOnly(true);
        line_down = new QFrame(dean_flow);
        line_down->setObjectName(QString::fromUtf8("line_down"));
        line_down->setGeometry(QRect(0, 330, 439, 16));
        line_down->setFrameShape(QFrame::HLine);
        line_down->setFrameShadow(QFrame::Sunken);
        label_Down = new QLabel(dean_flow);
        label_Down->setObjectName(QString::fromUtf8("label_Down"));
        label_Down->setGeometry(QRect(10, 310, 48, 16));
        label_up = new QLabel(dean_flow);
        label_up->setObjectName(QString::fromUtf8("label_up"));
        label_up->setGeometry(QRect(10, 10, 57, 16));
        line_up = new QFrame(dean_flow);
        line_up->setObjectName(QString::fromUtf8("line_up"));
        line_up->setGeometry(QRect(0, 30, 439, 16));
        line_up->setFrameShape(QFrame::HLine);
        line_up->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(dean_flow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 300, 158, 25));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Clear_calculation = new QPushButton(layoutWidget);
        Clear_calculation->setObjectName(QString::fromUtf8("Clear_calculation"));

        gridLayout->addWidget(Clear_calculation, 0, 0, 1, 1);

        flow_De_calculation = new QPushButton(layoutWidget);
        flow_De_calculation->setObjectName(QString::fromUtf8("flow_De_calculation"));

        gridLayout->addWidget(flow_De_calculation, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(dean_flow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 50, 351, 211));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_p = new QLabel(layoutWidget1);
        label_p->setObjectName(QString::fromUtf8("label_p"));

        gridLayout_2->addWidget(label_p, 0, 0, 1, 1);

        label_D = new QLabel(layoutWidget1);
        label_D->setObjectName(QString::fromUtf8("label_D"));

        gridLayout_2->addWidget(label_D, 1, 0, 1, 1);

        label_v = new QLabel(layoutWidget1);
        label_v->setObjectName(QString::fromUtf8("label_v"));

        gridLayout_2->addWidget(label_v, 2, 0, 1, 1);

        label_nu = new QLabel(layoutWidget1);
        label_nu->setObjectName(QString::fromUtf8("label_nu"));

        gridLayout_2->addWidget(label_nu, 3, 0, 1, 1);

        label_Rc = new QLabel(layoutWidget1);
        label_Rc->setObjectName(QString::fromUtf8("label_Rc"));

        gridLayout_2->addWidget(label_Rc, 4, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 5, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_Rc = new QLineEdit(layoutWidget1);
        lineEdit_Rc->setObjectName(QString::fromUtf8("lineEdit_Rc"));

        gridLayout_3->addWidget(lineEdit_Rc, 4, 0, 1, 1);

        lineEdit_D = new QLineEdit(layoutWidget1);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));

        gridLayout_3->addWidget(lineEdit_D, 1, 0, 1, 1);

        lineEdit_nu = new QLineEdit(layoutWidget1);
        lineEdit_nu->setObjectName(QString::fromUtf8("lineEdit_nu"));

        gridLayout_3->addWidget(lineEdit_nu, 3, 0, 1, 1);

        lineEdit_p = new QLineEdit(layoutWidget1);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));

        gridLayout_3->addWidget(lineEdit_p, 0, 0, 1, 1);

        lineEdit_v = new QLineEdit(layoutWidget1);
        lineEdit_v->setObjectName(QString::fromUtf8("lineEdit_v"));

        gridLayout_3->addWidget(lineEdit_v, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 5, 1);

        label_kg = new QLabel(layoutWidget1);
        label_kg->setObjectName(QString::fromUtf8("label_kg"));

        gridLayout_4->addWidget(label_kg, 0, 2, 1, 1);

        label_mm = new QLabel(layoutWidget1);
        label_mm->setObjectName(QString::fromUtf8("label_mm"));

        gridLayout_4->addWidget(label_mm, 1, 2, 1, 1);

        label_m_c = new QLabel(layoutWidget1);
        label_m_c->setObjectName(QString::fromUtf8("label_m_c"));

        gridLayout_4->addWidget(label_m_c, 2, 2, 1, 1);

        label_Pa_c = new QLabel(layoutWidget1);
        label_Pa_c->setObjectName(QString::fromUtf8("label_Pa_c"));

        gridLayout_4->addWidget(label_Pa_c, 3, 2, 1, 1);

        label_mm_2 = new QLabel(layoutWidget1);
        label_mm_2->setObjectName(QString::fromUtf8("label_mm_2"));

        gridLayout_4->addWidget(label_mm_2, 4, 2, 1, 1);


        retranslateUi(dean_flow);

        QMetaObject::connectSlotsByName(dean_flow);
    } // setupUi

    void retranslateUi(QWidget *dean_flow)
    {
        dean_flow->setWindowTitle(QCoreApplication::translate("dean_flow", "Form", nullptr));
        label_Down->setText(QCoreApplication::translate("dean_flow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_up->setText(QCoreApplication::translate("dean_flow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        Clear_calculation->setText(QCoreApplication::translate("dean_flow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        flow_De_calculation->setText(QCoreApplication::translate("dean_flow", "\320\240\320\260\321\201\321\207\321\221\321\202 De", nullptr));
        label_p->setText(QCoreApplication::translate("dean_flow", "\320\237\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 \320\266\320\270\320\264\320\272\320\276\321\201\321\202\320\270 (p)", nullptr));
        label_D->setText(QCoreApplication::translate("dean_flow", "\320\224\320\270\320\274\320\265\321\202\321\200 (D)", nullptr));
        label_v->setText(QCoreApplication::translate("dean_flow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\202\320\265\321\207\320\265\320\275\320\270\321\217 (v)", nullptr));
        label_nu->setText(QCoreApplication::translate("dean_flow", "\320\224\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\262\321\217\320\267\320\272\320\276\321\201\321\202\321\214 (\316\274)", nullptr));
        label_Rc->setText(QCoreApplication::translate("dean_flow", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\272\321\200\320\270\320\262\320\270\320\267\320\275\321\213 \320\277\321\203\321\202\320\270 (r)", nullptr));
        label_kg->setText(QCoreApplication::translate("dean_flow", "\320\272\320\263/\320\274\302\263", nullptr));
        label_mm->setText(QCoreApplication::translate("dean_flow", "\320\274\320\274", nullptr));
        label_m_c->setText(QCoreApplication::translate("dean_flow", "\320\274/\321\201", nullptr));
        label_Pa_c->setText(QCoreApplication::translate("dean_flow", "\320\237\320\260 \302\267 \321\201", nullptr));
        label_mm_2->setText(QCoreApplication::translate("dean_flow", "\320\274\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dean_flow_calculation public Ui_dean_flow_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAN_FLOW_H
