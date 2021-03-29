#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH
#include <iostream>
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"



/*
 * Definicja statyystyki
 */

using namespace std;
struct statystyka
{
    int Poprowane;
    int Bledny;
    int Wszystkie;
};

/*
 * Przeciążenie operatora przesunięcia bitowego w lewo
 */


ostream & operator << (ostream  & Skl1,  const statystyka & Skl2);
#endif
