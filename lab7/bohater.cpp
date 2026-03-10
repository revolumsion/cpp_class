#include "bohater.hxx"
#include "przeciwnik.hxx"

    //funckcja do przypisan w zaleznosci od typu
    void bohater::what_class(classof c)
    {
        switch(c)
        {
            case classof::wojownik:
            {
                life = 100;
                power = 10;
                dodge = 0.5;
                break;
            }
            case  classof::lucznik:
            {
                life = 50;
                power = 10;
                dodge = 0.7;
                break;
            }
            case  classof::mag:
            {
                life = 50;
                power = 30;
                dodge = 0.2;
                break;
            }
        }


    }


   //deklaracja konstruktorow
    bohater::bohater() //domyslny
    {
        what_class(classof(2));
        name = "Aine";
        
    }

    bohater::bohater(int c, string n) //parametryczny
    {
        what_class(classof(c));
        name = n;
    }

   //funkcje ataku
    void bohater::atak(przeciwnik &enemy)
    {
        //marsenne twister
        random_device dev;
        mt19937 rng(dev());
        uniform_int_distribution<mt19937::result_type> dist(0,9);

        double do_they_dodge = (double)(dist(rng)/10);
        double do_we_crit = (double)(dist(rng)/10);

        cout<<dist(rng)/10<<endl;
        if (enemy.dodge <= do_they_dodge)
        {
            if (do_we_crit >= 0.8)
            {
                cout<<"CRIT!!!!"<<endl;
                atak(enemy, 2);
            }

            else
            {
                cout<<"Bohater uderzył!"<<endl;
                enemy.ouch(power);
            }
        }
        else
        {
            cout<<"Bohater uchył sie"<<endl;
        }
       
    }

    void bohater::atak(przeciwnik &enemy, double crit=2)
    {
        enemy.ouch(power*crit);
    }

   //funkcja leczenia
    void bohater::heal_me()
    {
        life = life+10;
    }
   //funkcja dostania obrazen
   void bohater::ouch(int how_much)
   {
        life = life - how_much;
        cout<<"Bohater dostał! Zabrano mu HP "<< how_much<<endl;
   }