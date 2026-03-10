#ifndef virus_H
#define virus_H

#include<cmath>
#include"disease.hxx"

class virus:protected disease //klasa która robi konkretna chorobe
{
    public:

    //metody fabularne
    void evolve(int& dp); //metoda ewolucji choroby (poprawy statów)
    void spread(vector<country>& neighbours, country& me, float chance1, float chance2); //metoda rozprzestrzeniania sie choroby 
    void what_are_my_stats(); //wypisuje na terminalu obecne paraemtry choroby
 
   
    //getters, setters

    string get_name()
    {
        return name;
    }
    void set_name(string n)
    {
        name = n;
    }
    //constructors
    virus();
    virus(string n); //cechy startowe beda zawsze takie same ustalone na poczatki
  

    //destruktor
    ~virus()= default;


};
#endif
