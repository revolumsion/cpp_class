#include "lab6.hxx"


int main()
{
    klient osoba1;
    klient osoba2;
    pracownik pracownik1;
    
    cout<<"osoba 1: "<<pracownik1.get_stan_konta(osoba1)<<endl;
    cout<<"osoba 2: "<<pracownik1.get_stan_konta(osoba2)<<endl;
    cout<<endl;

    osoba1.zmiana_stanu(200); //doplaca sobie 2 stowki
    osoba2.zmiana_stanu(-200); //bierze sobie 2 stowki

    cout<<"osoba 1: "<<pracownik1.get_stan_konta(osoba1)<<endl;
    cout<<"osoba 2: "<<pracownik1.get_stan_konta(osoba2)<<endl;
    cout<<endl;

    //zmieniam sobie 2 osobe
    pracownik1.set_k_name("Ania", osoba2);
    pracownik1.set_k_nazw("Nowak", osoba2);
    pracownik1.set_k_wiek(40, osoba2);
    pracownik1.set_k_number("987654321", osoba2);
    pracownik1.set_k_money(100, osoba2); 

    cout<<"osoba 1: "<<pracownik1.get_stan_konta(osoba1)<<endl;
    cout<<"osoba 2: "<<pracownik1.get_stan_konta(osoba2)<<endl;
    cout<<endl;

    //robimy przelew
    transfer_dukatow(osoba1, osoba2);

    cout<<"osoba 1: "<<pracownik1.get_stan_konta(osoba1)<<endl;
    cout<<"osoba 2: "<<pracownik1.get_stan_konta(osoba2)<<endl;
    cout<<endl;

    return 0;
}