//Marcin Nahajowski

#include "ulamki_dec.h"

Ulamek dod2(Ulamek ulamek1, Ulamek ulamek2)     // dodawanie ulamkow przypisujac danym drugiego skladnika wartosci sumy
{
    float liczn = ulamek2.liczn, mian = ulamek2.mian;
    ulamek2.mian = NWW(ulamek1.mian, mian);
    int pom = ulamek2.liczn = ulamek2.mian/ulamek1.mian*ulamek1.liczn + ulamek2.mian/mian*liczn;
    ulamek2.liczn /= NWD(pom,ulamek2.mian);
    ulamek2.mian /= NWD(pom,ulamek2.mian);
    printf("\n%.0f/%.0f + %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, liczn, mian, ulamek2.liczn, ulamek2.mian);
    return ulamek2;

}

Ulamek odej2(Ulamek ulamek1, Ulamek ulamek2)    // odejmowanie ulamkow przypisujac danym odjemnika wartosc roznicy
{
    float liczn = ulamek2.liczn, mian = ulamek2.mian;
    ulamek2.mian = NWW(ulamek1.mian, mian);
    int pom = ulamek2.liczn = ulamek2.mian/ulamek1.mian*ulamek1.liczn - ulamek2.mian/mian*liczn;
    ulamek2.liczn /= NWD(pom,ulamek2.mian);
    ulamek2.mian /= NWD(pom,ulamek2.mian);
    if(ulamek2.mian < 0)
    {
        ulamek2.mian*=(-1);
        ulamek2.liczn*=(-1);
    }
    printf("\n%.0f/%.0f - %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, liczn, mian, ulamek2.liczn, ulamek2.mian);
    return ulamek2;
}

Ulamek mno2(Ulamek ulamek1, Ulamek ulamek2, bool flag)     // mnozenie ulamkow przypisujac danym mnoznika wartosci iloczynu
{
    float liczn = ulamek2.liczn, mian = ulamek2.mian;
    ulamek2.liczn = ulamek1.liczn * liczn;
    ulamek2.mian = ulamek1.mian * mian;
    int n = NWD(ulamek2.liczn, ulamek2.mian);
    ulamek2.liczn /= n;
    ulamek2.mian /=n;
    if(!flag)
    {
        printf("\n%.0f/%.0f * %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, liczn, mian, ulamek2.liczn, ulamek2.mian);
    }
    return ulamek2;
}

Ulamek dzie2(Ulamek ulamek1, Ulamek ulamek2, bool flag)     // dzielenie ulamkow przypisujac danym dzielnika wartosci ilorazu
{
    if(ulamek2.liczn == 0)
    {
        printf("Blad! Wywolaj inne dzialanie");
    }
    else
    {
        flag = 1;
        float x = ulamek2.liczn;
        float y = ulamek2.mian;
        ulamek2.liczn = ulamek2.mian;
        ulamek2.mian = x;
        ulamek2 = mno(ulamek1, ulamek2, flag);
        printf("\n%.0f/%.0f / %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, x, y, ulamek2.liczn, ulamek2.mian);
    }
    return ulamek2;
}
