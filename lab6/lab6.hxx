#ifndef HEADER_H
#define HEADER_H

#include<iostream>

using namespace std;

class konto //klasa konto, ma nr konta, ile srodkow +get i set, konstruktory
{
    string nr_konta;
    int srodki;

    public:

    //get
    
    string get_nrkonta()
    {
        return nr_konta;
    }

    int get_srodki()
    {
        return srodki;
    }

    //set

    void set_nrkonta(string num)
    {
        nr_konta = num;
    }
    
    void set_srodki(int sr)
    {
        srodki = sr;
    }

    //deklaracje konstuktorow
    konto();
    konto(string num, int sr);
};

//forward declaration
class pracownik;

class klient //info o koncie (obiekt konto), imie, nazw, wiek, funkcja na wplacanie i wyplacanie moneyow, + konstruktory
{
    friend pracownik;
    konto kont;
    string imie;
    string nazwisko;
    int wiek;
    
    public:
    //konstruktory
    klient();
    klient(konto k, string i, string n, int w);
    //funkcje wyplacania
    void zmiana_stanu(int o_ile);
    
};

class pracownik // metody do ustawiania rzecy klientowi
{
    public:
    void set_k_name(string name, klient &k);
    void set_k_nazw(string nazw, klient &k);
    void set_k_wiek(int w, klient &k);
    void set_k_number(string num, klient &k);
    void set_k_money(int mon, klient &k);

    int get_stan_konta(klient &k)
    {
        return k.kont.get_srodki();
    }
};

void transfer_dukatow(klient &nadawca, klient &odbiorca); //funkcja przelewu

#endif