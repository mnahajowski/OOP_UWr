//Marcin Nahajowski

#include <limits.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#ifndef PIERWSZE_H_INCLUDED
#define PIERWSZE_H_INCLUDED

typedef enum {trojkat, kwadrat, kolo} typfig;

typedef struct
{
  float x;
  float y;
} Punkt;

typedef struct
{
  Punkt pierwszy;
  Punkt drugi;
  Punkt trzeci;
  Punkt czwarty;
  float promien;
  typfig typ;

} Figura;

extern Figura tab[1000];
extern int counter;

Figura *init();
float pole(Figura *f);
void przesun(Figura *f, float x, float y);
float sumapol(Figura *f, int size);

#endif // PIERWSZE_H_INCLUDED
