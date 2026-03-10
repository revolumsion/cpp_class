#ifndef game_p_H
#define game_p_H

#include<cstdlib>
#include<unistd.h>
#include <iomanip>

#include"parasite.hxx"
#include"dna.hxx"



class game_p //klasa która operuje całą grą
{
    vector<country> all_countries;
    parasite my_disease;
    dna my_dna;

    public: 

    void init(); //tworzy mape i chorobe of choice

    void user_turn(); //tura gracza i rzeczy ktore on moze zrobic

    void game_turn(); //rzeczy ktore sie dzieja behind the scenes, poza kontrola gracza

    void game_current_state(); //informacje o obecnym przebiegu gry 

    bool is_this_the_end(); //sprawdza czy gra sie skonczyla, jesli tak, z jakim rezultatem
    
    void the_game(); //trwanie gry

    //construvotr
    game_p();
    game_p(vector<country> v, parasite md, dna d);

};


#endif