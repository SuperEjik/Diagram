#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcustomplot.h>
#include <QDebug>
#include <QPointer>
#include <QFileDialog>

#include "readfile.h"

#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//class ReadFile;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void legends();
    /*void bildChart(string, string, string, string, string, string, string, string, string, string, string);
    void bildChart();*/
    void bildChart(QString);
    string UTC_date, UTC_time, GPS_time, mag, Isens_mA, signal_mV, Ubat_mV, Usens_mV, nsat, lat, lon;
    int line_number;
    string line;
    int i;
    int n;
    double max_mag;
    double convert_mag;
    double coordX;
    time_t convert_gps_time;
    string file_name_test;
    QString file_name;

private:
    Ui::MainWindow *ui;
    QCustomPlot *wGraphic;      // Объявляем объект QCustomPlot
    QCPItemTracer *tracer;      // Трасировщик по точкам графика
    QCPItemText *mag_leg;           // Легенда для mag
    QCPItemText *prompt;        // Легенда для подсказок
    QCPItemText *datetime_leg;
    QCPItemText *volt_amp;
    //QPointer<ReadFile> read;

private slots:
    void slotMousePress(QMouseEvent * event);
    void slotMouseMove(QMouseEvent * event);
    void on_action_1_triggered();
};
#endif // MAINWINDOW_H
