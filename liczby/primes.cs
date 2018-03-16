//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  public class PrimeStream : IntStream
  {
    // sprawdzanie czy liczba jest pierwsza
    public bool prime (int n)
    {
      if(n < 2)
        return false;
      for(int i = 2; i*i<= n && i < int.MaxValue; i++)
      {
        if(n % i == 0)
          return false;
      }
      return true;
    }
    // nadpisanie metody next1
    public override int next1()
    {
      if(val == int.MaxValue)
        return -1;
      val+=1;
      while(!prime(val) && val < int.MaxValue)
        val+=1;
      if(val == int.MaxValue)
        return -1;
      else
        return val;
    }
  }
}
