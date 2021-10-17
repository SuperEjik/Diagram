#include "draw_l_R.h"
#include "ui_draw_l_R.h"

Draw_L_R::Draw_L_R(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_R)
{
    ui->setupUi(this);
}

Draw_L_R::~Draw_L_R()
{
    delete ui;
}

void Draw_L_R::draw_graph(double Y, double X)
{
    ui->L_R_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->L_R_graph->yAxis->setLabel("L");
    ui->L_R_graph->xAxis->setLabel("R");

    if(Y<0)
    {

        ui->L_R_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->L_R_graph->yAxis->setRange(0, Y+1);
    }


    ui->L_R_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->L_R_graph->addGraph();
    ui->L_R_graph->graph(0)->addData(x,y);
    ui->L_R_graph->replot();
}
