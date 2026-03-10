#include "pixel.hxx"
#include "picture.hxx"

pixel::pixel() //kopnsturktor domslny
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(0,255);

    r = dist(rng);
    g = dist(rng);
    b = dist(rng);

}

pixel:: pixel(int red, int green, int blue)
{
    r=red;
    g= green;
    b = blue;
}