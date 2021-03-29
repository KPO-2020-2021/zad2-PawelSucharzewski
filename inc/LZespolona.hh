#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
using namespace std;


/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};
/*
 * Definicja funkcji wyświetlającej liczbe zespoloną
 */
void Wyswietl(LZespolona Skl);
/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator += (LZespolona &Skl1, LZespolona const &Skl2);

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator /= (LZespolona &Skl1, LZespolona const &Skl2);

LZespolona operator / (LZespolona Skl1, double Skl2);

LZespolona Sprzezenie(LZespolona Skl);

double Modul2(LZespolona Skl);

double arg(LZespolona Skl);

istream  & operator >> (istream  &Skl1,  LZespolona  &Skl2);

ostream & operator << (ostream  & Skl1,  const LZespolona & Skl2);

#endif
