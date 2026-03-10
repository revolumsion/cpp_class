
#include"logger.hxx"



//konstruktory
logger::logger()
{
    nazwaa= "tez nie wiem";
}

logger::logger(string n)
{
    nazwaa = n;
}

//metoda wypisujaca pomiar
void logger::log(int pomiar)
{
    cout<<"POMIAR: "<< pomiar<<endl;
}