#ifndef INDUCTANCE_CALCULATION_H
#define INDUCTANCE_CALCULATION_H

#include <QWidget>

namespace Ui {
class Inductance_calculation;
}

class Inductance_calculation : public QWidget
{
    Q_OBJECT

public:
    explicit Inductance_calculation(QWidget *parent = nullptr);
    ~Inductance_calculation();

private slots:
    void on_Clear_calculation_clicked();

    void on_L_calculation_clicked();

private:
    Ui::Inductance_calculation *ui;
};

#endif // INDUCTANCE_CALCULATION_H
