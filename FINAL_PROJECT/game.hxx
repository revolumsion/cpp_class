#ifndef game_H
#define game_H

#include<cstdlib>
#include<unistd.h>
#include <iomanip>

#include"virus.hxx"
#include"dna.hxx"



class game //klasa która operuje całą grą
{
    vector<country> all_countries;
    virus my_disease;
    dna my_dna;

    public: 

    void init(); //tworzy mape i chorobe of choice

    void user_turn(); //tura gracza i rzeczy ktore on moze zrobic

    void game_turn(); //rzeczy ktore sie dzieja behind the scenes, poza kontrola gracza

    void game_current_state(); //informacje o obecnym przebiegu gry 

    bool is_this_the_end(); //sprawdza czy gra sie skonczyla, jesli tak, z jakim rezultatem
    
    void the_game(); //trwanie gry

    //construvotr
    game();
    game(vector<country> v, virus md, dna d);

};


#endif