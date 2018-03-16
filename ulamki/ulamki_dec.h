//Marcin Nahajowski

#ifndef ulamki_dec_h
#define ulamki_dec_h

#include <stdio.h>
#include <stdbool.h>

typedef struct ulamek   // struktura ulamka
{
    float liczn;
    float mian;
} Ulamek;

int NWD(int, int);

int NWW(int, int);

Ulamek dod(Ulamek, Ulamek);

Ulamek odej(Ulamek, Ulamek);

Ulamek mno(Ulamek, Ulamek, bool);

Ulamek dzie(Ulamek, Ulamek, bool);

Ulamek dod2(Ulamek, Ulamek);

Ulamek odej2(Ulamek, Ulamek);

Ulamek mno2(Ulamek, Ulamek, bool);

Ulamek dzie2(Ulamek, Ulamek, bool);

#endif
