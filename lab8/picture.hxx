#ifndef picture_H
#define picture_H

#include"pixel.hxx"

class picture
{
    //pola stale
    const int width;
    const int height;

    pixel** pic; //tablica 2d z pixelami

    public:

    //gettery
    int getWidth()
    {
        return width;
    }

    int getHeight()
    {
        return height;
    }

    pixel getPixel(int i, int j)
    {
        return pic[i][j];
    }

    //metoda setPixel, bioraca miejsce "na obrazku" i pixel
    void setPixel(int i, int j, pixel pix)
    {
        pic[i][j]= pix;
    }

    //konstruktory
    picture(); //domyslny
    picture(int w, int h);//parametryczny
    picture(picture& other);//kopiujacy

    //destruktor
    ~picture();
};

int howManyCommonPixels(picture p1, picture p2);

#endif