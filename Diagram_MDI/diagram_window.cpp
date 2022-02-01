#include "diagram_window.h"
#include "ui_diagram_window.h"
#include <QMenuBar>

diagram_window::diagram_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::diagram_window)
{
    diagram_name = ui->widget;
    this->setWindowIcon(QPixmap(":/resource/pic/lable_ipu.png"));

    min_x = 1000;
    min_y = 1000;

    max_x = 5000;
    max_y = 5000;

    /*QMenuBar *mb = new QMenuBar(this);
    QMenu *me = new QMenu("Save");
    me->addAction("Сохранить");
    me->addAction("Слхранить как");
    mb->addMenu(me);*/
}

diagram_window::~diagram_window()
{
    delete ui;
}

void diagram_window::draw_graph(double Y1, double X1, double Y2, double X2)
{
    diagram_name->setInteraction(QCP::iRangeZoom, true);
    diagram_name->setInteraction(QCP::iRangeDrag, true);

    //рисуем точки
    diagram_name->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    diagram_name->graph(0)->setData(x, y);

    diagram_name->graph(0)->setPen(QColor(50, 50, 50, 255));//задаем цвет точки
    //формируем вид точек
    diagram_name->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 6));
    diagram_name->graph(0)->setLineStyle(QCPGraph::lsNone);

    x.append(X1);
    y.append(Y1);

    x.append(X2);
    y.append(Y2);

    //рисуем линию
    QCPItemLine *line1;

    line1 = new QCPItemLine(diagram_name);
    line1->setPen(QPen(Qt::red));

    line1->start->setCoords(X1, Y1);
    line1->end->setCoords(X2, Y2);

    diagram_name->xAxis->setRange(X1, X2+X2/10);
    diagram_name->yAxis->setRange(Y1, Y2+Y2/10);

    //И перерисуем график на нашем widget
    diagram_name->graph(0)->setData(x,y);
    diagram_name->replot();
    diagram_name->update();
}

void diagram_window::on_Save_clicked()
{
    QString path = QFileDialog::getSaveFileName(this, tr("Сохранить график"), "", tr("Графики (*.png);;All Files (*)"));

    QString fileName(path);
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly))
    {
        qDebug() << file.errorString();
        QMessageBox::critical(this, "Ошибка","Ошибка сохранения файла");
    }
    else
    {
        diagram_name->savePng(fileName);
        QMessageBox::information(this, "Сохранено","График успешно сохранён по пути " + path);
    }
}

