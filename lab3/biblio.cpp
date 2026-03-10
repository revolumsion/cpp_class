#include "biblio.hpp"

person::person() //konstruktor domyslny
{
    imie = "Kornelia";
    nazwisko = "Lesniewska";
    wiek = 20;
};

person::person(string i, string n, int w) //konstruktor zwykly
{
    imie = i;
    nazwisko = n;
    wiek = w;
};

book::book() //konstruktor domyslny
{
    id = 0;
    liczba_stron = 100;
    rok_wydania = 1900;
    autor = "Unknown";
    czy_wypozyczona = false;

};

book::book(int d, int ls, int rw, string au, bool wyp) //konstruktor zwykly
{
   id = d;
   liczba_stron = ls;
   rok_wydania = rw;
   autor = au;
   czy_wypozyczona = wyp;

};


//deklaracje funkcji z zadania


void ShowAllBooks(biblioteka biblio) //pokazuje wszystkie ksiazki
{
    for (int i=0; i<biblio.booksize();i++)
    {
        book temp;
        temp = biblio.getBook(i);
        cout<<temp.id<<" "<<temp.liczba_stron<<" "<<temp.rok_wydania <<" "<< temp.autor<<" "<<temp.czy_wypozyczona<<endl;
    }
}


biblioteka AddMyBook(biblioteka biblio) //dodawanie ksiazek
{
    book temp;
    cout<<"podaj id"<<endl;
    cin>>temp.id;
    cout<<"podaj liczbe stron"<<endl;
    cin>>temp.liczba_stron;
    cout<<"podaj rok wydania"<<endl;
    cin>>temp.rok_wydania;
    cout<<"podaj autora"<<endl;
    cin>>temp.autor;
    cout<<"podaj czy wyporzyczona (0 lub 1)"<<endl;
    cin>>temp.czy_wypozyczona;
    biblio.addBook(temp);
    return biblio;
}

biblioteka AddMyPerson(biblioteka biblio) //dodawanie osob
{
    person temp1;
    cout<<"Podaj imie"<<endl;
    cin>>temp1.imie;
    cout<<"Podaj nazwisko"<<endl;
    cin>>temp1.nazwisko;
    cout<<"Podaj wiek"<<endl;
    cin>>temp1.wiek;
    biblio.addPerson(temp1);
    return biblio;
}

void showOutBooks(biblioteka biblio) //pokazuje wszystkie wypozyczone ksiazki
{
 for (int i=0; i<biblio.booksize();i++)
    {
        book temp;
        temp = biblio.getBook(i);
            if (temp.czy_wypozyczona == 1) //sprawdzanie czy wypozyczona
            {
                 cout<<temp.id<<" "<<temp.liczba_stron<<" "<<temp.rok_wydania <<" "<< temp.autor<<" "<<temp.czy_wypozyczona<<endl;
            }
           
    }
}

void showAllPersons(biblioteka biblio) //pokazuje wszystkie osoby w klubie ksiazki
{
    for (int i=0; i<biblio.personsize();i++)
    {
        person temp;
        temp = biblio.getPerson(i);
        cout<<temp.imie<<"  "<<temp.nazwisko<<" "<<temp.wiek<<endl;
    }
}

biblioteka GetMyBook(biblioteka biblio) //wypozyczanie ksiazki
{
    int chce;
    cout<<"Jakie id chcesz wypozyczyc?"<<endl;
    cin>>chce;
    bool exists = 0;
    for (int i=0; i<biblio.booksize();i++)
    {
        book temp;
        temp = biblio.getBook(i);
        if (temp.id == chce) //szuka odpowiedniej ksiazki
        {
            temp.czy_wypozyczona=1; //zmienia status
            exists = 1;
            biblio.setBook(temp, i); //podmienia ksiazke w bibliotece
            return biblio;
        }
    }
    if (exists == 0)
    {
        cout<<"Ta ksiazka nie istnieje"<<endl;
    }
   return biblio;
}

biblioteka ReturnMyBook(biblioteka biblio) //zwrot ksiazki
{
    int chce;
    cout<<"Jakie id chcesz zwrocic?"<<endl;
    cin>>chce;
    bool exists = 0;
    for (int i=0; i<biblio.booksize();i++)
    {
        book temp;
        temp = biblio.getBook(i);
        if (temp.id = i)
        {
            exists = 1;
            temp.czy_wypozyczona=0; //zmienia status
            biblio.setBook(temp, i); //podmienia ksiazke w bibliotece
        }
    }
    if (exists = 0)
    {
        cout<<"Ta ksiazka nie istnieje"<<endl;
    }
    return biblio;
}

