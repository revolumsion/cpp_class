#include"estimator.hxx"


estimator::estimator() //konstrukotr zeby  nie wybuchlo
{
    nazwa = "siema";
}


double estimator::oblicz(templat* funkcja, double zakres1=0, double zakres2=1, int bins=100) //liczy calke
 {
    double bins_size=(zakres2-zakres1)/bins; //szerokosc bina
    double wynik = 0;
    double curr_val;
    double where; 
    for (int i =0; i < bins; i++)
    {
        where = i*bins_size + bins_size/2; //w jakim punkcie licze wartosc funkcji
        curr_val = funkcja->estimate(where); //said wartosc funkcji
        wynik = wynik + curr_val; //sumowanie
    }
    return wynik/bins;
 }