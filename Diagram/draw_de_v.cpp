#include "draw_de_v.h"
#include "ui_draw_de_v.h"

Draw_De_v::Draw_De_v(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_v)
{
    ui->setupUi(this);
}

Draw_De_v::~Draw_De_v()
{
    delete ui;
}

void Draw_De_v::draw_graph(double Y, double X)
{
    ui->De_v_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->De_v_graph->yAxis->setLabel("De");
    ui->De_v_graph->xAxis->setLabel("v");

    if(Y<0)
    {

        ui->De_v_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->De_v_graph->yAxis->setRange(0, Y+1);
    }


    ui->De_v_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->De_v_graph->addGraph();
    ui->De_v_graph->graph(0)->addData(x,y);
    ui->De_v_graph->replot();
}
