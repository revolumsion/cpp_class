   #include"child.hxx"
   
   
   child::child():goodPerson(), badPerson(), person() //konstruktor domyślny
   {
    
   }
   child::child(string n, int a, int bd, int gd):goodPerson(gd, n, a), badPerson(bd, n, a),person(n, a) //konstruktor parametryczny
   {

   }

   bool child::isNice() //nadpisana do sprawdzania czyt dziecko było grzeczne
   {
    return(badDeeds < goodDeeds);
   }