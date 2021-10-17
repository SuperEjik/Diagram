#include "draw_de_d.h"
#include "ui_draw_de_d.h"

Draw_De_D::Draw_De_D(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_D)
{
    ui->setupUi(this);
}

Draw_De_D::~Draw_De_D()
{
    delete ui;
}

void Draw_De_D::draw_graph(double Y, double X)
{
    ui->De_D_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->De_D_graph->yAxis->setLabel("De");
    ui->De_D_graph->xAxis->setLabel("D");

    if(Y<0)
    {

        ui->De_D_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->De_D_graph->yAxis->setRange(0, Y+1);
    }


    ui->De_D_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->De_D_graph->addGraph();
    ui->De_D_graph->graph(0)->addData(x,y);
    ui->De_D_graph->replot();
}
