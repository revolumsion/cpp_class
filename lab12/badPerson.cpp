#include "badPerson.hxx"

badPerson::badPerson():person() //konstruktor domyślny
{
    badDeeds = 10;
}


badPerson::badPerson(int bd, string n, int a):person(n, a) //konstruktor parametryczny
{
    badDeeds = bd;
}