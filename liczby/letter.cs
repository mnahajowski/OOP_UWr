//Marcin Nahajowski 301057
using System;

namespace Zadanie1
{
  // tworzenie losowej litery malej lub duzej
  static class RandomLetter
  {
    static Random rand = new Random();
    public static char GetLetter()
    {
      string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
      char randomLetter = letters[rand.Next(0, 52)];
      return randomLetter;
    }

  }
}
