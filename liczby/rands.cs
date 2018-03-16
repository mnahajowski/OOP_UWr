//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  public class RandomStream : IntStream
  {
      Random rnd = new Random();
      // nadpisanie metody next1
      public override int next1()
      {
        return rnd.Next(0, int.MaxValue);
      }
      // nadpisanie metody eos
      public override bool eos()
      {
        return false;
      }
  }

}
