#ifndef DEAN_MENU_D_H
#define DEAN_MENU_D_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_D;
}

class dean_menu_D : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_D(QWidget *parent = nullptr);
    ~dean_menu_D();

private:
    Ui::dean_menu_D *ui;
};

#endif // DEAN_MENU_D_H
