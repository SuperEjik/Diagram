#ifndef DEAN_FLOW_H
#define DEAN_FLOW_H

#include <QWidget>

namespace Ui {
class dean_flow;
}

class dean_flow : public QWidget
{
    Q_OBJECT

public:
    explicit dean_flow(QWidget *parent = nullptr);
    ~dean_flow();

private slots:
    void on_Clear_calculation_clicked();

    void on_flow_De_calculation_clicked();

private:
    Ui::dean_flow *ui;
};

#endif // DEAN_FLOW_H
