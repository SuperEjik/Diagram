#ifndef DRAW_DE_R_H
#define DRAW_DE_R_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_De_r;
}

class Draw_De_r : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_De_r(QWidget *parent = nullptr);
    ~Draw_De_r();

    void draw_graph(double, double);

private:
    Ui::Draw_De_r *ui;
};

#endif // DRAW_DE_R_H
