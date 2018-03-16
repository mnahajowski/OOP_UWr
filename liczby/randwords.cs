//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  public class RandomWordStream : PrimeStream
  {
    public string next()
    {
      if(val == int.MaxValue)
        return "Blad";
      val+=1;
      while(!prime(val) && val < int.MaxValue)//szukanie dlugosci wyrazu bedacej liczba pierwsza
        val += 1;
      if(val == int.MaxValue)
        return "Blad";
      else
      {
        string word ="";
        for(int i = 0; i < val  ; i++)
        {
          word+= RandomLetter.GetLetter();//dodawanie losowych liter do stringa
        }
        return word;
      }
    }
  }
}
