#ifndef particle_H
#define particle_H

using namespace std;
#include<iostream>
#include<memory>

class particle
{
    private:
    public:
    float x;
    float y;
    float vx;
    float vy;
    

    public:

    particle(float px=0, float py=0, float prx=0, float pry=0); //konstruktor bazowo- parametryczny

    particle(particle& other)=delete; //konstruktor kopiujacy,
    particle operator=(particle&other)=delete; //operator kopiowania

    particle(particle&& other)=default; //konstruktor przemieszczajacy
    particle& operator=(particle&& other)= default; //przemieszczajacy operator kopiowania

    void update(int t); //metoda przymujaca czas i aktualizujaca polozenie
    void where_am_i(); //metoda wypisujaca pozycje czastki

};

unique_ptr<particle> makeParticle(float px, float py, float prx, float pry);

#endif