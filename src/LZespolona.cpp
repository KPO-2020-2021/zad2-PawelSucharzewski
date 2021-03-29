#include "LZespolona.hh"
#include <cmath>
#include <iostream>
#define MIN_DIFF 0.001

/*
 * Funkcja wyświetlania liczby zespolonej
 */
void Wyswietl(LZespolona Skl)
{
  std::cout<<"("<<Skl.re<<std::showpos<<Skl.im<<std::noshowpos<<"i)";
}

void Wczytaj(LZespolona &Skl)
{
  char znak;
   std::cin>>znak>>Skl.re>>Skl.im>>znak>>znak;
}
/*!
 * Realizuje porównanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwsza porównywana liczba zespolona,
 *    Skl2 - druga porównywana liczba zespolona.
 * Zwraca:
 *    True dla równych liczb zespolonych.
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2){
  
  if (abs(Skl1.re - Skl2.re) <= MIN_DIFF && abs(Skl1.im - Skl2.im) <= MIN_DIFF)
    return true;
  else
    return false;
  
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

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.im * Skl2.re + Skl2.im * Skl1.re;
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
if(Skl2==0)
throw "dzielisz przez zero!!!1!";
  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}
 LZespolona operator += (LZespolona &Skl1, LZespolona const &Skl2)
{
    Skl1.re = Skl1.re + Skl2.re;
    Skl1.im = Skl1.im + Skl2.im;
    return Skl1;
}

LZespolona operator /= (LZespolona &Skl1, LZespolona const &Skl2)
{
    LZespolona  Wynik;
    Wynik = Skl1*Sprzezenie(Skl2)/Modul2(Skl2);
    Skl1.re = Wynik.re;
    Skl1.im = Wynik.im;
    return Skl1;
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

  return Skl.re*Skl.re+Skl.im*Skl.im;
}

double arg(LZespolona Skl){
    double argument;
if(Skl.re == 0)
{
    if(Skl.im < 0)
    {
        cout << "Argument liczby jest rowny -1,570796 radiana "<< endl;
    }
    else
    {
        cout << "Argument liczby jest rowny 1,570796 radiana "<< endl;
    }
}
else
{
    if(Skl.re < 0)
    {
        argument = atan2(Skl.im , Skl.re) + 3.141592;
         cout << "Argument liczby jest rowny " << argument << "radiana" << endl;
    }
    else
    {
         argument = atan2(Skl.im , Skl.re) + 3.141592;
         cout << "Argument liczby jest rowny " << argument << "radiana" << endl;
    }
}
return 0;
}

std::ostream & operator << (std::ostream  & Skl1,  const LZespolona & Skl2)
{
  Skl1<<"("<<Skl2.re<<std::showpos<<Skl2.im<<std::noshowpos<<"i)";
  return Skl1;
}

std::istream  & operator >> (std::istream  &Skl1,  LZespolona  &Skl2)
{
  char znak;
   Skl1>>znak;
   if(znak!='(')
   {
Skl1.setstate(std::ios::failbit);
   }
  Skl1 >>Skl2.re;
   Skl1>>Skl2.im;
   Skl1>>znak;
   if(znak!='i')
   {
Skl1.setstate(std::ios::failbit);
   }
      Skl1>>znak;
   if(znak!=')')
   {
Skl1.setstate(std::ios::failbit);
   }
   return Skl1;
}