#ifndef HEADER_H
#define HEADER_H

#include<iostream>


using namespace std;


class person //struktura osoba
{
    //imie, nazwisko, wiek
    string imie;
    string nazwisko;
    int wiek;

    public:

    //gettery
    string getName()
    {
        return imie;
    }

    string getSurname()
    {
        return nazwisko;
    }
    int getAge()
    {
        return wiek;
    }
    //settery
    void setName(string im)
    {
        imie = im; 
    }
       
    void setSurname(string naz)
    {
        nazwisko =  naz;
    }
    
    void setAge(int w)
    {
        wiek = w;
    }   

    //deklaracja konstrukorow
    person();
    person(string imie, string nazwisko, int wiek);

    //pole statyczne
    static int ile_osob;

    void przedstawSie();

};

class student:protected person
{
    int rocznik;
    double srednia;
    public:

    //gettery
    int getRocznik()
    {
        return rocznik;
    }

    double getSrednia()
    {
        return srednia;
    }
    //settery

    void setRocznik(int r)
    {
        rocznik = r;
    }
    
    void setSrednia(double s)
    {
        srednia = s;
    }   
    //deklaracja konstrukorow
    student();
    student(string imie, string nazwisko, int wiek, int rocznik, double srednia);

    //pole statyczne
    static int ile_studentow;

    //metoda
    void przedstawSie();

};


class wykladowca:protected person
{
    string przedmiot;
    public:

    //gettery
    string getPrzedmiot()
    {
        return przedmiot;
    }
    //settery

    void setPrzedmiot(string p)
    {
        przedmiot =  p;
    }
    
    
    //deklaracja konstrukorow
    wykladowca();
    wykladowca(string imie, string nazwisko, int wiek, string przedmiot);

    //pole statyczne
    static int ile_wykladowcow;

    //metoda
    void przedstawSie();

};


#endif