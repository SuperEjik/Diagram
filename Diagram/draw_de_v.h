#ifndef DRAW_DE_V_H
#define DRAW_DE_V_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_De_v;
}

class Draw_De_v : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_De_v(QWidget *parent = nullptr);
    ~Draw_De_v();

private:
    Ui::Draw_De_v *ui;
};

#endif // DRAW_DE_V_H
