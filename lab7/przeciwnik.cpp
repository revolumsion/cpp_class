
#include "przeciwnik.hxx"

 //funckcja do przypisan w zaleznosci od typu
    void przeciwnik::what_class(classofe c)
    {
        switch(c)
        {
            case classofe::goblin:
            {
                life = 100;
                power = 10;
                dodge = 0.5;
                break;
            }
            case  classofe::ork:
            {
                life = 50;
                power = 10;
                dodge = 0.1;
                break;
            }
            case  classofe::dowodca:
            {
                life = 50;
                power = 30;
                dodge = 0.1;
                break;
            }
        }


    }


   //deklaracja konstruktorow
    przeciwnik::przeciwnik() //domyslny
    {
        what_class(classofe(2));

        
    }

    przeciwnik::przeciwnik(int c) //parametryczny
    {
        what_class(classofe(c));
    }

   //funkcje ataku
    void przeciwnik::atak(bohater &enemy)
    {
        //marsenne twister
        random_device dev;
        mt19937 rng(dev());
        uniform_int_distribution<mt19937::result_type> dist(0,9);

        //losowanie zmiennych
        double do_they_dodge = dist(rng)/10;
        double do_we_crit = dist(rng)/10;

        if (enemy.dodge <= do_they_dodge)
        {
            if (do_we_crit >= 0.8)
            {
                cout<<"CRIT!!!!"<<endl;
                atak(enemy, 2);
            }

            else
            {
                cout<<"Przeciwnik uderzył!"<<endl;
                enemy.ouch(power);
            }
        }
        else
        {
            cout<<"przeciwnik uchył sie"<<endl;
        }
       
    }

    void przeciwnik::atak(bohater &enemy, double crit=1.5)
    {
        enemy.ouch(power*crit);
    }


   //funkcja dostania obrazen

   void przeciwnik::ouch(int how_much)
    {
        life = life - how_much;
        cout<<"Przeciwnik dostał! Zabrano mu HP "<< how_much<<endl;
    }