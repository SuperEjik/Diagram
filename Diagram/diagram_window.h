#ifndef DIAGRAM_WINDOW_H
#define DIAGRAM_WINDOW_H

#include <QWidget>
#include <QVector>

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

private:
    Ui::diagram_window *ui;
};

#endif // DIAGRAM_WINDOW_H
