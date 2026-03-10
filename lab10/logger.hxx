#ifndef logger_H
#define logger_H

#include<iostream>
using namespace std;

class logger
{
    protected:
    string nazwaa;

    public:

    //konstruktory
    logger();
    logger(string n);

    //metoda wypisujaca pomiar
    void log(int pomiar);
  
};

#endif