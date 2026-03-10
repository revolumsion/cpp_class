#ifndef goodPerson_H
#define goodPerson_H

#include"person.hxx"

using namespace std;


class goodPerson:public virtual person //dziedziczenie wirtualne
{
   public:
   int goodDeeds;

   
   goodPerson(); //konstruktor domyślny
   goodPerson(int gd, string n, int a); //konstruktor parametryczny

};
#endif