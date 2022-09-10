#ifndef READFILE_H
#define READFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class ReadFile
{
public:
    ReadFile();
    void read();
    string line;
    string UTC_date, UTC_time, GPS_time, mag, Isens_mA, signal_mV, Ubat_mV, Usens_mV, nsat, lat, lon;
    int line_number;
};

#endif // READFILE_H
