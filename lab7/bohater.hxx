#ifndef bohater_H
#define bohater_H

#include<iostream>
#include<random>

using namespace std;

class przeciwnik;

enum class classof
    {
        wojownik,
        lucznik,
        mag
    };
 


class bohater
{
    public:
   int life;
   int power;
   double dodge;
   string name;
    
  
    //funckcja do przypisan w zaleznosci od typu
    void what_class(classof c);
   //deklaracja konstruktorow
    bohater(); //domyslny

    bohater(int c, string n); //parametryczny

   //funkcje ataku
    void atak(przeciwnik& enemy);

    void atak(przeciwnik &enemy, double crit);

   //funkcja leczenia
    void heal_me();
   //funkcja dostania obrazen
   void ouch(int how_much);
};

#endif