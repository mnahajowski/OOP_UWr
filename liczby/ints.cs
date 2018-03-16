//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  public class IntStream
  {
    public int val;

    public IntStream()
    {
      val =-1;
    }
    //tworzenie kolejnej liczby
    public virtual int next1()
    {
      if(val == int.MaxValue)
      {
        return -1;
      }
      val++;
      return val;
    }
    //sprawdzanie czy mozna utworzyc kolejna liczbe
    public virtual bool eos()
    {

      if(val == int.MaxValue)
      {
        return true;
      }
      else
      {
        return false;
      }

    }
    // resetowanie strumienia
    public void reset()
    {
      val = -1;
    }
  }
}
