#ifndef pixel_H
#define pixel_H

#include<iostream>
#include<random>

using namespace std;

class pixel
{
    int r;
    int g;
    int b;

    public:

    //gettery
    int getR()
    {
        return r;
    }

    int getG()
    {
        return g;
    }

    int getB()
    {
        return b;
    }

    //settery

    void setR(int red)
    {
        r = red;
    }

    void setG(int green)
    {
        g = green;
    }

    void setB(int blue)
    {
        b = blue;
    }

    //konstruktory
    pixel(); //domyslny, z losowymi wartościami
    pixel(int red, int green, int blue); //parametryczny
};

#endif