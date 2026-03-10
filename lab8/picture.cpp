#include "pixel.hxx"
#include "picture.hxx"


picture::picture() :width(10), height(10)//konstruktor domyslny
{
    pic = new pixel* [10];
    for (int i = 0; i<10; i++)
    {
        pic[i] = new pixel[10];
        for(int j = 0; j<10; j++)
        {
            pic[i][j]= pixel();
        }
    }
}

picture::picture(int w, int h):width(w), height(h)//konstruktor parametryczny
{
    pic = new pixel* [10];
    for (int i = 0; i<w; i++)
    {
        pic[i] = new pixel[10];
        for(int j = 0; j<h; j++)
        {
            pic[i][j]= pixel();
        }
    }
}


picture::picture(picture& other):width(other.width), height(other.height)//konstruktor kopiujacy
{
    pic = new pixel* [10];
    for (int i = 0; i< other.width; i++)
    {
        pic[i] = new pixel[10];
        for(int j = 0; j<other.height; j++)
        {
            pic[i][j]= other.pic[i][j];
        }
    }
}


//destruktor
picture::~picture()
{
    delete pic;
}


int howManyCommonPixels(picture p1, picture p2)
{
    int count = 0;
    if (p1.getWidth() == p2.getWidth())
    {
        if(p1.getHeight() == p2.getHeight())
        {
            for(int i = 0; i <p1.getWidth(); i++)
            {
                for(int j = 0; j <p1.getHeight(); j++)
                {
                    if(p1.getPixel(i, j).getR() == p2.getPixel(i, j).getR())
                    {
                        if(p1.getPixel(i, j).getG() == p2.getPixel(i, j).getG())
                        {
                             if(p1.getPixel(i, j).getB() == p2.getPixel(i, j).getB())
                             {
                                count++;
                             }
                        }
                    }
                }
            }
        }
        else
        {
            cout<<"to nie pójdzie, rozne wymiary"<<endl;
        }
        
    }
    else
        {
            cout<<"to nie pójdzie, rozne wymiary"<<endl;
        }
    return count;
}