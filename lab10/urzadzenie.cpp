#include"urzadzenie.hxx"


double random_measure(double mean, double stddev)
{
    random_device dev;
    mt19937 rng(dev());
    normal_distribution<double> dist(mean, stddev);
    return dist(rng);
}

urzadzenie::urzadzenie()
{
    nazwa = "Nie wiem";
    ostatni_pomiar = random_measure();
}

urzadzenie::urzadzenie(string n, double p)
{
    nazwa = n;
    ostatni_pomiar = p;
}