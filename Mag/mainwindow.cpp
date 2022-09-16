#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->showMaximized();

    file_name = "";
    last_GPS_time = "";

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
    int x_number = 0;
    int line_number = 0;
    int begin_dot_interval = -1;

    // Создаем файловый поток и связываем его с файлом
    ifstream file(file_name.toUtf8());

    if (file.is_open()) // Если открытие файла прошло успешно
    {
      while (getline(file, line))//хвост не посчитан
      {
        if(line_number == 4)//считываем пятую строку
        {
            // Создадим поток для считывания данных из строчки
            istringstream iss(line);

            // За раз всё считаем
            iss >> UTC_date >> UTC_time >> GPS_time >> mag >> Isens_mA >> signal_mV >> Ubat_mV >> Usens_mV >> nsat >> lat >> lon;

            if(last_GPS_time != "")
            {
                int hh_last = 0, mm_last = 0, ss_last = 0;
                int hh = 0, mm = 0, ss = 0;

                sscanf_s(GPS_time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
                sscanf_s(last_GPS_time.c_str(), "%d:%d:%d", &hh_last, &mm_last, &ss_last);

                if( ( (hh_last == hh || hh_last + 1 == hh || (hh_last == 23 && hh == 0))
                     && (mm_last == mm || mm_last + 1 == mm || (mm_last == 59 && mm == 0) )
                     && ((ss_last + 1) == ss || (ss_last == 59 && ss == 0))
                     && (mag_list.size() != 15)) )
                {
                    mag_list.push_back(atof(mag.c_str()));

                    if(begin_dot_interval == -1)
                    {
                        begin_dot_interval = x_number;
                        mag_dot_interval.push_back(begin_dot_interval);
                    }
                }
                else
                {
                    standardDeviation(mag_list);
                    mag_list.clear();
                    mag_list.push_back(atof(mag.c_str()));
                    begin_dot_interval = x_number;
                    mag_dot_interval.push_back(begin_dot_interval);
                }
            }

            else
            {
                begin_dot_interval = x_number;
                mag_list.push_back(atof(mag.c_str()));
                mag_dot_interval.push_back(begin_dot_interval);
            }

            y1.push_back(atof(mag.c_str()));
            x1.push_back(x_number);

            x_number++;

            last_GPS_time = GPS_time;
        }
        else
        {
            line_number++;
        }
      }

      if(mag_list.size() != 15)
      {
          standardDeviation(mag_list);
          mag_list.clear();
          //mag_dot_interval.push_back(begin_dot_interval);
      }
    }

    last_GPS_time = "";
    file.close();
    mag_list.clear();

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

void MainWindow::standardDeviation(list<double> mag_list)
{
    double sum = 0;

    int mag_int = 0;

    for (auto iter = mag_list.begin(); iter != mag_list.end(); iter++)
    {
        mag_int = (int)(*iter*1000 + 0.5);// избавляемся от мусора double

        sum = sum + mag_int;
    }

    mag_deviation_interval.push_back((sum/1000) / mag_list.size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotMousePress(QMouseEvent *event)
{
    // Определяем координату X на графике, где был произведён клик мышью
    double coordX = wGraphic->xAxis->pixelToCoord(event->pos().x());

    // По координате X клика мыши определим ближайшие координаты для трассировщика
    tracer->setGraphKey(coordX);

    ifstream in(file_name.toUtf8());

    int n = tracer->position->key() + 5; // + <номер строки, с которой начинаем читать данные>
    int coord_int = tracer->position->key();

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
    for (unsigned int i = 0; i != (mag_dot_interval.size()); i++)
    {
        if( (mag_dot_interval.at(i) <= coord_int))
        {
            mag_leg->setText(mag.c_str() + QString( " nT\n") + to_string(mag_deviation_interval.at(i)).c_str() + QString( " nT"));
        }
    }

    datetime_leg->setText(UTC_date.c_str() + QString( "\n") + GPS_time.c_str());
    volt_amp->setText(QString( "Бат. ") + Ubat_mV.c_str() + QString( "В\n") +
                      QString( "Дат. ") + Usens_mV.c_str() + QString( "В\n") +
                      QString( "Сиг. ") + signal_mV.c_str() + QString( "В\n") +
                      QString( "Ток. ") + Isens_mA.c_str() + QString( "В"));

    wGraphic->replot(); // Перерисовываем содержимое полотна графика
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
    mag_leg->setPositionAlignment(Qt::AlignTop|Qt::AlignLeft);
    mag_leg->position->setType(QCPItemPosition::ptAxisRectRatio);
    mag_leg->position->setCoords(0.01, 0.01); // позиция легенды
    mag_leg->setText(QString::number(0) + " nT");
    mag_leg->setFont(QFont(font().family(), 16)); // make font a bit larger
    mag_leg->setPen(QPen(Qt::black)); // show black border around text

    //легенда в правом верхнем углу:
    datetime_leg->setPositionAlignment(Qt::AlignTop|Qt::AlignRight);
    datetime_leg->position->setType(QCPItemPosition::ptAxisRectRatio);
    datetime_leg->position->setCoords(0.99, 0.01); // позиция легенды
    datetime_leg->setText(QString::number(0) + QString( "/") + QString::number(0) + QString( "/") + QString::number(0) + QString( "/") + QString( "\n") + QString::number(0) + QString( ":") + QString::number(0) + QString( ":") + QString::number(0));
    datetime_leg->setFont(QFont(font().family(), 16)); // make font a bit larger
    datetime_leg->setPen(QPen(Qt::black)); // show black border around text

    //легенда в левом нижнем углу:
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
    prompt->setPositionAlignment(Qt::AlignBottom|Qt::AlignRight);
    prompt->position->setType(QCPItemPosition::ptAxisRectRatio);
    prompt->position->setCoords(0.99, 0.99); // позиция легенды
    prompt->setText("ЛКМ - перемещение графика\n ПКМ - перемещение трасировщика\n СКМ - зум");
    prompt->setFont(QFont(font().family(), 16)); // make font a bit larger
    prompt->setPen(QPen(Qt::black)); // show black border around text
}

void MainWindow::on_action_open_triggered()
{
    // Диалоговое окно открытия файла
    file_name = QFileDialog::getOpenFileName(this, "Выберите файл", QDir::currentPath());

    mag_dot_interval.clear();
    mag_deviation_interval.clear();
    mag_list.clear();

    // Рисуем график
    bildChart(file_name);
}

