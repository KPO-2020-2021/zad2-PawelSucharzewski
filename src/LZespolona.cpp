#include "LZespolona.hh"
#include <cmath>

#define MIN_DIFF 0.00001

/*!
 * Realizuje porównanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwsza porównywana liczba zespolona,
 *    Skl2 - druga porównywana liczba zespolona.
 * Zwraca:
 *    True dla równych liczb zespolonych.
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2){
  if ((Skl1.re == Skl2.re) && (Skl1.im == Skl2.im))
    return true;
  else
    return false;
  //alternatywnie, dla MIN_DIFF i wyników od użytkownika
  /*
  if abs(Skl1.re - Skl2.re) <= MIN_DIFF && abs(Skl1.im - Skl2.im) <= MIN_DIFF
    return true;
  else
    return false;
  */
}

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2){
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

/*!
 * Realizuje odejmowanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik odejmowania,
 *    Skl2 - drugi skladnik odejmowania.
 * Zwraca:
 *    Różnica dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

/*!
 * Realizuje mnożenie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik mnożenia,
 *    Skl2 - drugi skladnik  mnożenia.
 * Zwraca:
 *    Iloczyn dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

/*!
 * Realizuje dzielenie dwóch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy składnik dzielenia,
 *    Skl2 - drugi składnik dzielenia.
 * Zwraca:
 *    Wynik dzielenia dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  return Skl1*Sprzezenie(Skl2)/Modul2(Skl2);
}

/*!
 * Realizuje dzielenie liczby zespolonej przez skakar.
 * Argumenty:
 *    Skl1 - dzielona liczba zespolona,
 *    Skl2 - skalar-dzielnik.
 * Zwraca:
 *    Wynik dzielenia dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator / (LZespolona  Skl1,  double  Skl2){
  LZespolona  Wynik;

  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}

/*!
 * Realizuje sprzężenie liczby zespolonej.
 * Argumenty:
 *    Skl1 - liczba zespolona,
 * Zwraca:
 *    Sprzeżenie wejściowej liczby zespolonej.
 */
LZespolona Sprzezenie(LZespolona Skl)
{
  Skl.im=-Skl.im;
  return Skl;
}
/*!
 * Realizuje moduł liczby zespolonej.
 * Argumenty:
 *    Skl1 -  liczba zespolona,
 * Zwraca:
 *    Moduł wejściowej liczby zespolonej.
 */
double Modul2(LZespolona Skl)
{

  return Skl.re*Skl.re+Skl.im+Skl.im;
}
