#include "readfile.h"

ReadFile::ReadFile()
{
    setlocale(LC_ALL, "RUSSIAN"); // Чтобы русский текст поддерживался

    // Создаем файловый поток и связываем его с файлом
    ifstream file("mvs00000-36.xyz");

    if (file.is_open()) // Если открытие файла прошло успешно
    {
      while (getline(file, line))
      {

        if(line_number == 4)//считываем пятую строку
        {
            // Создадим поток для считывания данных из строчки
            istringstream iss(line);

            // За раз всё считаем
            //iss >> surname >> name >> age >> money;
            iss >> UTC_date >> UTC_time >> GPS_time >> mag >> Isens_mA >> signal_mV >> Ubat_mV >> Usens_mV >> nsat >> lat >> lon;
        }
        else
        {
            line_number++;
        }
      }
      line_number = 0;
    }
}
