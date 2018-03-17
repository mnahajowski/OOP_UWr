using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace zadanie2
{
  public class slownik<K,V> where K : IComparable <K>
  {
    slownik<K,V> next;
    protected K key;
    protected V value;

    public slownik()
    {
      next = null;
      key = default(K);
      value = default(V);
    }

    public void Add(K key, V value)
    {
      if(this.next != null)
        this.next.Add(key, value);
      else
      {
        this.next = new slownik<K,V>();
        this.next.key = key;
        this.next.value = value;
      }
    }

    public void Delete (K key)
    {
      if(key.CompareTo(this.next.key) == 0)
      {
        Console.WriteLine("Usuwany element - {0}", this.next.key);
        this.next = this.next.next;
      }
      else if(this.next != null)
        this.next.Delete(key);  
    }

    public V Find (K key)
    {
        slownik<K, V> current = this;
        while(key.CompareTo(current.key) != 0)
        {
          Console.WriteLine("sprawdzany klucz - {0}", current.key);
          current = current.next;
          if(current == null)
            return default(V);
        }
        Console.WriteLine("Znaleziony klucz - {0}", current.key);
        return current.value;
    }

    public void Print()
    {
      if(this.next != null)
      {
        Console.WriteLine("{0} {1}", this.key, this.value);
        this.next.Print();
      }
      else
      {
        Console.WriteLine("{0} {1}", this.key, this.value);
        Console.WriteLine();
      }
    }
  }


  /*class Program{
    static void Main(string [] args)
    {


    }
  }
}
  */


}
