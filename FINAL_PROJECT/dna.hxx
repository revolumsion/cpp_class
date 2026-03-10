#ifndef dna_H
#define dna_H

#include<iostream>
#include <cmath>

using namespace std;


class dna //klasa która operuje całą grą
{
    float dna_points;

    public:

    //getters, setters
    int get_dna()
    {
        return(dna_points);
    }

    void set_dna(int new_dna_amount)
    {
        dna_points = new_dna_amount;
    }

    //metody do programu
    void add_dna(int how_much);
    void show_dna();

    //konstruktory
    dna();
    dna(int dp);
    dna(dna &other);

    //destruktor 
    ~dna();


};
#endif