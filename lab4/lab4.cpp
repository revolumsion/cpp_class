#include "lab4.hxx"
 


//konstruktory zwykle
person::person(string imie, string nazwisko, int wiek)
 {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->wiek   = wiek;
 }

 wykladowca::wykladowca(string imie, string nazwisko, int wiek, string przedmiot):person(imie, nazwisko, wiek)
 {
    this->przedmiot = przedmiot;
 }


 student::student(string imie, string nazwisko, int wiek, int rocznik, double srednia):person(imie, nazwisko, wiek)
 {
    this->rocznik = rocznik;
    this->srednia = srednia;
 }

//konstruktory domyslone

 person::person()
 {
    imie = "Kornelia";
    nazwisko = "Lesniewska";
    wiek = 20;
    //ile_osob++;
 }

student::student()
{
    rocznik = 2025;
    srednia = 3;
    //ile_studentow++;
}

wykladowca::wykladowca()
{
    przedmiot = "Fizyka";
    //ile_wykladowcow++;
}

//metody
void person::przedstawSie()
{
    cout<<imie<<" "<<nazwisko<<" "<<wiek;
}


void student::przedstawSie()
{
    person::przedstawSie();
    cout<<rocznik<<"  "<<srednia<<endl;
}

void wykladowca::przedstawSie()
{
    person::przedstawSie();
    cout<< przedmiot<<endl;
}

//static int student::ile_studentow=0;