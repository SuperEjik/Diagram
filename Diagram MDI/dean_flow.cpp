#include "dean_flow.h"
#include "ui_dean_flow.h"
#include "calculation.h"

dean_flow::dean_flow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dean_flow)
{
    ui->setupUi(this);
}

dean_flow::~dean_flow()
{
    delete ui;
}


void dean_flow::on_Clear_calculation_clicked()
{
    ui->lineEdit_p->clear();
    ui->lineEdit_D->clear();
    ui->lineEdit_v->clear();
    ui->lineEdit_nu->clear();
    ui->lineEdit_Rc->clear();
}


void dean_flow::on_flow_De_calculation_clicked()
{
    ui->text_De->clear();

    double p, D, v, nu, Rc;

    QString S1 = ui->lineEdit_p->text();
    p = S1.toDouble();

    QString S2 = ui->lineEdit_D->text();
    D = S2.toDouble();

    QString S3 = ui->lineEdit_v->text();
    v = S3.toDouble();

    QString S4 = ui->lineEdit_nu->text();
    nu = S4.toDouble();

    QString S5 = ui->lineEdit_Rc->text();
    Rc = S5.toDouble();

    Calculation c;
    ui->text_De->insertPlainText(QString::number(c.definition_Dn(p, D, v, nu, Rc)));
}

