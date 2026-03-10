#ifndef country_H
#define country_H

#include<iostream>
#include<vector>
#include<random>
#include <string>

using namespace std;



class country //klasa kraju
{
    int id;
    string name;
    long int population;
    long int sick;
    long int healthy;
    long int dead;
    vector<int> neighbours;

    public:
    
    //metody do programu
    double how_sick_are_we(); //zwraca procent choroby w panstwie (0-1)
    double how_dead_are_we(); //zwraca procent martwych w panstwie (0-1)


    //getters, setters
    int get_id()
    {
        return id;
    }
    vector<int> get_neighbours()
    {
        return neighbours;
    }
    string get_name()
    {
        return name;
    }
    int get_population()
    {
        return population;
    }
    int get_dead()
    {
        return dead;
    }
    int get_sick()
    {
        return sick;
    }
    int get_healthy()
    {
        return healthy;
    }
    void set_healthy(long int h)
    {
        healthy = h;
    }
    void set_sick(long int s)
    {
        sick = s;
    }
    void set_dead(long int d)
    {
        dead = d;
    }
    //konstruktory
    
    country();
    country(long int i, string n, long int p, long int s, long int d, vector<int> nei);
    
    //destruktor 
    ~country() = default;

};

float normal(double avg, double std); //rozklad normalny ktory returnuje wartosci od 0 do 1

string lower(string text_before); //funkcja zmieniajaca caly string na male litery
#endif