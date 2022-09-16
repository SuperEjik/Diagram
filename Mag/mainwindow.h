#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
#include <QDebug>
#include <QPointer>
#include <QFileDialog>

#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void legends();
    void bildChart(QString);
    void standardDeviation(list<double>);

    string UTC_date, UTC_time, GPS_time, mag, Isens_mA, signal_mV, Ubat_mV, Usens_mV, nsat, lat, lon;
    string last_GPS_time;
    string file_name_test;
    string line;

    list<double> mag_list;
    vector<double> mag_deviation_interval;
    vector<int> mag_dot_interval;

    time_t convert_gps_time;

    QString file_name;

private:
    Ui::MainWindow *ui;

    QCustomPlot *wGraphic;      // Объявляем объект QCustomPlot
    QCPItemTracer *tracer;      // Трасировщик по точкам графика
    QCPItemText *mag_leg;           // Легенда для mag
    QCPItemText *prompt;        // Легенда для подсказок
    QCPItemText *datetime_leg;
    QCPItemText *volt_amp;

private slots:
    void slotMousePress(QMouseEvent * event);
    void slotMouseMove(QMouseEvent * event);
    void on_action_open_triggered();
};
#endif // MAINWINDOW_H
