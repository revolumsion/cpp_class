#include "goodPerson.hxx"

goodPerson::goodPerson():person() //konstruktor domyślny
{
    goodDeeds = 15;
}


goodPerson::goodPerson(int gd, string n, int a):person(n, a) //konstruktor parametryczny
{
    goodDeeds = gd;
}