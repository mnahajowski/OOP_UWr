using System;

namespace Zadanie2
{
  class Program
  {
    public static void Main(string[] args)
    {
      PrimeCollection x = new PrimeCollection();
      foreach(int p in x)
        System.Console.WriteLine(p);
    }
  }
}
