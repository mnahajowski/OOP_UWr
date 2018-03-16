//Marcin Nahajowski
#define M_PI 3.1415

#include "pierwsze.h"

Figura *init()
{
  Figura *nowa = (Figura*)malloc(sizeof(Figura));
  nowa->pierwszy.x = INT_MAX;
  nowa->pierwszy.y = INT_MAX;

  nowa->drugi.y = INT_MAX;
  nowa->drugi.x = INT_MAX;

  nowa->trzeci.y = INT_MAX;
  nowa->trzeci.x = INT_MAX;

  nowa->czwarty.y = INT_MAX;
  nowa->czwarty.x = INT_MAX;

  nowa->promien = INT_MAX;
}

float pole(Figura *f)
{
  if(f->typ == trojkat)
  {
    float ab = sqrt(((f->drugi.x - f->pierwszy.x)*(f->drugi.x - f->pierwszy.x)) + ((f->drugi.y - f->pierwszy.y)*(f->drugi.y - f->pierwszy.y)));
    float bc = sqrt(((f->trzeci.x - f->drugi.x)*(f->trzeci.x - f->drugi.x)) + ((f->trzeci.y - f->drugi.y)*(f->trzeci.y - f->drugi.y)));
    float ca = sqrt(((f->pierwszy.x - f->trzeci.x)*(f->pierwszy.x - f->trzeci.x)) + ((f->pierwszy.y - f->trzeci.y)*(f->pierwszy.y - f->trzeci.y)));

    float p = (ab + bc + ca)/2;

    float size = sqrt(p * (p-ab) * (p-bc) * (p-ca));
    return size;

  } else if(f->typ == kwadrat)
  {
    float length = sqrt(((f->drugi.x - f->pierwszy.x)*(f->drugi.x - f->pierwszy.x)) + ((f->drugi.y - f->pierwszy.y)*(f->drugi.y - f->pierwszy.y)));
    float size = length*length;
    return size;

  } else if(f->typ == kolo)
  {
    float size = M_PI * f->promien * f->promien;
    return size;
  }
}

void przesun(Figura *f, float x, float y)
{
  f->pierwszy.x += x;
  f->pierwszy.y += y;

  if(f->typ == trojkat || f->typ == kwadrat)
  {
    f->drugi.x += x;
    f->drugi.y += y;

    f->trzeci.x += x;
    f->trzeci.y += y;
  }

  if(f->typ == kwadrat)
  {
    f->czwarty.x += x;
    f->czwarty.y += y;
  }

  return;
}

float sumapol(Figura *f, int size)
{
  float sum = 0.0;
  for(int i=0; i<counter; i++)
  {
    sum += pole(&tab[i]);
  }

  return sum;
}
