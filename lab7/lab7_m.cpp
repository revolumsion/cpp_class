#include "bohater.hxx"
#include "przeciwnik.hxx"


int main()
{
    bohater hero;
    przeciwnik enemy;

    while(hero.life>0 && enemy.life>0)
    {
        cout<<"atak bohatera"<<endl;
        hero.atak(enemy);
        cout<<"atak przeciwnika"<<endl;
        enemy.atak(hero);
    }
    if (hero.life<=0)
    {
        cout<<"Bohater przegrał!"<<endl;
    }
    else
    {
        cout<<"Bohater wygrał!"<<endl;
    }





    return 0;
}