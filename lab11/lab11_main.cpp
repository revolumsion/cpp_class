#include"templat.hxx"
#include"estimator.hxx"
#include"trig.hxx"
#include"wielomian.hxx"

int main()
{
    //deklaracja funcki
    wielomian w;
    sine sinus;
    cose cosinus;
    estimator e;

    double result;
    //liczenie po nich całek
    result = e.oblicz(&w, 0, 1, 100);
    cout<<"wielomian: "<< result<<endl;

    result = e.oblicz(&sinus, 0, 2*M_PI, 100);
    cout<<"sinus: "<< result<<endl;

    result = e.oblicz(&cosinus, 0, 2*M_PI, 100);
    cout<<"cosinus: "<< result<<endl;



    
    return 0;
}