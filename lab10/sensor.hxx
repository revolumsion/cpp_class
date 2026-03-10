#ifndef sensor_H
#define sensosr_H

#include"urzadzenie.hxx"
#include"logger.hxx"


class sensor:protected urzadzenie, protected logger
{

    protected:
    vector <double>pomiars;

};


#endif