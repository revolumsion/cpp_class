#ifndef creature_H
#define creature_H

using namespace std;
#include<string>
#include<iostream>

class creature //klasa najbardziej pierwotna
{
    public:
    string name;
    int age;

    creature(); //konstruktor domyślny
    creature(string n, int a); //konstruktor parametryczny
};
#endif