#include "draw_l_nu.h"
#include "ui_draw_l_nu.h"

Draw_L_nu::Draw_L_nu(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_nu)
{
    ui->setupUi(this);
}

Draw_L_nu::~Draw_L_nu()
{
    delete ui;
}

void Draw_L_nu::draw_graph(double Y, double X)
{
    ui->L_nu_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у*/

    ui->L_nu_graph->yAxis->setLabel("L");
    ui->L_nu_graph->xAxis->setLabel("µ");

    if(Y<0)
    {

        ui->L_nu_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->L_nu_graph->yAxis->setRange(0, Y+1);
    }


    ui->L_nu_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->L_nu_graph->addGraph();
    ui->L_nu_graph->graph(0)->addData(x,y);
    ui->L_nu_graph->replot();
}
