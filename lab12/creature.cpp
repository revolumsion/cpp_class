#include"creature.hxx"

creature::creature() //konstruktor domyślny
{
    name = "Ania";
    age = 12;
}


creature::creature(string n, int a) //konstruktor parametyryczny
{
    name = n;
    age = a;

}