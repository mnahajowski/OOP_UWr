//Marcin Nahajowski

#include "ulamki_dec.h"
enum czynnosc {dodawanie, odejmowanie, mnozenie, dzielenie, dodawanie2, odejmowanie2, mnozenie2, dzielenie2, wyjscie}; // typ wyliczeniowy
int main()
{
    printf("Podaj liczniki i mianowniki dwoch ulamkow\n");
    Ulamek ulamek1, ulamek2;
    scanf("%f %f %f %f", &ulamek1.liczn, &ulamek1.mian, &ulamek2.liczn, &ulamek2.mian);     // wczytywanie
    while(ulamek1.mian == 0 || ulamek2.mian == 0)
    {
        printf("Blad! \t Podaj nowe liczniki i mianowniki dwoch ulamkow\n");        // kontrola danych
        scanf("%f %f %f %f", &ulamek1.liczn, &ulamek1.mian, &ulamek2.liczn, &ulamek2.mian);
    }
    printf("Co chcesz zrobic?\n");
    printf("0. Dodac(nowa zmienna)\n1. Odjac(nowa zmienna)\n2. Pomnozyc(nowa zmienna)\n"
           "3. Podzielic(nowa zmienna)\n4. Dodawanie(przypisanie)\n5. Odejmowanie(przypisanie)\n6. "
           "Mnozenie(przypisanie)\n7. Dzielenie(przypisanie)\n8. Zakonczyc\n\n");
    int czynnosc;
    scanf("%d", &czynnosc);
    int n = 1;
    bool flag = 0;  // flaga potrzebna przy odwracaniu ulamka przy dzieleniu
    while(n == 1)
    {
        switch(czynnosc)
        {
        case dodawanie:
            dod(ulamek1, ulamek2);
            break;
        case odejmowanie:
            odej(ulamek1, ulamek2);
            break;
        case mnozenie:
            mno(ulamek1, ulamek2, flag);
            break;
        case dzielenie:
            dzie(ulamek1, ulamek2, flag);
            break;
        case dodawanie2:
            ulamek2 = dod2(ulamek1, ulamek2);
            break;
        case odejmowanie2:
            ulamek2 = odej2(ulamek1, ulamek2);
            break;
        case mnozenie2:
            ulamek2 = mno2(ulamek1, ulamek2, flag);
            break;
        case dzielenie2:
            ulamek2 = dzie2(ulamek1, ulamek2, flag);
            break;
        case wyjscie:
            return 0;
            break;
        default:
            printf("Podales bledna liczbe\n");
            break;
        }
        printf("\n\nCo chcesz zrobic?\n");    // zapetlenie dzialan dopki uzytkownik nie zazada wylaczenia
        scanf("%d", &czynnosc);
    }

}
