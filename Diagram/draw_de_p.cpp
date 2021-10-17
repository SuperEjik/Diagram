#include "draw_de_p.h"
#include "ui_draw_de_p.h"

Draw_De_p::Draw_De_p(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_p)
{
    ui->setupUi(this);
}

Draw_De_p::~Draw_De_p()
{
    delete ui;
}

void Draw_De_p::draw_graph(double Y, double X)
{
    ui->De_p_graph->clearGraphs();//очищаем весь график
    x.clear();//очищаем ось х
    y.clear();//очищаем ось у

    ui->De_p_graph->yAxis->setLabel("De");
    ui->De_p_graph->xAxis->setLabel("p");

    if(Y<0)
    {

        ui->De_p_graph->yAxis->setRange(Y, -Y);
    }
    else
    {
        ui->De_p_graph->yAxis->setRange(0, Y+1);
    }


    ui->De_p_graph->xAxis->setRange(0, X);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);

    ui->De_p_graph->addGraph();
    ui->De_p_graph->graph(0)->addData(x,y);
    ui->De_p_graph->replot();
}
