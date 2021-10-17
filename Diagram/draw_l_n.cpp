#include "draw_l_n.h"
#include "ui_draw_l_n.h"

Draw_L_N::Draw_L_N(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_N)
{
    ui->setupUi(this);

    start_x = 0;
    start_y = 0;
    first = true;
}

Draw_L_N::~Draw_L_N()
{
    delete ui;
}

void Draw_L_N::draw_graph(double Y, double X)
{
    //ui->L_N_graph->clearGraphs();//очищаем весь график
    //x.clear();//очищаем ось х
    //y.clear();//очищаем ось у

    ui->L_N_graph->yAxis->setLabel("L");
    ui->L_N_graph->xAxis->setLabel("N");

    /*ui->L_N_graph->xAxis->setRange(0, 10);
    ui->L_N_graph->yAxis->setRange(-2, 2);

    x.push_back(0);
    y.push_back(0);

    x.push_back(X);
    y.push_back(Y);*/ //добавляет

    if( (Y > 0 && start_y >= 0) || (Y < 0 && start_y <= 0) )
    {
        if(abs(Y) > abs(start_y))
        {
            ui->L_N_graph->yAxis->setRange(0, Y);
            start_y = Y;
        }
        else
        {
            ui->L_N_graph->yAxis->setRange(Y, start_y);
        }
    }
    else
    {
        ui->L_N_graph->yAxis->setRange(start_y, Y);
    }

    if(X > start_x)
    {
        ui->L_N_graph->xAxis->setRange(0, X + X/10);
        start_x = X;
    }
    else
    {
        ui->L_N_graph->xAxis->setRange(0, start_x + start_x/10);
    }

    //ui->L_N_graph->yAxis->setRange(-2, 2);

    if(first == true)
    {
        x.push_back(0);
        y.push_back(0);
        first = false;
    }
    else
    {
        x.push_back(start_x);
        y.push_back(start_y);
    }

    x.push_back(X);
    y.push_back(Y);

    //start_x = start_x + X;
    //start_y = start_y + Y;

    ui->L_N_graph->addGraph();
    ui->L_N_graph->graph(0)->addData(x,y);
    ui->L_N_graph->replot();
}
