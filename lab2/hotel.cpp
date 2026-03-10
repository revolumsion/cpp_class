#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//deklaracje zmiennych
char is_the_end = '1'; //zmienna nazwana nieco myląco ;)

string imie;
string nazwisko;
int room;
char choice;
string linia;
string linia1;
// *************

int main()
{
    while(is_the_end !='0')
    {
        //menu
        cout<<"co chcesz zrobić?"<< endl;
        cout<<"1. Dodać gościa"<< endl;
        cout<<"2. Usunąć gościa"<< endl;
        cout<<"3. Wypisać wszystkich gości"<< endl;
        cout<<"4. Usunąc wszystkich gości"<< endl;
        cin >> choice;

        
        switch(choice)
        {
            case '1': //dodanie goscia
            {
                ofstream File ("hotel.txt", ios::app); //otwieramy plik
                cout << "podaj imie"<< endl;
                cin >> imie;
                cout << "podaj nazwisko"<< endl;
                cin >> nazwisko;
                cout << "podaj nr pokoju"<< endl;
                cin >> room;
                File << imie << " "<< nazwisko <<" "<< room << endl;
                File.close(); //taktyczne zamkniecie

                break;
            }
            case '2': // usuwanie goscia
            {
                ifstream File ("hotel.txt"); //otwieramy plik
                /*
                cout << "Podaj imię"<< endl;
                cin >> imie;
                cout << "podaj nazwisko"<< endl;
                cin >> nazwisko;
                cout << "podaj nr pokoju"<< endl;
                cin >> room;
                */
                int nr;
                cout << "którego gościa usuwamy?" << endl;
                cin>> nr;

                ofstream Filet("hotel1.txt", ios::app);
                int i=0;
                while (getline(File, linia))
                {
                    if (i != nr)
                    {
                        Filet << linia << endl;
                    }
                     i++;
                    
                }
                rename("hotel1.txt", "hotel.txt");
                
                File.close(); //taktyczne zamkniecie

                break;
                
            }
            case '3': //czytamy calosc
            {
                ifstream File ("hotel.txt"); //otwieramy plik
                while (getline(File, linia)) 
                {
                    cout << linia <<endl;
                }
                File.close(); //taktyczne zamkniecie

                break;
                
            }
            case '4': // PLIK OUTTTT
            {
                remove("hotel.txt");
                break;
            }
            default:
            {
                break;
            }
                
        }

        

        
        cout << "Czy chcesz skończyć? wspisz 0 jeśli tak" << endl; //warunek zakończenia
        cin >> is_the_end;

    }

    
    return 0;
}