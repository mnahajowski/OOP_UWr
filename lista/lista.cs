//Marcin Nahajowski 301057
using System;
using System.Collections.Generic;

namespace Zadanie4
{
    class LeniwaLista
    {
        public int length;
        public List<int> L;
        public Random n;

        public LeniwaLista()
        {
            length = 0;
            L = new List<int>();  // utworzenie z biblioteki nowej listy typu int
            n = new Random();
        }

        public int size()
        {
            return length;
        }

        public virtual int next(int n)
        {
            return this.n.Next(); // dodawanie nowego losowego elementu na koniec listy
        }

        public int element(int n) {
            if (n < length)
              return L[n];  // sprawdzanie czy element o podanym indeksie nie znajduje sie juz w obrebie listy
            else
            {
                length = n;

                if (L.Count == 0)
                  L.Add(0);   // sprawdzani czy lista zostala juz wczesniej utworzona

                for (int i = L.Count - 1; i < n; i++)
                {
                    L.Add(next(L[i]));
                }

                return L[n];
            }
        }

        public void output()
        {
            Console.WriteLine("Rozmiar listy to " + length);
        }
    }
}
