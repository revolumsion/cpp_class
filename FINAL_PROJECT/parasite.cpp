#include"parasite.hxx"

 //metody fabularne
    void parasite::evolve(int& dp) //metoda ewolucji choroby (poprawy statów)
    {
        char choice;
        float available_space = 1;
        cout<<"Który atrybut twojej choroby chcesz ewoluować?"<<endl<<"Masz do wyboru: "<<endl;
        cout<<"1 - Rozprzestrzenianie sie"<<endl<<"2 - Zabojczosc"<<endl<<"3 - latwosc w ewolucji"<<endl;
        cin>>choice;
        switch (choice) //wybor ktora ceche chcesz ewoluowac
        {
        case '1': //rozprzestrzenianie
        {
            available_space = available_space - spreadability; //skaluje koszt danej ilosci cechy w zaleznosci od progressu (im wiecej mamy danej cechy tym wiecej za nią zapłacimy)
            cout<<"Za 5 pkt DNA możesz dodać "<<name<< " "<<ease_to_evolve*available_space*0.25<<" do rozprzestrzeniania się."<<endl<<"Czy chcesz to zrobić? (y/n)"<<endl;
            cin>>choice;
            if(choice == 'y')
            {
                if(dp>=5) //sprawdzenie czy masz wystarczajaco punktow
                {
                    spreadability = spreadability+ease_to_evolve*available_space*0.25;
                    dp = dp-5;

                }
                else
                {
                    cout<<"\033[31m"<<"Nie stać cię."<<"\033[0m"<<endl;
                }
            }
            break;
        }
        case '2': //zabojczosc
        {
            available_space = available_space - deadly; //skaluje koszt danej ilosci cechy w zaleznosci od progressu (im wiecej mamy danej cechy tym wiecej za nią zapłacimy)
            cout<<"Za 5 pkt DNA możesz dodać "<<name<< " "<<ease_to_evolve*available_space*0.25<<" do zabójczości."<<endl<<"Czy chcesz to zrobić? (y/n)"<<endl;
            cin>>choice;
            if(choice == 'y')
            {
                if(dp>=5) //sprawdzenie czy masz wystarczajaco punktow
                {
                    deadly = deadly+ease_to_evolve*available_space*0.25;
                    dp = dp-5;
                }
                else
                {
                    cout<<"\033[31m"<<"Nie stać cię."<<"\033[0m"<<endl;
                }
            }
            break;
        }

        case '3': //latwosc w ewolucji
        {
            available_space = available_space - ease_to_evolve; //skaluje koszt danej ilosci cechy w zaleznosci od progressu (im wiecej mamy danej cechy tym wiecej za nią zapłacimy)
            cout<<"Za 5 pkt DNA możesz dodać "<<name<< " "<<ease_to_evolve*available_space*0.25<<" do łatwości ewolucji."<<endl<<"Czy chcesz to zrobić? (y/n)"<<endl;
            cin>>choice;
            if(choice == 'y')
            {
                if(dp>=5)
                {
                    ease_to_evolve = ease_to_evolve+ease_to_evolve*available_space*0.25;
                    dp = dp-5;
                }
                else
                {
                    cout<<"\033[31m"<<"Nie stać cię."<<"\033[0m"<<endl;
                }
                
            }
            break;
        }

        case 'm': //CHEAT CODE do wizualizacji wymaxowaniego wirusa (spreadability)
        {
            spreadability =1;
            break;
        }

         case 'd': //CHEAT CODE do wizualizacji wymaxowaniego wirusa (deadly)
        {
            deadly = 1;
            break;
        }
    
        default: //lapacz ludzi co nie umieja czytac
            cout<<"Nie da rady ewoluować! Wybrana zła opcja."<<endl;
            break;
        }
    }
    void parasite::spread(vector<country>& neighbours, country& me, float chance1, float chance2) //metoda rozprzestrzeniania sie choroby
    {
        if (me.how_sick_are_we()== 0 && me.how_dead_are_we() ==0) //nie ma w kraju ludzi chorych
        {
            float chance_to_get_sick = 0;
            for(auto& neighbour:neighbours)
            {
                chance_to_get_sick = neighbour.how_sick_are_we()+ chance_to_get_sick;
            }
            chance_to_get_sick =chance_to_get_sick*spreadability*100;
            if (chance_to_get_sick>=chance1)
            {
                me.set_sick(100);
                me.set_healthy(me.get_population() - me.get_sick()-me.get_dead());
            }
            
        }
        else //juz sa chorzy w kraju
        {
            int current_sick = me.get_sick();
            int current_dead = me.get_dead();
            int current_healthy = me.get_healthy();
            if(current_healthy>0)
            {
                int new_sick = spreadability*chance1*current_sick+10;
                if(new_sick>current_healthy)
                {
                    me.set_healthy(0);
                    me.set_sick(current_healthy+current_sick);
                }
                else
                {
                    me.set_healthy(current_healthy-new_sick);
                    me.set_sick(new_sick+current_sick);
                }
            }
        }
        //umieranie
        int current_sick = me.get_sick();   
        int new_dead =0;
        new_dead=floor(deadly*chance2*me.get_sick()); 
        if(current_sick<50){new_dead=51;}
        
        if(new_dead>current_sick)
        {
            me.set_sick(0);
            me.set_dead(me.get_dead()+current_sick);
            me.set_healthy(me.get_population()-me.get_dead());
        }
        else
        {
            me.set_sick(current_sick-new_dead);
            me.set_dead(new_dead+me.get_dead());
            me.set_healthy(me.get_population()-me.get_dead()-me.get_sick());
        }
        
    }

    void parasite::what_are_my_stats() //wypisuje na terminalu obecne paraemtry wirusa
    {
        cout<<"Nazwa: "<<name<<endl;
        cout<<"Jak dobrze zarażam: "<<spreadability<<endl;
        cout<<"Jak bardzo jestem zabójczy: "<<deadly<<endl;
        cout<<"Jak łatwo mnie zmutować: "<<ease_to_evolve<<endl;
    }
 

    //constructors
    parasite::parasite() //konstruktor bazowy
    {
        name = "Tasiemiec";
        spreadability = 0.3;
        deadly = 0.0;
        ease_to_evolve = 0.2;
    }
    parasite::parasite(string n) //konstruktor parametryczny
    {
        name = n;
        spreadability = 0.3;
        deadly = 0.0;
        ease_to_evolve = 0.2;
    }


   
