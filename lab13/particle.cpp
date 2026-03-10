#include"particle.hxx"

particle::particle(float px, float py, float prx, float pry) //konstruktor bazowo-paramenryczny
{
    x= px;
    y= py;
    vx = prx;
    vy = pry;
}

void particle::update(int t) //metoda przymujaca czas i aktualizujaca polozenie
{
    x = x+ vx*t;
    y= y+vy*t;
}

void particle::where_am_i() //metoda wypisujaca pozycje czastki
{
    cout<< "Pozycja x: "<< x<<", Pozycja y: "<<y<<endl;
}





unique_ptr<particle> makeParticle(float px, float py, float prx, float pry)
{
    return make_unique<particle>(px, py, prx, pry);
}


