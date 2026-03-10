#include"templat.hxx"
#include<cmath>

class wielomian:public templat //klasa dziedzicąca po virtualu funcki, jest to wielomian ax^3+bx^2+cx+d
{
protected:
    int a;
    int b;
    int c;
    int d;
public:
    //konstruktory
    wielomian();
    wielomian(int an, int bn, int cn, int dn, string name);

    double estimate(double  x); //l;iczy wartosc
};
