//Marcin Nahajowski 301057
using System;
using System.Collections.Generic;

namespace Zadanie4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\nLeniwaListaLosowa :\n");
            LeniwaLista L1 = new LeniwaLista();

            L1.output();//pusta lista
            Console.WriteLine("3 element listy to " + L1.element(3));
            L1.output();//lista zwiekszyla sie
            Console.WriteLine("10 element listy to " + L1.element(10));
            L1.output();//lista zwiekszyla sie
            Console.WriteLine("5 element listy to " + L1.element(5));
            L1.output();//lista NIE zwiekszyla sie, wypisano element, ktory juz wczesniej nalezal do listy
            Console.WriteLine("100 element listy to " + L1.element(100));
            L1.output();//lista zwiekszyla sie

            Console.WriteLine("\nLeniweListaPierwsze :\n");
            LeniwePierwsze L2 = new LeniwePierwsze();

            L2.output();//pusta lista
            Console.WriteLine("3 element listy to " + L2.element(3));
            L2.output();//lista zwiekszyla sie
            Console.WriteLine("10 element listy to " + L2.element(10));
            L2.output();//lista zwiekszyla sie
            Console.WriteLine("5 element listy to " + L2.element(5));
            L2.output();//lista NIE zwiekszyla sie, wypisano element, ktory juz wczesniej nalezal do listy
            Console.WriteLine("100 element listy to " + L2.element(100));
            L2.output();//lista zwiekszyla sie

            Console.ReadKey();
        }
    }
}
