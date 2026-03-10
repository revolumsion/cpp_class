#ifndef przeciwnik_H
#define przeciwnik_H

#include"bohater.hxx"

enum class classofe
    {
        goblin,
        ork,
        dowodca
    };

class przeciwnik
{
    public:
   int life;
   int power;
   double dodge;
    
   
    //funckcja do przypisan w zaleznosci od typu
    void what_class(classofe c);
   //deklaracja konstruktorow
    przeciwnik(); //domyslny

    przeciwnik(int c); //parametryczny

   //funkcje ataku
    void atak(bohater &enemy);

    void atak(bohater &enemy, double crit);

   //funkcja dostania obrazen
   void ouch(int how_much);
};


#endif