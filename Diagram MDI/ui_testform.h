/********************************************************************************
** Form generated from reading UI file 'testform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFORM_H
#define UI_TESTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testForm
{
public:

    void setupUi(QWidget *testForm)
    {
        if (testForm->objectName().isEmpty())
            testForm->setObjectName(QString::fromUtf8("testForm"));
        testForm->resize(400, 300);

        retranslateUi(testForm);

        QMetaObject::connectSlotsByName(testForm);
    } // setupUi

    void retranslateUi(QWidget *testForm)
    {
        testForm->setWindowTitle(QCoreApplication::translate("testForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testForm: public Ui_testForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFORM_H
