#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<vector>

using namespace std;
struct book //struktura ksiazka
{
    //id, liczbe stron, rok wydania, autor, czy_wypożyczona
    int id;
    int liczba_stron;
    int rok_wydania;
    string autor;
    bool czy_wypozyczona;
    //deklaracja konstrukorow
    book();
    book(int id, int liczba_stron, int rok_wydania, string autor, bool czy_wypozyczona);

};

struct person //struktura osoba
{
    //imie, nazwisko, wiek
    string imie;
    string nazwisko;
    int wiek;
    //deklaracja konstrukorow
    person();
    person(string imie, string nazwisko, int wiek);

};

class biblioteka //klasa biblioteka z wektorami ksiażek i sosb z klubu ksiazki
{
    //wektory z ksiazkami i czlonkami klunu
    vector <book> ksiazki;
    vector <person> klub;
    public: 
    //gettery
    book getBook(int i)
    {
        return ksiazki.at(i);
    }

    person getPerson(int i)
    {
        return klub.at(i);
    }
    
    //settery
    void setPerson(person a, int i)
    {
        klub.at(i)= a;
    }

    void setBook(book a,int i)
    {
        ksiazki.at(i)= a;
    }
    //do dodawania rzeczy
    void addBook(book b)
    {
        ksiazki.push_back(b);
    }

    void addPerson(person p)
    {
        klub.push_back(p);
    }

    //funkcje do ustalania rozmiarow wektora
    int booksize()
    {
        return ksiazki.size();
    }

    int personsize()
    {
        return klub.size();
    }


};

//deklaracje funkcji

biblioteka AddMyBook(biblioteka); //do dodawania ksiazek

biblioteka AddMyPerson(biblioteka); //do doadawania osob

void ShowAllBooks(biblioteka); //pokazuje wszystkie ksiazki

void showOutBooks(biblioteka); //pokazuje wszystkie wypozyczone ksiazki


void showAllPersons(biblioteka); //pokazuje wszystkie osoby w klubie ksiazki


biblioteka GetMyBook(biblioteka); //wypozyczanie ksiazki


biblioteka ReturnMyBook(biblioteka); //zwrot ksiazki

#endif