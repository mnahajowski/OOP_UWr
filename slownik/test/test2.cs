using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace zadanie2
{
  class Program
    {
    static void Main(string[] args)
      {
        var Dictionary = new slownik<int, string>();

        Dictionary.Add(13, "marcin");
        Dictionary.Add(2, "magda");
        Dictionary.Add(32, "dawid");

        Dictionary.Print();
        Console.WriteLine();

        Dictionary.Delete(13);
        Console.WriteLine();

        Dictionary.Find(13);
        Console.WriteLine();
        Dictionary.Find(32);
        Console.WriteLine();

        Console.ReadKey();
      }
    }
}
