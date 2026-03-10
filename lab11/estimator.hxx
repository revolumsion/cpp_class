#ifndef estimator_H
#define estimator_H

#include"templat.hxx"


using namespace std;

class estimator
{
    protected:
    string nazwa;
    public: 
    
    double oblicz(templat* funkcja, double zakres1, double zakres2, int bins);  //zwraca wartosc calki na zadanym zkresie

    estimator(); //konstrukotr zeby  nie wybuchlo
};
#endif