using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace zadanie2
{
  public class slownik<K, V>  where K  :IComparable<K>
  {
    slownik<K, V> next;
    protected K key;
    protected V val;

    public slownik()
    {
      next = null;
      key = default(K);
      val = default(V);
    }

    public void Add (K key, V val)
    {
      if(this.next != null)
      {
        this.next.Add(key, val);
      }
      else
      {
        this.next = new slownik<K, V>();
        this.next.key = key;
        this.next.val = val;
      }
    }

    public void Delete(K key)
    {
      if(key.CompareTo(this.next.key) == 0) //jesli jest taki sam (znalezlismy), > 0 po this w porzadku, < 0 przed this w porzadku
      {
        Console.WriteLine("Usuwamy element - " + this.next.key);
        this.next = this.next.next; //przsuwamy wskaznik dalej
      }
      else
      {
        if(this.next != null) //uważać żeby nie wyleciec poza koniec slownika
          this.next.Delete(key);
      }
    }

    public V Find (K key)
    {
        slownik<K, V> current = this;

        while(key.CompareTo(current.key) != 0)
        {
          Console.WriteLine("Sprawdzany klucz - " + current.key);
          current = current.next;
          if(current == null)
          {
            Console.WriteLine("Nie znaleziono podanego klucza");
            Console.WriteLine();
            return default(V);
          }
        }
        Console.WriteLine("Znaleziony klucz - " + current.key);
        Console.WriteLine();
        return current.val;
    }

    public void Print()
    {
      if (this.next != null)
      {
        Console.WriteLine("{0} {1}", this.key, this.val);
        this.next.Print();
      }
      else
      {
        Console.WriteLine("{0} {1}", this.key, this.val);
        Console.WriteLine();
      }
    }
  }
}
