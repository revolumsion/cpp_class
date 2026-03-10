#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<random>


using namespace std;


class  macierz
{
    int* mac; //deklaracja macierzy
    int columns;
    int rows;

    public:
    static int count; //liczy macierze

    //deklaracja konstrukorow
    macierz(); //domyslny
    macierz(int n, int k); //macierz nxk, k domysnie 3

    //deklaracja destruktora

    ~macierz();

    int findIndex(int i, int j); //znajduje index

    //gettery
    int getWart(int i, int j)
    {
        int index = findIndex(i,j);
        return(mac[index]);
    }
    //settery
    void setWart(int wartosc, int i, int j)
    {
        int index = findIndex(i,j);
        mac[index]=wartosc;
    }

    //fukcja wypisz, wypisuje macierz na terminalu
    void wypisz();
    //metoda dodaj, bierze macierz i ją dorzuca do naszej macierzy
    void dodaj(macierz &do_dodania);
};


#endif