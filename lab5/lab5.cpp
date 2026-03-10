#include "lab5.hxx"

int macierz::count = 0;

int macierz::findIndex(int i, int j)
{
    i--;
    j--;

    return i*rows +j;
}

macierz::macierz() //konstruktor domyslny
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(0,9);

    mac = new int[9];
    rows = 3;
    columns = 3;
    for(int i=0; i <=8; i++)
    {
        mac[i]= dist(rng);
    }
    count++;
}


macierz::macierz(int n, int k=3) //konstruktor parametryczny
{

    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(0,9);
    int size = n*k;
    mac = new int[size];
    rows = n;
    columns = k;
    for(int i =0; i<size; i++)
    {
        mac[i]= dist(rng);
    }

    count++;
}

macierz::~macierz()
{
    count--;
    delete mac;
}

void macierz::wypisz()
{
    for(int i=0; i<rows; i++) //iteruje rzdki
    {
        for(int j=0; j<columns; j++)
        {
            cout<<mac[i*rows + j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//metoda dodaj, bierze macierz i ją dorzuca do naszej macierzy
void macierz::dodaj(macierz &do_dodania)
{
    int* temp1 = mac;
    if (columns== do_dodania.columns)
    {
        if(rows == do_dodania.rows)
        {
            for(int i =0; i<rows*columns;i++)
            {
                mac[i] = temp1[i]+do_dodania.mac[i];
            }
        }
    }
}


