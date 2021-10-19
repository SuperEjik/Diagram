#include "diagram_window.h"
#include "ui_diagram_window.h"

diagram_window::diagram_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::diagram_window)
{
    diagram_name = ui->widget;

    start_x = 0;
    start_y = 0;
    first = true;
}

diagram_window::~diagram_window()
{
    delete ui;
}

void diagram_window::draw_graph(double Y, double X)
{
    diagram_name->setInteraction(QCP::iRangeZoom, true);
    diagram_name->setInteraction(QCP::iRangeDrag, true);

    QCPItemLine *line1, *line2;

    diagram_name->xAxis->setRange(0, X);
    diagram_name->yAxis->setRange(0, Y);

    if(X > start_x)
    {
        line1 = new QCPItemLine(diagram_name);
        line1->setPen(QPen(Qt::red));
        if(first == true)
        {
            line1->start->setCoords(0,0);
            first = false;
        }
        else
        {
            line1->start->setCoords(start_x,start_y);
        }

        line1->end->setCoords(X,Y);
        start_x = X;
        start_y = Y;
    }
    else if(X < start_x)
    {
        line2 = new QCPItemLine(diagram_name);

        line2->setPen(QPen(Qt::blue));
        line2->start->setCoords(0,0);
        line2->end->setCoords(X,Y);
         start_x = X;
         start_y = Y;
    }
    else if(X == start_x && Y == start_y)
    {

    }

    diagram_name->replot();
}
