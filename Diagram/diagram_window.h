#ifndef DIAGRAM_WINDOW_H
#define DIAGRAM_WINDOW_H

#include <QWidget>
#include <QVector>
#include <qcustomplot.h>

namespace Ui {
class diagram_window;
}

class diagram_window : public QWidget
{
    Q_OBJECT

public:
    explicit diagram_window(QWidget *parent = nullptr);
    ~diagram_window();

    void draw_graph(double, double);

    QVector<double> x,y;

    double start_x, start_y, max_x, max_y;
    bool first;

    int i;

    QCustomPlot* diagram_name;


private:
    Ui::diagram_window *ui;
};

#endif // DIAGRAM_WINDOW_H
