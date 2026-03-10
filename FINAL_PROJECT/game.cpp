#include"game.hxx"


game::game()  //konstruktor bazowy
{
    //tworzy podstawowe, wersje do zmiany w init
    all_countries ={};
    my_disease = virus();
    my_dna =dna();
}
game::game(vector<country> v, virus md, dna d) //konstruktor parametryczny
{
    all_countries=v;
    my_disease=md;
    my_dna = d;
}

void game::init() //tworzy ustalona mape i chorobe o wybranych parametrach
{
    //tworzenie wszystkich krajow
    all_countries.push_back(country(1, "Polska", 38000000, 0, 0,{2,3,4,8,9,10}));
    all_countries.push_back(country(2, "Litwa", 3000000, 0, 0,{1, 16, 3}));
    all_countries.push_back(country(3, "Bialorus", 9000000, 0, 0,{1, 2, 4}));
    all_countries.push_back(country(4, "Ukraina", 39000000, 0, 0,{1, 3, 5, 6, 7, 8,}));
    all_countries.push_back(country(5, "Moldawia", 3000000, 0, 0,{4, 6}));
    all_countries.push_back(country(6, "Rumunia", 18000000, 0, 0,{4, 5, 17, 18, 7,}));
    all_countries.push_back(country(7, "Wegry", 10000000, 0, 0,{4, 6, 18, 20, 21, 22, 8}));
    all_countries.push_back(country(8, "Slowacja", 5000000, 0, 0,{1, 4, 7, 22, 9}));
    all_countries.push_back(country(9, "Czechy", 10000000, 0, 0,{1, 8, 10, 22}));
    all_countries.push_back(country(10, "Niemcy", 83000000, 0, 0,{1, 9, 11, 22, 23, 24, 25, 34}));
    all_countries.push_back(country(11, "Dania", 6000000, 0, 0,{10, 13}));
    all_countries.push_back(country(12, "Norwegia", 6000000, 0, 0,{13, 28, 26}));
    all_countries.push_back(country(13, "Szwecja", 10000000, 0, 0,{11, 12, 14}));
    all_countries.push_back(country(14, "Finlandia", 6000000, 0, 0,{12, 13, 15}));
    all_countries.push_back(country(15, "Estonia", 1000000, 0, 0,{14, 16}));
    all_countries.push_back(country(16, "Lotwa", 2000000, 0, 0,{2, 3, 15}));
    all_countries.push_back(country(17, "Bulgaria", 7000000, 0, 0,{6, 18, 32, 29}));
    all_countries.push_back(country(18, "Serbia", 7000000, 0, 0,{6, 7, 17, 32, 31, 19, 20}));
    all_countries.push_back(country(19, "Bosnia i Hercegowina", 3000000, 0, 0,{18, 20, 31}));
    all_countries.push_back(country(20, "Chorwacja", 4000000, 0, 0,{7, 21, 19, 18, 31}));
    all_countries.push_back(country(21, "Slowenia", 2000000, 0, 0,{7, 20, 22, 33}));
    all_countries.push_back(country(22, "Austria", 9000000, 0, 0,{7, 8, 9, 10, 23, 33, 21}));
    all_countries.push_back(country(23, "Szwajcaria", 9000000, 0, 0,{10, 22, 33, 34}));
    all_countries.push_back(country(24, "Belgia", 11000000, 0, 0,{10, 25, 26, 34}));
    all_countries.push_back(country(25, "Holandia", 18000000, 0, 0,{10, 24, 26}));
    all_countries.push_back(country(26, "Wielka Brytania", 68000000, 0, 0,{24, 25, 34, 27, 28, 12}));
    all_countries.push_back(country(27, "Irlandia", 5000000, 0, 0,{26, 28}));
    all_countries.push_back(country(28, "Islandia", 300000, 0, 0,{12, 26, 27}));
    all_countries.push_back(country(29, "Grecja", 10000000, 0, 0,{30, 32, 17}));
    all_countries.push_back(country(30, "Albania", 3000000, 0, 0,{29, 32, 31}));
    all_countries.push_back(country(31, "Czarnogora", 600000, 0, 0,{30, 18, 19, 20}));
    all_countries.push_back(country(32, "Macedonia Pln.", 2000000, 0, 0,{17, 18, 29, 30}));
    all_countries.push_back(country(33, "Wlochy", 59000000, 0, 0,{21, 22, 23, 34}));
    all_countries.push_back(country(34, "Francja", 66000000, 0, 0,{24, 10, 23, 33, 35}));
    all_countries.push_back(country(35, "Hiszpania", 47000000, 0, 0,{34, 36}));
    all_countries.push_back(country(36, "Portugalia", 10000000, 0, 0,{35}));
    
    //tworzenie choroby
    int chosen_type;
    string chosen_name;
    
    //nadanie nazwy
    cout<<"Jak nazywa sie twoja choroba? "<<endl;
    cin>>chosen_name;
    my_disease.set_name(chosen_name);
   
    //wybierz start
    cout<<"Gdzie chcesz zaczac swoja chorobe?"<<endl;
    cout<<"Do wyboru masz: "<<endl;
    for (int i=0; i<all_countries.size(); i++)
    {
        cout<<all_countries.at(i).get_name()<<endl;
        if(all_countries.at(i).get_id()%12==0) //kwestie wizualne, zeby te wszytkie panstwa nie wskakiwaly tak intensywnie na ekran
        {
            sleep(1);
        }
    }

    string country_choice;
    cout<<"Gdzie zaczynasz? Wpisz nazwe:"<<endl;
    cin>>country_choice;

    for (int i=0; i<all_countries.size(); i++)
    {
        if(lower(country_choice)==lower(all_countries.at(i).get_name()))
        {
            all_countries.at(i).set_sick(1000);
            all_countries.at(i).set_healthy(all_countries.at(i).get_population()-all_countries.at(i).get_dead()-all_countries.at(i).get_sick());
        }
    }

} 

void game::user_turn() //tura gracza i rzeczy ktore on moze zrobic
{
    string player_choice ="1";

    while(player_choice == "1" || player_choice == "2")
    {
    cout<<"Twoja tura! Mozesz wyewoluowac swoja chorobe uzywajac punktow DNA, podejrzec informacje o danym panstwie lub przejsc do nasepnej tury"<<endl;
    cout<<"By ewoluowac wpisz 1"<<endl;
    cout<<"By podejrzec info o twoim wirusie wcisnij 2"<<endl;
    cout<<"By przejsc do nastepnej tury, wcisnij dowolny inny klawisz"<<endl;
    cin>>player_choice;
    if(player_choice == "1")
    {
        int dp;
        dp = my_dna.get_dna();
        my_disease.evolve(dp);
        my_dna.set_dna(dp);

    }
    if(player_choice == "2")
    {
        my_disease.what_are_my_stats();
    }
    
    if (player_choice != "1" && player_choice != "2") 
    {
        if (player_choice=="allsick") //CHEAT CODE - robi ze wszystkie panstwa sa blisko calosciowego zarazenia
        {
            for (auto& val: all_countries)
            {
                val.set_sick(0.9*val.get_population());
                val.set_healthy(0.1*val.get_population());
            }
        }
        if (player_choice=="endgame") //CHEAT CODE - wszystkie panstwa sa prawie martwe
        {
            for (auto& val: all_countries)
            {
                val.set_dead(0.95*val.get_population());
                val.set_sick(1-val.get_dead());
                val.set_healthy(0);
            }
        }
        if (player_choice=="fail") //CHEAT CODE - wszystkie panstwa sa prawie martwe, jednak pozostaje troche zdrowych
        {
            for (auto& val: all_countries)
            {
                val.set_dead(0.9*val.get_population());
                val.set_sick(1000);
                val.set_healthy(val.get_population()-val.get_dead()-val.get_sick());
            }
        }
        break; 
    }
    }
}

void game::game_turn() //rzeczy ktore sie dzieja behind the scenes, poza kontrola gracza
{
    //adds the right amounts of sick, dead; adds dna; displays everything prettily
    //spreading the disease
    for(int i=0; i<all_countries.size(); i++)
    {
        //changing the vector with ids to a vector with countries
        
        vector<country> new_neighbours={};
        int ide;
        for(int idc=0;idc<all_countries.at(i).get_neighbours().size();idc++)
        {
            ide = all_countries.at(i).get_neighbours().at(idc);
            new_neighbours.push_back(all_countries.at(ide-1));
        }
        

        //spread for everyone
        my_disease.spread(new_neighbours, all_countries.at(i), normal(0, 1), normal(0, 1));
    }
    
    //liczenie ile dna dodajemy: sprawdzamy "chore" panstwa, dodajemy ich how_sick_are_we results i mnozymy to razy liczbe od 0 do 1 wylosowana, to dodajemy do ilosci
    float total_sick;
    for(auto& country:all_countries)
    {
        total_sick = total_sick + country.how_sick_are_we();
    }

    float mnoznik;
    
    mnoznik =normal(0, 1);
    

    my_dna.add_dna(ceil(total_sick*mnoznik/10));

    //pokazywanie aktualnego stanu choroby
    game_current_state();
}

bool game::is_this_the_end() //sprawdza czy gra sie skonczyla, jesli tak, z jakim rezultatem
{
    //sprawdzenie warunkow wygranej/przegranej
    //sprawdzenie, czy nie ma ludzi chorych (warunek przegranej) (nie moze nastapic na poczatku bo zawsze jest conajmniej 1 chora osoba)
    int countries_no_sick = 0;
    for (int i=0; i<all_countries.size(); i++)
    {
        if (all_countries[i].get_sick()==0)
        {
            countries_no_sick++;
        }
    }
    if (countries_no_sick == all_countries.size())
    {
        cout<<"KONIEC GRY!!! PRZEGRANA!!!!"<<endl;
        return 1;
    }
    //sprawdzenie czy wszyscy umarli(nie ma zdrowych ani chorych) (warunek wygranej)
    int count_of_all_dead_countries=0;
    for (int i=0; i<all_countries.size(); i++)
    {
        if (all_countries.at(i).get_population()==all_countries.at(i).get_dead())
        {
            count_of_all_dead_countries=count_of_all_dead_countries+1;
        }
    }
    if (count_of_all_dead_countries ==all_countries.size())
    {
        cout<<"KONIEC GRY!!! WYGRANA!!!!"<<endl;
        return 1;
    }

    return 0; //gra toczy sie dalej
}

void game::the_game() //trwanie gry

{
    init();
    while (is_this_the_end() == 0)
    {
        
        user_turn();
        game_turn();
    }
}

void game::game_current_state() //informacje o obecnym przebiegu gry 
{
    
    for(auto& val: all_countries)
    {
        cout<<setw(20)<<val.get_name()<< "    "; //nazwa kraju + troche miejsca
        int dead_per = ceil(val.how_dead_are_we()*20); 
        int sick_per = ceil(val.how_sick_are_we()*20); 
        int healthy_per = 20 - dead_per - sick_per;

        //printowanie paska
        cout<<"\033[34m"<<setw(9)<<val.get_healthy()<<"  "; //wartosc liczbowa ludzi zdrowych
        cout<<"\033[0m";
        for(int i = 0; i<healthy_per;i++)
        {
           cout<<"\033[44m"<<"  ";
           cout<<"\033[0m";
        }
        for(int i = 0; i<sick_per;i++)
        {
            cout<<"\033[41m"<<"\033[31m"<<"  ";
            cout<<"\033[0m";
        }
        for(int i = 0; i<dead_per;i++)
        {
            cout<<"\033[43m"<<"  ";
            cout<<"\033[0m";
        }

        cout<<"\033[0m";
        cout<<"  "<<"\033[31m"<<setw(9)<<val.get_sick()<<"  "<<"\033[33m"<<setw(9)<<val.get_dead()<<endl;
        cout<<"\033[0m";
        if(val.get_id()%12==0)
        {
            sleep(1);
        }
        
    }

    //obecna ilosc punktow dna
    my_dna.show_dna();
    
}




