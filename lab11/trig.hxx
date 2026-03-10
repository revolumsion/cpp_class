#include"templat.hxx"
#include<cmath>

class sine:public templat //funkcja sin(ax+b), dziedzicąca po virtualu funcki
{
private:
    int a;
    int b;

public:
    sine();
    sine(int an, int bn);
    double estimate(double  x);
};

class cose:public templat //funkcja sin(ax+b), dziedzicąca po virtualu funcki
{
private:
    int a;
    int b;
public:
    cose();
    cose(int an, int bn);
    double estimate(double  x);
};

