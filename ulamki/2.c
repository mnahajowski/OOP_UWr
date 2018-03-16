//Marcin Nahajowski

#include "ulamki_dec.h"

int NWD(int a, int b)   // obliczanie NWD dwoch liczb
{
    int pom;
    while(b!=0)
    {
        pom = b;
        b = a%b;
        a = pom;
    }
    return a;
}

int NWW(int a, int b)   // obliczanie NWW
{
    return a/NWD(a,b)*b;
}

Ulamek dod(Ulamek ulamek1, Ulamek ulamek2)      // dodawanie ulamkow tworzac nowa zmienna typu Ulamek
{
    Ulamek ulamek3;
    ulamek3.mian = NWW(ulamek1.mian, ulamek2.mian);
    int pom = ulamek3.liczn = ulamek3.mian/ulamek1.mian*ulamek1.liczn + ulamek3.mian/ulamek2.mian*ulamek2.liczn;
    ulamek3.liczn /= NWD(pom,ulamek3.mian);
    ulamek3.mian /= NWD(pom,ulamek3.mian);
    printf("\n%.0f/%.0f + %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, ulamek2.liczn, ulamek2.mian, ulamek3.liczn, ulamek3.mian);
    return ulamek3;
}

Ulamek odej(Ulamek ulamek1, Ulamek ulamek2)     // odejmowanie ulamkow tworzac nowa zmienna typu Ulamek
{
    Ulamek ulamek3;
    ulamek3.mian = NWW(ulamek1.mian, ulamek2.mian);
    int pom = ulamek3.liczn = ulamek3.mian/ulamek1.mian*ulamek1.liczn - ulamek3.mian/ulamek2.mian*ulamek2.liczn;
    ulamek3.liczn /= NWD(pom,ulamek3.mian);
    ulamek3.mian /= NWD(pom,ulamek3.mian);
    if(ulamek3.mian < 0)
    {
        ulamek3.mian*=(-1);
        ulamek3.liczn*=(-1);
    }
    printf("\n%.0f/%.0f - %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, ulamek2.liczn, ulamek2.mian, ulamek3.liczn, ulamek3.mian);
    return ulamek3;
}

Ulamek mno(Ulamek ulamek1, Ulamek ulamek2, bool flag)   // mnozenie ulamkow tworzac nowa zmienna typu Ulamek
{
    Ulamek ulamek3;
    ulamek3.liczn = ulamek1.liczn * ulamek2.liczn;
    ulamek3.mian = ulamek1.mian * ulamek2.mian;
    int n = NWD(ulamek3.liczn, ulamek3.mian);
    ulamek3.liczn /= n;
    ulamek3.mian /=n;
    if(!flag)
    {
        printf("\n%.0f/%.0f * %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, ulamek2.liczn, ulamek2.mian, ulamek3.liczn, ulamek3.mian);
    }
    return ulamek3;
}

Ulamek dzie(Ulamek ulamek1, Ulamek ulamek2, bool flag)  // dzielenie ulamkow tworzac nowa zmienna typu Ulamek
{
    if(ulamek2.liczn == 0)
    {
        printf("Blad! Wywolaj inne dzialanie");
    }
    else
    {
        flag = 1;
        float x = ulamek2.liczn;
        ulamek2.liczn = ulamek2.mian;
        ulamek2.mian = x;
        Ulamek ulamek3 = mno(ulamek1, ulamek2, flag);
        printf("\n%.0f/%.0f / %.0f/%.0f = %.0f/%.0f \n", ulamek1.liczn, ulamek1.mian, ulamek2.mian, ulamek2.liczn, ulamek3.liczn, ulamek3.mian);
        return ulamek3;
    }
}
