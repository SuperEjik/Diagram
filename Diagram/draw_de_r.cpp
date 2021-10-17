#include "draw_de_r.h"
#include "ui_draw_de_r.h"

Draw_De_r::Draw_De_r(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_r)
{
    ui->setupUi(this);
}

Draw_De_r::~Draw_De_r()
{
    delete ui;
}

void Draw_De_r::draw_graph(double Y, double X)
{
    ui->De_r_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->De_r_graph->yAxis->setLabel("De");
    ui->De_r_graph->xAxis->setLabel("r");

    if(Y<0)
    {

        ui->De_r_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->De_r_graph->yAxis->setRange(0, Y+1);
    }


    ui->De_r_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->De_r_graph->addGraph();
    ui->De_r_graph->graph(0)->addData(x,y);
    ui->De_r_graph->replot();
}
