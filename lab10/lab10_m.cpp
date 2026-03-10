
#include"termometr.hxx"


int main()
{
    termometr t;
    double pomiar_r;
    double pomiar_t;
    int i = 0;
    while(i<10)
    {
        pomiar_r = random_measure(25, 0.1);

        pomiar_t = t.measure(pomiar_r);

        t.log(pomiar_r, pomiar_t);

        sleep(2);

        i++;
    }



    return 0;
}