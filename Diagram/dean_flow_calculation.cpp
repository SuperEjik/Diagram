#include "dean_flow_calculation.h"
#include "ui_dean_flow_calculation.h"
#include "calculation.h"

#include <qvalidator.h>

dean_flow_calculation::dean_flow_calculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dean_flow_calculation)
{
    ui->setupUi(this);

    ui->lineEdit_p->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_D->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_v->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_nu->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_Rc->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
}

dean_flow_calculation::~dean_flow_calculation()
{
    delete ui;
}


void dean_flow_calculation::on_Clear_calculation_clicked()
{
    ui->lineEdit_p->clear();
    ui->lineEdit_D->clear();
    ui->lineEdit_v->clear();
    ui->lineEdit_nu->clear();
    ui->lineEdit_Rc->clear();
}


void dean_flow_calculation::on_flow_De_calculation_clicked()
{
    ui->text_De->clear();

    double p, D, v, nu, Rc;

    QString S1 = ui->lineEdit_p->text().replace(",", ".");
    p = S1.toDouble();

    QString S2 = ui->lineEdit_D->text().replace(",", ".");
    D = S2.toDouble();

    QString S3 = ui->lineEdit_v->text().replace(",", ".");
    v = S3.toDouble();

    QString S4 = ui->lineEdit_nu->text().replace(",", ".");
    nu = S4.toDouble();

    QString S5 = ui->lineEdit_Rc->text().replace(",", ".");
    Rc = S5.toDouble();

    Calculation c;
    ui->text_De->insertPlainText(QString::number(c.definition_Dn(p, D, v, nu, Rc)));
}

