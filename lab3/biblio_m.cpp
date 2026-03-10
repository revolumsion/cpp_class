#include "biblio.hpp"

char choice ='k';
char is_the_end = '1'; 

biblioteka biblio;

int main()
{
    
    
    while(is_the_end !='0')
    {
        //menu
        cout<<"co chcesz zrobić?"<< endl;
        cout<<"1. Dodaj ksiazke"<< endl;
        cout<<"2. Dodaj osobe"<< endl;
        cout<<"3. Wypisac ksiazki"<< endl;
        cout<<"4. Wypisac wypozyczone ksiazki"<< endl;
        cout<<"5. Wypisanie wszystkich osob"<< endl;
        cout<<"6. Wypozyczenie ksiazki (po id)"<< endl;
        cout<<"7. Zwrocenie ksiazki (po id)"<< endl;
        cin >> choice;

        
        switch(choice)
        {
            case '1': 
                biblio = AddMyBook(biblio);
                break;
            
             case '2': 
                biblio = AddMyPerson(biblio);
                break;

             case '3': 
                ShowAllBooks(biblio);
                break;

             case '4': 
                showOutBooks(biblio);
                break;

             case '5': 
                showAllPersons(biblio);
                break;

             case '6': 
                biblio = GetMyBook(biblio);
                break;
            
             case '7': 
                biblio = ReturnMyBook(biblio);
                break;
            
        
        }
        
        cout << "Czy chcesz skończyć? wspisz 0 jeśli tak" << endl; //warunek zakończenia
        cin >> is_the_end;

    }

    
    return 0;
}