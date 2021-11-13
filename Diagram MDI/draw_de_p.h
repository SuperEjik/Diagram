#ifndef DRAW_DE_P_H
#define DRAW_DE_P_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_De_p;
}

class Draw_De_p : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_De_p(QWidget *parent = nullptr);
    ~Draw_De_p();

private:
    Ui::Draw_De_p *ui;
};

#endif // DRAW_DE_P_H
