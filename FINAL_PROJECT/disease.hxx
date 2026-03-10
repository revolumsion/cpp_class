#ifndef disease_H
#define disease_H

#include<iostream>

#include"country.hxx"




class disease //klasa która robi chorobe, virtual do nadpisywania
{
    protected:
    string name;
    float spreadability;
    float deadly;
    float ease_to_evolve;

    public:

    virtual void evolve(int& dp)=0; //virtual, nadpisywana!!, klasa do ewolucji choroby
    virtual void spread(vector<country>& neighbours, country& me, float chance1, float chance2)=0; //virtual, nadpisywana!!, klasa do rozprzestrzneiania sie choroby
    virtual void what_are_my_stats()=0; //virtual, nadpisywana!!, klasa do wypisywania parametrow choroby
    

   

};
#endif

