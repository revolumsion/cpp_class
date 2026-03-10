
#include"termometr.hxx"


double termometr::measure(double pomiar)
{
    double szum;
    szum = random_measure();
    return pomiar+szum;
}

void termometr::log(double pomiar_r, double pomiar_t)
{
  cout<<"Rzeczywista: "<<pomiar_r<<", zmierzona: "<<pomiar_t<<endl;
}


termometr::termometr()
{
    urzadzenie();
    logger();
    pomiars.push_back(ostatni_pomiar);
}