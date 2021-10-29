#ifndef DEAN_MENU_H
#define DEAN_MENU_H

#include <QWidget>
#include "calculation.h"

namespace Ui {
class dean_menu;
}

class dean_menu : public QWidget
{
    Q_OBJECT

public:
    explicit dean_menu(QWidget *parent = nullptr);
    ~dean_menu();

public:
    Ui::dean_menu *ui;
    double D, nu, p, r, v, number_y;
    Calculation c;
    void value_calculate();
    void new_values();


signals:
    void signal_De_D(double, double);
    void signal_De_nu(double, double);
    void signal_De_p(double, double);
    void signal_De_r(double, double);
    void signal_De_v(double, double);
private slots:
    void on_Value_delete_clicked();
    void on_add_parametrs_to_the_corresponding_graph_Dean_clicked();
    void on_add_parametrs_to_all_graphs_Dean_clicked();
};

#endif // DEAN_MENU_H
