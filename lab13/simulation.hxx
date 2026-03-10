#ifndef simulation_H
#define simulation_H

#include"particle.hxx"

#include<vector>

void doNothing(particle* p);

class simulation
{
    private:
    vector<unique_ptr<particle>> particles;

    public:

    void add_particle(float px, float py, float prx, float pry); //dodawanie czastki do wektora
    void updateAll(int t); //metada aktualizujaca polozenia wszhystkich czastek w wektorze

    //gettery
    
   vector<unique_ptr<particle>>& getParticles()
{
        return particles;
    }



    vector<shared_ptr<particle>> getParticlesShared()
    {   
        vector<shared_ptr<particle>> s;
        shared_ptr<particle> temp;
        for (const auto& val: particles)
        {
            temp = shared_ptr<particle> (val.get(), doNothing);
            s.push_back(temp);
        }  
        return s;
    }

};  


#endif