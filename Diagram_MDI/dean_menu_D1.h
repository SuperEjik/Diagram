#ifndef DEAN_MENU_D1_H
#define DEAN_MENU_D1_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_D1;
}

class dean_menu_D1 : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_D1(QWidget *parent = nullptr);
    ~dean_menu_D1();

private:
    Ui::dean_menu_D1 *ui;
};

#endif // DEAN_MENU_D1_H
