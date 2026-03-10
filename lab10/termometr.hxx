#ifndef termometr_H
#define termometr_H

#include"sensor.hxx"

class termometr:protected sensor
{
    public:
    double measure(double pomiar);

    void log(double pomiar_r, double pomiar_t);

    //konstruktor
    termometr();

};

#endif