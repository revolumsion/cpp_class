#ifndef person_H
#define person_H

#include"creature.hxx"

using namespace std;


class person:public creature
{
    public:
    virtual bool isNice()=0; //virtual, nadpisywana!!

    person(); //konstruktor domyślny
    person(string n, int a); //konstruktor parametryczny

};
#endif