#ifndef urzadzenie_H
#define urzadzenie_H

#include<iostream>
#include<random>
#include<vector>
#include<unistd.h>

using namespace std;

class urzadzenie
{
    protected:
    string nazwa;
    double ostatni_pomiar;

    public:

/*
    //gettery
    string getNazwa()
    {
        return nazwa;
    }
    int getPomiar()
    {
        return ostatni_pomiar;
    }


    //settery

    void setNazwa(string value)  
    {
        nazwa = value; 
    }

    void setPomiar(int value)  
    {
        ostatni_pomiar = value; 
    }

*/
   
    //konstruktory
    urzadzenie(); //domyslny, z losowymi wartościami
    urzadzenie(string n, double p); //parametryczny

    //metoda przypisująca wartosc ostatniemu parametrowi (setter 2.0)
    void measure(double pomiar) 
    {
        ostatni_pomiar = pomiar;
    }

};

double random_measure(double mean=0, double stddev =0.1);

#endif