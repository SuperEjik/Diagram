#ifndef DEAN_FLOW_CALCULATION_H
#define DEAN_FLOW_CALCULATION_H

#include <QWidget>

namespace Ui {
class dean_flow_calculation;
}

class dean_flow_calculation : public QWidget
{
    Q_OBJECT

public:
    explicit dean_flow_calculation(QWidget *parent = nullptr);
    ~dean_flow_calculation();

private slots:
    void on_Clear_calculation_clicked();

    void on_flow_De_calculation_clicked();

private:
    Ui::dean_flow_calculation *ui;
};

#endif // DEAN_FLOW_CALCULATION_H
