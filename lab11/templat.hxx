#ifndef template_H
#define template_H

#include<iostream>


using namespace std;


//deklaracja funkcji templatkowej, popwinna sie nazywac funckja ale nie umiem czytac ze zrozumieniem
class templat
{
    public:
    string nazwa;
    
    virtual double estimate(double x)=0; //virtual, nadpisywana!!

};
#endif