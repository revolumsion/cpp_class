#include "pixel.hxx"
#include "picture.hxx"

int main()
{
    picture a;
    picture b;

    cout<< howManyCommonPixels(a, b)<<endl;

    cout<< howManyCommonPixels(a, a)<<endl;

    picture c(12, 10);

     cout<< howManyCommonPixels(a, c)<<endl;


     a.setPixel(1,1, pixel(11,1,1));
     b.setPixel(1,1, pixel(11,1,1));
    cout<< howManyCommonPixels(a, b)<<endl;
    return 0;
}