#include "diagram_window.h"
#include "ui_diagram_window.h"

diagram_window::diagram_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::diagram_window)
{
    diagram_name = ui->widget;

    max_x = 0;
    max_y = 0;
    first = true;

    i = 0;
}

diagram_window::~diagram_window()
{
    delete ui;
}

void diagram_window::draw_graph(double Y, double X)
{
    diagram_name->setInteraction(QCP::iRangeZoom, true);
    diagram_name->setInteraction(QCP::iRangeDrag, true);

    diagram_name->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    diagram_name->graph(0)->setData(x, y);

    diagram_name->graph(0)->setPen(QColor(50, 50, 50, 255));//задаем цвет точки
    //формируем вид точек
    diagram_name->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 6));
    diagram_name->graph(0)->setLineStyle(QCPGraph::lsNone);

    x.append(0);
    y.append(0);

    x.append(X);
    y.append(Y);

    QCPItemLine *line1;

    diagram_name->xAxis->setRange(0, X);
    diagram_name->yAxis->setRange(0, Y);

    line1 = new QCPItemLine(diagram_name);
    line1->setPen(QPen(Qt::red));

    line1->start->setCoords(0,0);

    line1->end->setCoords(X,Y);

    start_x = X;
    start_y = Y;

    diagram_name->xAxis->setRange(0, X+X/10);
    diagram_name->yAxis->setRange(0, Y+Y/10);

    //И перерисуем график на нашем widget
    diagram_name->graph(0)->setData(x,y);
    diagram_name->replot();
    diagram_name->update();
}

/*//Добавляем один график в widget (точки)
diagram_name->addGraph();
//Говорим, что отрисовать нужно график по нашим двум массивам x и y
diagram_name->graph(0)->setData(x, y);

diagram_name->graph(0)->setPen(QColor(50, 50, 50, 255));//задаем цвет точки
//формируем вид точек
diagram_name->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 6));


x.append(0);
y.append(0);

x.append(X);
y.append(Y);

diagram_name->xAxis->setRange(0, X+X/10);
diagram_name->yAxis->setRange(0, Y+Y/10);

//И перерисуем график на нашем widget
diagram_name->graph(0)->setData(x,y);
diagram_name->replot();
diagram_name->update();*/


//лини с продолжением от прошлой
/*QCPItemLine *line1, *line2;

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

x.append(1);
y.append(1);

diagram_name->graph(0)->setData(x,y);*/
//diagram_name->replot();
//diagram_name->update();



//по одиночке
/*QCPItemLine *line1;
if(X != start_x && Y != start_y)
{
    diagram_name->xAxis->setRange(0, X);
    diagram_name->yAxis->setRange(0, Y);

    line1 = new QCPItemLine(diagram_name);
    line1->setPen(QPen(Qt::red));

    line1->start->setCoords(0,0);

    line1->end->setCoords(X,Y);

    start_x = X;
    start_y = Y;

}

else if(X == start_x && Y == start_y)
{

}

diagram_name->xAxis->setRange(0, X+X/10);
diagram_name->yAxis->setRange(0, Y+Y/10);

diagram_name->replot();
diagram_name->update();*/

//diagram_name->graph(0)->setData(x,y);
