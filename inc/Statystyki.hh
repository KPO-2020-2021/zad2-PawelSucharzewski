#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH
#include <iostream>
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"



/*
 * Tu nalezy zdefiniowac funkcje, ktore definiuja model statystyki 
 */

using namespace std;
struct statystyka
{
    int Poprowane;
    int Bledny;
    int Wszystkie;
};

ostream & operator << (ostream  & Skl1,  const statystyka & Skl2);
#endif
