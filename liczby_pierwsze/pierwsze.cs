using System;
using System.Collections;

namespace Zadanie2
{
  public class Primes: IEnumerator
  {

    private int counter;
    //sprawdzanie czy liczba jest pierwsze
    private bool IfPrime(int n)
    {
      if (n < 2)
        return false;

      for(int i = 2; i * i <= n; i++)
      {
        if(n % i == 0)
          return false;
      }
      return true;
    }

    public Primes()
    {
      counter = 1;
    }

    // przechodzenie do nastepnego elementu kolekcji az do okreslonej granicy, w tym wypadku int max MaxValue

    public bool MoveNext()
    {
      counter++;
      while(!IfPrime(counter))
      {
        counter++;
      }
      return counter < int.MaxValue;
    }

    public void Reset()
    {
      counter = 1;
    }
    //zwraca biezacy element kolecji (ten w ktorym obecnie sie znajdujemy)
    public object Current
    {
      get
      {
        return counter;
      }
    }
  }

  public class PrimeCollection : IEnumerable
  {
    public IEnumerator GetEnumerator()
    {
      return new Primes();
    }
  }
}
