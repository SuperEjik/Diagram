#include "mainwindow.h"
#include "readfile.h"
#include "ui_mainwindow.h"
#include <QApplication>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->showMaximized();

    line_number = 0;
    max_mag = 0;
    convert_mag = 0;
    i = 0;
    file_name = "";
    n = 0;

    // Инициализируем график
    wGraphic = ui->wGraphic;

    // Инициализируем трасировщик
    tracer = new QCPItemTracer(wGraphic);

    // Инициализируем легенды
    mag_leg = new QCPItemText(wGraphic);
    datetime_leg = new QCPItemText(wGraphic);
    volt_amp = new QCPItemText(wGraphic);
    prompt = new QCPItemText(wGraphic);

}

void MainWindow::bildChart(QString file_name)
{
    // Инициализируем легенды
    legends();

    // Подключаем сигналы событий мыши от полотна графика к слотам для их обработки
    connect(wGraphic, &QCustomPlot::mousePress, this, &MainWindow::slotMouseMove);
    connect(wGraphic, &QCustomPlot::mouseMove, this, &MainWindow::slotMouseMove);

    // Строим график по точкам
    QVector<double> x1, y1;

    // Создаем файловый поток и связываем его с файлом
    //ifstream file("D:\\Qt\\project\\Mag\\Mag\\" + file_name_test);
    ifstream file(file_name.toUtf8());

    if (file.is_open()) // Если открытие файла прошло успешно
    {
      while (getline(file, line))
      {
        if(line_number == 4)//считываем пятую строку
        {
            // Создадим поток для считывания данных из строчки
            istringstream iss(line);

            // За раз всё считаем
            iss >> UTC_date >> UTC_time >> GPS_time >> mag >> Isens_mA >> signal_mV >> Ubat_mV >> Usens_mV >> nsat >> lat >> lon;

            convert_mag = atof(mag.c_str());
            y1.push_back(convert_mag);
            x1.push_back(i);

            i++;
        }
        else
        {
            line_number++;
        }
      }
      line_number = 0;
      i = 0;
    }

    file.close();

    wGraphic->addGraph();
    wGraphic->graph(0)->setData(x1,y1);

    //спрятать цифры на осях
    wGraphic->xAxis->setTickLabels(false);
    //wGraphic->yAxis->setTickLabels(false);

    tracer->setGraph(wGraphic->graph(0));   // Трассировщик будет работать с графиком

    // Масштабируем график по данным
    wGraphic->rescaleAxes();

    // Отрисовываем содержимое полотна
    wGraphic->replot();

    //зум
    wGraphic->setInteraction(QCP::iRangeZoom, true);
    wGraphic->setInteraction(QCP::iRangeDrag, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotMousePress(QMouseEvent *event)
{
    // Определяем координату X на графике, где был произведён клик мышью
    //double coordX = wGraphic->xAxis->pixelToCoord(event->pos().x());
    coordX = wGraphic->xAxis->pixelToCoord(event->pos().x());

    // По координате X клика мыши определим ближайшие координаты для трассировщика
    tracer->setGraphKey(coordX);

    //ifstream in("D:\\Qt\\project\\Mag\\Mag\\" + file_name_test);
    ifstream in(file_name.toUtf8());

    //int n = tracer->position->key()+5;
    n = tracer->position->key()+5;

    string str;
    for (int i = 1; i < n; i++) // пропускаем n - 1 строки
         in.ignore(255, '\n');

    if (!in.eof()) // если не конец файла
    {
        getline(in, str); // считали нужную строку
        istringstream iss(str);
        iss >> UTC_date >> UTC_time >> GPS_time >> mag >> Isens_mA >> signal_mV >> Ubat_mV >> Usens_mV >> nsat >> lat >> lon;
    }

    in.close(); //закрыли  файл

    // Передаём данные легендам
    mag_leg->setText(mag.c_str() + QString( " nT\n"));
    datetime_leg->setText(UTC_date.c_str() + QString( "\n") + GPS_time.c_str());
    volt_amp->setText(QString( "Бат. ") + Ubat_mV.c_str() + QString( "В\n") +
                      QString( "Дат. ") + Usens_mV.c_str() + QString( "В\n") +
                      QString( "Сиг. ") + signal_mV.c_str() + QString( "В\n") +
                      QString( "Ток. ") + Isens_mA.c_str() + QString( "В"));

    wGraphic->replot(); // Перерисовываем содержимое полотна графика
    n = 0;
}

void MainWindow::slotMouseMove(QMouseEvent *event)
{
    /* Если при передвижении мыши, ей кнопки нажаты,
     * то вызываем отработку координат мыши
     * через слот клика
     * */

    if(event->buttons() & Qt::RightButton)
    {
        if(QApplication::mouseButtons())
        {
            slotMousePress(event);
        }
    }
}

void MainWindow::legends()
{
    //легенда в левом верхнем углу: mag
    //mag_leg = new QCPItemText(wGraphic);
    mag_leg->setPositionAlignment(Qt::AlignTop|Qt::AlignLeft);
    mag_leg->position->setType(QCPItemPosition::ptAxisRectRatio);
    mag_leg->position->setCoords(0.01, 0.01); // позиция легенды
    mag_leg->setText(QString::number(0) + " nT");
    mag_leg->setFont(QFont(font().family(), 16)); // make font a bit larger
    mag_leg->setPen(QPen(Qt::black)); // show black border around text

    //легенда в правом верхнем углу:
    //datetime_leg = new QCPItemText(wGraphic);
    datetime_leg->setPositionAlignment(Qt::AlignTop|Qt::AlignRight);
    datetime_leg->position->setType(QCPItemPosition::ptAxisRectRatio);
    datetime_leg->position->setCoords(0.99, 0.01); // позиция легенды
    datetime_leg->setText(QString::number(0) + QString( "/") + QString::number(0) + QString( "/") + QString::number(0) + QString( "/") + QString( "\n") + QString::number(0) + QString( ":") + QString::number(0) + QString( ":") + QString::number(0));
    datetime_leg->setFont(QFont(font().family(), 16)); // make font a bit larger
    datetime_leg->setPen(QPen(Qt::black)); // show black border around text

    //легенда в левом нижнем углу:
    //volt_amp = new QCPItemText(wGraphic);
    volt_amp->setPositionAlignment(Qt::AlignBottom|Qt::AlignLeft);
    volt_amp->position->setType(QCPItemPosition::ptAxisRectRatio);
    volt_amp->position->setCoords(0.01, 0.99); // позиция легенды
    volt_amp->setText(QString( "Бат. ") + QString::number(0) + QString( "В\n") +
                      QString( "Дат. ") + QString::number(0) + QString( "В\n") +
                      QString( "Сиг. ") + QString::number(0) + QString( "В\n") +
                      QString( "Ток. ") + QString::number(0) + QString( "В"));
    volt_amp->setFont(QFont(font().family(), 16)); // make font a bit larger
    volt_amp->setPen(QPen(Qt::black)); // show black border around text

    //легенда в правом нижнем углу:
    //prompt = new QCPItemText(wGraphic);
    prompt->setPositionAlignment(Qt::AlignBottom|Qt::AlignRight);
    prompt->position->setType(QCPItemPosition::ptAxisRectRatio);
    prompt->position->setCoords(0.99, 0.99); // позиция легенды
    prompt->setText("ЛКМ - перемещение графика\n ПКМ - перемещение трасировщика\n СКМ - зум");
    prompt->setFont(QFont(font().family(), 16)); // make font a bit larger
    prompt->setPen(QPen(Qt::black)); // show black border around text
}

void MainWindow::on_action_1_triggered()
{
    // Диалоговое окно открытия файла
    file_name = QFileDialog::getOpenFileName(this, "Выберите файл", QDir::currentPath());

    // Рисуем график
    bildChart(file_name);
}

