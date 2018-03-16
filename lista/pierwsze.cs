//Marcin Nahajowski 301057
using System;

namespace Zadanie4
{
    class LeniwePierwsze : LeniwaLista
    {

        public bool prime(int x)
        {
            if (x < 2)    // sprawdzanie czy liczba jest pierwsza
                return false;

            for (int i = 2; i*i <= x && i < int.MaxValue; i++)
            {
                if (x % i == 0)
                    return false;
            }
            return true;
        }

        public override int next(int n)
        {
            n+=1; // nadpisanie metody next

            while (!prime(n))
                n+=1;

            return n;
        }
    }
}
