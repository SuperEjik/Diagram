#include "inductance_calculation.h"
#include "ui_inductance_calculation.h"
#include "calculation.h"

#include <qvalidator.h>

Inductance_calculation::Inductance_calculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inductance_calculation)
{
    ui->setupUi(this);

    ui->lineEdit_N->setValidator(new QRegExpValidator(QRegExp("^([1-9][0-9]*|0)(\\.|,)[0-9]{10}"), this));
    ui->lineEdit_nu->setValidator(new QRegExpValidator(QRegExp("^([1-9][0-9]*|0)(\\.|,)[0-9]{10}"), this));
    ui->lineEdit_h->setValidator(new QRegExpValidator(QRegExp("^([1-9][0-9]*|0)(\\.|,)[0-9]{10}"), this));
    ui->lineEdit_R->setValidator(new QRegExpValidator(QRegExp("^([1-9][0-9]*|0)(\\.|,)[0-9]{10}"), this));
    ui->lineEdit_r->setValidator(new QRegExpValidator(QRegExp("^([1-9][0-9]*|0)(\\.|,)[0-9]{10}"), this));
}

Inductance_calculation::~Inductance_calculation()
{
    delete ui;
}

void Inductance_calculation::on_Clear_calculation_clicked()
{
    ui->lineEdit_N->clear();
    ui->lineEdit_nu->clear();
    ui->lineEdit_h->clear();
    ui->lineEdit_R->clear();
    ui->lineEdit_r->clear();
}


void Inductance_calculation::on_L_calculation_clicked()
{
    ui->text_L->clear();

    double N, nu, R, r, h;

    QString S1 = ui->lineEdit_N->text();
    N = S1.toDouble();

    QString S2 = ui->lineEdit_nu->text();
    nu = S2.toDouble();

    QString S3 = ui->lineEdit_R->text();
    R = S3.toDouble();

    QString S4 = ui->lineEdit_r->text();
    r = S4.toDouble();

    QString S5 = ui->lineEdit_h->text();
    h = S5.toDouble();

    Calculation c;
    ui->text_L->insertPlainText(QString::number(c.Inductance(N, nu, R, r, h)));
}

