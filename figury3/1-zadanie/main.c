//Marcin Nahajowski
#include "pierwsze.h"
#include <stdio.h>

Figura tab[1000];
int counter=0;

int main()
{
  int option = 0;
  float sum_of_size = 0.0;
  float x = 0.0;
  float y = 0.0;
  float size = 0.0;

  while(1)
  {
    printf("\nInterfejs do obsługi programu\n");
    printf("1. Dodaj nową figurę\n");
    printf("2. Przesuń figurę o wektor\n");
    printf("3. Oblicz pole figury\n");
    printf("4. Oblicz sumę pól\n");
    printf("5. Zakończ\n");
    scanf("%d", &option);

    if(option == 1)
    {
      printf("Jaką figurę chcesz dodać?\n");
      printf("1. Trójkąt\n");
      printf("2. Kwadrat\n");
      printf("3. Koło\n");
      scanf("%d", &option);
      if(option == 1)
      {
        Figura *f = init();
        printf("Podaj współrzędne wierzchołków\n");
        scanf("%f %f %f %f %f %f", &f->pierwszy.x, &f->pierwszy.y, &f->drugi.x, &f->drugi.y, &f->trzeci.x, &f->trzeci.y);
        tab[counter] = *f;
        tab[counter].typ = trojkat;
        counter++;

      } else if(option == 2)
      {
        Figura *f = init();
        printf("Podaj współrzędne wierzchołków\n");
        scanf("%f %f %f %f %f %f %f %f", &f->pierwszy.x, &f->pierwszy.y, &f->drugi.x, &f->drugi.y, &f->trzeci.x, &f->trzeci.y, &f->czwarty.x, &f->czwarty.y);
        tab[counter] = *f;
        tab[counter].typ = kwadrat;
        counter++;
      } else if(option == 3)
      {
        Figura *f = init();
        printf("Podaj współrzędne środka i promień\n");
        scanf("%f %f %f", &f->pierwszy.x, &f->pierwszy.y, &f->promien);
        tab[counter] = *f;
        tab[counter].typ = kolo;
        counter++;
      }
      else
      {
        printf("Błędna opcja\n");
      }

    } else if(option == 2)
    {
      printf("Którą figurę chcesz przesunąć? Dostępnych jest %d figur\n", counter);
      scanf("%d", &option);
      if(option > counter)
      {
        printf("Błędny zakres\n");
      } else
      {
        printf("Podaj wektor przesunięcia\n");
        scanf("%f %f", &x, &y);
        przesun(&tab[option-1], x, y);
      }
    } else if(option == 3)
    {
      printf("Której figury pole chcesz policzyć? Dostępnych jest %d figur\n", counter);
      scanf("%d", &option);

      if(option > counter)
      {
        printf("Błędny zakres\n");
      } else
      {
        size = pole(&tab[option-1]);
        printf("Pole tej figury to %f \n", size);
        //printf("%f", tab[option].pierwszy.x);
      }
    }
    else if(option == 4)
    {
      if(counter == 0)
        printf("Należy najpierw dodać jakąś figurę!\n");
      else
      {
        Figura *f = init();
        int size = counter;
        sum_of_size = sumapol(f, counter);
        printf("Pole wszystkich dostępnych figur jest równe %f\n", sum_of_size);
      }
    }
    else if(option == 5)
    {
      return 0;
    }
    else
    {
        printf("Błędna opcja\n");
    }
  }

  return 0;
}
