#include"trig.hxx"



sine::sine()
{
    a=1;
    b=0;
    nazwa= "sinus";
}

sine::sine(int an, int bn)
{
    a=an;
    b=bn;
    nazwa= "sinus";
}

double sine::estimate(double  x) //wartosc w punkcie
{
    return sin(a*x+b);
}

cose::cose()
{
    a=1;
    b=0;
    nazwa= "cosinus";
}

cose::cose(int an, int bn)
{
    a=an;
    b=bn;
    nazwa= "cosinus";
}


double cose::estimate(double x) //wartosc w punkcie
{
    return cos(a*x+b);
}