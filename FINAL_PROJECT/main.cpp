#include"game.hxx"
#include"game_p.hxx"
#include"game_b.hxx"

//CODE BY KORNELIA LEŚNIEWSKA
//PROJEKT ZALICZENIOWY Z PRZEDMIOTU JĘZYKI PROGRAMOWANIA, SEMESTR 2025Z, SEM. 3 KIERUNKU STUDIÓW FIZYKA TECHNICZNA NA POLITECHNICE WARSZAWSKIEJ

int main()
{
    

    //wybor rodzaju
    int chosen_type;
    cout<<"Jaka choroba chcesz grac?"<<endl<<"Do wyboru: "<<endl<<"1 - wirus, "<<endl<<"2 - bateria"<<endl<<"3 - pasozyt"<<endl;
    cin>>chosen_type;
    switch(chosen_type)
    {
        case 1:
        {
            game gra;
            gra.the_game();
            break;
        }
        case 2:
        {
            game_b gra;
            gra.the_game();
            break;
        }
        case 3:
        { 
            game_p gra;
            gra.the_game();
            break;
        }
        default:
        {
            cout<<"NIE WYBRALES CHOROBY, PA";
            exit(1);
        }
    }


    return 0;
}