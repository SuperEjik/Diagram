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

    void draw_graph(double, double, double, double);

    QVector<double> x,y;

    double start_x, start_y, max_x, max_y, min_x, min_y;

    QCustomPlot* diagram_name;
    QCPItemText *textLabel_Y, *textLabel_X;


private slots:
    void on_Save_clicked();

private:
    Ui::diagram_window *ui;
};

#endif // DIAGRAM_WINDOW_H
