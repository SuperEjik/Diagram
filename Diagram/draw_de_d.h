#ifndef DRAW_DE_D_H
#define DRAW_DE_D_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_De_D;
}

class Draw_De_D : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_De_D(QWidget *parent = nullptr);
    ~Draw_De_D();

private:
    Ui::Draw_De_D *ui;
};

#endif // DRAW_DE_D_H
