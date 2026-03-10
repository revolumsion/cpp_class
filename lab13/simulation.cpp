#include"simulation.hxx"


void doNothing(particle* p){}

void simulation::add_particle(float px, float py, float prx, float pry) //dodawanie czastki do wektora
{
    particles.push_back(makeParticle(px, py, prx, pry));
}
void simulation::updateAll(int t) //metada aktualizujaca polozenia wszhystkich czastek w wektorze
{
    for (const auto& val: particles)
    {
       val->update(t);
    }
}
