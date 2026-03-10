#include"santa.hxx"


int main()
{
    child a; //wywołane domyślnie
    child b("Janek", 10, 20, 5); //z konstrukowrów parametrycznych

    santa s;
    cout<<s.isNice()<<endl; //sprawdzamy czy mikolaj jest grzeczny


    //prezenty, jedno jest grzeczne, drugie nie
    s.giveGift(a); 
    s.giveGift(b);

    return 0;
}