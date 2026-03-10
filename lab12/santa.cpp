#include"santa.hxx"


const array<string, 5> santa::gifts =  {"tablet", "lalka", "piłka", "patelnia", "samochodzik"}; //array z prezentami

bool santa::isNice() //czy mikołaj był grzeczny (TAK)
{
    return 1;
}

void santa::giveGift(child a) //dawanie prezentów
{
    if (a.isNice() ==1) //sprawdzenie czy było grzeczne
    {
        cout<<a.name<<", lat "<<a.age<<" był/a grzeczny/a i dostaje w tym roku prezent: "<<gifts[rand()% 5]<<endl;
    }
    else
    {
        cout<<a.name<<", lat "<<a.age<<" był/a niegrzeczny/a i nie dostaje w tym roku prezentu :c"<<endl;
    }
}


