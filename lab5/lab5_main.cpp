#include "lab5.hxx"

int main()
{
    macierz a;
    macierz b;

    cout<<macierz::count<<endl;

    a.wypisz();
    b.wypisz();

    macierz c(2,5);
    c.wypisz();
    cout<<macierz::count<<endl;
    
    a.dodaj(b);

    a.wypisz();
    b.wypisz();
    cout<<macierz::count<<endl;
    a.dodaj(c);

    a.wypisz();
    c.wypisz();
    cout<<macierz::count<<endl;



    return 0;
}