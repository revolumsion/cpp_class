#include "lab6.hxx"

//konstruktory do klasy konto

konto::konto() //defualt
{
    nr_konta = "123456789";
    srodki = 500;

}


konto::konto(string num, int sr)  //zwykly
{
    nr_konta = num;
    srodki = sr;
}

//konstruktory do klasy klient

klient::klient()  //defualt
{
    kont = konto();
    imie = "Jan";
    nazwisko = "Kowalski";
    wiek = 20;
}


klient::klient(konto k, string i, string n, int w) //zwykly
{
    kont = k;
    imie = i;
    nazwisko = n;
    wiek = w;

}
//fukcja wplacania i wyplacania
void klient::zmiana_stanu(int o_ile)
{   
    int stare;
    stare = kont.get_srodki();
    kont.set_srodki(stare + o_ile);
}


//zabawy pracownika
void pracownik::set_k_name(string name, klient &k)
{
    k.imie = name;
}
void pracownik::set_k_nazw(string nazw, klient &k)
{
    k.nazwisko = nazw;
}
void pracownik::set_k_wiek(int w, klient &k)
{
    k.wiek = w;
}
void pracownik::set_k_number(string num, klient &k)
{
    k.kont.set_nrkonta(num);
}
void pracownik::set_k_money(int mon, klient &k)
{
    k.kont.set_srodki(mon);
}

//funkcja przelewu
void transfer_dukatow(klient &nadawca, klient &odbiorca)
{
    cout<<"ile przelewamy?"<<endl;
    int kwota;
    cin>>kwota;
    odbiorca.zmiana_stanu(kwota);
    int temp;
    temp = kwota;
    kwota = kwota * (-1);
    nadawca.zmiana_stanu(kwota);
    
}