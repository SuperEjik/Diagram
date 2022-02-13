#ifndef DEAN_MENU_P_H
#define DEAN_MENU_P_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_p;
}

class dean_menu_p : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_p(QWidget *parent = nullptr);
    ~dean_menu_p();

private:
    Ui::dean_menu_p *ui;
};

#endif // DEAN_MENU_P_H
