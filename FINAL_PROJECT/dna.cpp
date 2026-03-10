#include"dna.hxx"


//metody do programu
void dna::add_dna(int how_much)
{
    dna_points = dna_points+how_much;
}

void dna::show_dna()
{
    cout<<"Aktualna liczba punktow DNA to: "<< floor(dna_points)<<endl;
}

//konstruktory
dna::dna()
{
    dna_points = 0;
}
dna::dna(int dp)
{
    dna_points = dp;
}
dna::dna(dna &other)
{
    dna_points = other.dna_points;
}

//destruktor 
dna::~dna()
{
    
}