#include"country.hxx"

double country::how_sick_are_we() //zwraca procent choroby w panstwie (0-1)
{
    return (double(sick))/double(population);
}

double country::how_dead_are_we() //zwraca procent martwych w panstwie (0-1)
{
    return (double(dead))/double(population);
}



country::country() //konstruktor bazowy
{
    id = 1;
    name = "Polska";
    population = 38000000;
    sick=0;
    healthy= population;
    dead=0;
    neighbours={2,3,4,5,6}; 
}
country::country(long int i, string n, long int p, long int s, long int d, vector<int> nei) //konstruktor parametryczny
{
    id = i;
    name = n;
    population = p;
    sick=s;
    healthy= population-s-d;
    dead=d;
    neighbours=nei; 
}


float normal(double avg, double std)  //rozklad normalny ktory returnuje wartosci od 0 do 1
{
    random_device dev;
    mt19937 rng(dev()); //uzywany generator
    normal_distribution<float> normal_dist(avg, std);  //jaki rozklad (normalny)
    float c;
    c = normal_dist(rng);
    while(c*c>1 or c<=0){ c=normal_dist(rng);} //w programie sa mi potrzebne wylacznie liczby dodatnie
    return c;
}

string lower(string text_before) //funkcja zmieniajaca caly string na male litery
{
    for(int i = 0; i<text_before.size(); i++)
    {
        text_before[i]=tolower(text_before[i]);
    }
    return text_before;
}