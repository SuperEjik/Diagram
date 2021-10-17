#include "draw_l_inner_r.h"
#include "ui_draw_l_inner_r.h"

Draw_L_Inner_r::Draw_L_Inner_r(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_Inner_r)
{
    ui->setupUi(this);
}

Draw_L_Inner_r::~Draw_L_Inner_r()
{
    delete ui;
}

void Draw_L_Inner_r::draw_graph(double Y, double X)
{
    ui->L_r_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->L_r_graph->yAxis->setLabel("L");
    ui->L_r_graph->xAxis->setLabel("r");

    if(Y<0)
    {

        ui->L_r_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->L_r_graph->yAxis->setRange(0, Y+1);
    }


    ui->L_r_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->L_r_graph->addGraph();
    ui->L_r_graph->graph(0)->addData(x,y);
    ui->L_r_graph->replot();
}
