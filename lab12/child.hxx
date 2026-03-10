#ifndef child_H
#define child_H

#include"goodPerson.hxx"
#include"badPerson.hxx"

using namespace std;


class child:public goodPerson, badPerson
{
   public:
   bool isNice(); //nadpisana do sprawdzania czyt dziecko było grzeczne

   child(); //konstruktor domyślny
   child(string n, int a, int bd, int gd); //konstruktor parametryczny


};
#endif