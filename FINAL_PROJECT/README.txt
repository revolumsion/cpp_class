README - PROJEKT NA ZALICZENIE - KORNELIA LEŚNIEWSKA - 337723

Projekt inspirowany grą Plague Inc. 

Kompilacja za pomocą g++, nie ma potrzeby instalacji żadnych zewnętrznych bibliotek.


Po uruchomieniu programu pokazuje się menu wyboru rodzaju choroby. Należy wybrac z klawiatury 1, 2 lub 3. W przypadku wybrania innego klawisza program automatycznie kończy działanie.

Po udanym wyborze typu choroby, program prosi użytkownika o nazwanie choroby. Następnie wybiera się państwo, w którym zaczyna się rozgrywkę. Żeby to zrobić, należy po tym, jak program wyświetli wszystkie możliwości, wpisać nazwę kraju. Input w tym miejscu jest case-insensitive. 

Po wybraniu kraju startu program przechodzi do właściwej rozgrywki. Do czasu spełnienia jednego z warunków zakończenia rozgrywki (wygrana: wszyscy nie żyją z powodu choroby, przegrana: wszyscy zarażeni umarli, zostali jeszcze zdrowi) gra toczy się.

Podczas swojej tury gracz może polepszyć (używając punktów DNA, każde polepszenie kosztuje 5 DNA, ilość zwiększonego parametru zależy od obecnego poziomu) parametry swojej choroby (każdy typ ma inne parametry startowe), wyświetlić obecne parametry swojej choroby lub przejść do następnej tury. 

Pomiędzy turami gracza gra sama liczy zmiany w populacji (nowi zarażeni, nowi martwi), rozprzestrzenia wirusa na inne kraje, dodaje nowe punkty DNA oraz pokazuje obecny poziom zarażenia w terminalu. 


CHEAT CODES:
-> w menu ewolucji:
s - maksuje parametr rozprzestrzeniania
d - maksuje parametr zabójczości

-> w menu tury gracza
allsick - powoduje że prawie wszyscy są chorzy, nie martwi, kasuje wcześniejszy progress zarażenia i śmierci. (jak chce się mieć rozgrywkę gdzie się tylko zabija)
endgame - powoduje że prawie wszyscy są martwi, nie ma zdrowych, została tylko garstka chorych, kasuje wcześniejszy progress zarażenia i śmierci. (do testowania wyrgywania)
fail - powoduje że większość populacji jest martwa, jest znacząca ilość zdrowych i garstka chorych, kasuje wcześniejszy progress zarażenia i śmierci. (do testowania przegrywania)
