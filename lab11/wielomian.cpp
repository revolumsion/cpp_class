#include"wielomian.hxx"


wielomian::wielomian() //konstruktor domyslny
{
    a=1;
    b=1;
    c=1;
    d=1;
    nazwa = "taki sobie o";
}


wielomian::wielomian(int an, int bn, int cn, int dn, string name) //konstruktor paramentryczny
{
    a=an;
    b=bn;
    c=cn;
    d=dn;
    nazwa=name;

}

 double wielomian::estimate(double x) //wypluwa wartosc wielomianu w punkcie
 {
    return a*x*x*x + b*x*x +c*x + d;
 }