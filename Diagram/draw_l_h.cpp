#include "draw_l_h.h"
#include "ui_draw_l_h.h"

Draw_L_h::Draw_L_h(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_h)
{
    ui->setupUi(this);
}

Draw_L_h::~Draw_L_h()
{
    delete ui;
}

void Draw_L_h::draw_graph(double Y, double X)
{
    ui->L_h_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->L_h_graph->yAxis->setLabel("L");
    ui->L_h_graph->xAxis->setLabel("r");

    if(Y<0)
    {

        ui->L_h_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->L_h_graph->yAxis->setRange(0, Y+1);
    }


    ui->L_h_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->L_h_graph->addGraph();
    ui->L_h_graph->graph(0)->addData(x,y);
    ui->L_h_graph->replot();
}
