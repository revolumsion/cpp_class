#ifndef badPerson_H
#define badPerson_H

#include"person.hxx"

using namespace std;


class badPerson:public virtual person //dziedziczenie wirtualne
{
   public:
   int badDeeds;

   badPerson(); //konstruktor domyślny
   badPerson(int bd, string n, int a); //konstruktor parametryczny

};
#endif