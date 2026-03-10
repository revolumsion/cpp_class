#ifndef santa_H
#define santa_H

#include"child.hxx"
#include<array>

using namespace std;


class santa
{
    public:
    const static array<string, 5> gifts; //array z prezentami

    void giveGift(child a); //dawanie prezentów
    bool isNice(); //czy mikołaj był grzeczny (TAK)

};




#endif


