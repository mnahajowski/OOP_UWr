//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  class KlasaGlowna
  {
    public static void Main(string[] args)
    {

    Console.WriteLine("\nIntStream");
    IntStream inst = new IntStream();
    Console.WriteLine(inst.next1());
    Console.WriteLine(inst.next1());
    Console.WriteLine(inst.next1());
    Console.WriteLine(inst.next1());
    Console.WriteLine(inst.eos());
    inst.reset();
    Console.WriteLine(inst.next1());

    Console.WriteLine("\nPrimeStream");
    PrimeStream ps = new PrimeStream();
    Console.WriteLine(ps.next1());
    Console.WriteLine(ps.next1());
    Console.WriteLine(ps.next1());
    Console.WriteLine(ps.next1());
    Console.WriteLine(ps.eos());
    ps.reset();
    Console.WriteLine(ps.next1());

    Console.WriteLine("\nRandomStream");
    RandomStream rs = new RandomStream();
    Console.WriteLine(rs.next1());
    Console.WriteLine(rs.next1());
    Console.WriteLine(rs.next1());
    Console.WriteLine(rs.next1());
    Console.WriteLine(rs.eos());
    rs.reset();
    Console.WriteLine(rs.next1());

    Console.WriteLine("\nRandomWordStream");
    RandomWordStream rws = new RandomWordStream();
    Console.WriteLine(rws.next());
    Console.WriteLine(rws.next());
    Console.WriteLine(rws.next());
    Console.WriteLine(rws.next());
    Console.WriteLine(rws.eos());
    rws.reset();
    Console.WriteLine(rws.next());
    Console.ReadKey();

    }
  }
}
