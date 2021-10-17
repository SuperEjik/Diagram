#include "draw_de_nu.h"
#include "ui_draw_de_nu.h"

Draw_De_nu::Draw_De_nu(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_nu)
{
    ui->setupUi(this);
}

Draw_De_nu::~Draw_De_nu()
{
    delete ui;
}

void Draw_De_nu::draw_graph(double Y, double X)
{
    ui->De_nu_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->De_nu_graph->yAxis->setLabel("De");
    ui->De_nu_graph->xAxis->setLabel("µ");

    if(Y<0)
    {

        ui->De_nu_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->De_nu_graph->yAxis->setRange(0, Y+1);
    }


    ui->De_nu_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->De_nu_graph->addGraph();
    ui->De_nu_graph->graph(0)->addData(x,y);
    ui->De_nu_graph->replot();
}
