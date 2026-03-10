#ifndef game_b_H
#define game_b_H

#include<cstdlib>
#include<unistd.h>
#include <iomanip>

#include"bacteria.hxx"
#include"dna.hxx"



class game_b //klasa która operuje całą grą
{
    vector<country> all_countries;
    bacteria my_disease;
    dna my_dna;

    public: 

    void init(); //tworzy mape i chorobe of choice

    void user_turn(); //tura gracza i rzeczy ktore on moze zrobic

    void game_turn(); //rzeczy ktore sie dzieja behind the scenes, poza kontrola gracza

    void game_current_state(); //informacje o obecnym przebiegu gry 

    bool is_this_the_end(); //sprawdza czy gra sie skonczyla, jesli tak, z jakim rezultatem
    
    void the_game(); //trwanie gry

    //construvotr
    game_b();
    game_b(vector<country> v, bacteria md, dna d);

};


#endif