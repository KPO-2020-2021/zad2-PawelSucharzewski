#include <iostream>
#include "BazaTestu.hh"
#include "Statystyki.hh"

using namespace std;




int main(int argc, char **argv)
{
  LZespolona zm={3,4},zm2={6,4};
Wyswietl(zm+zm2);
  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona wynik, obliczenie;
  statystyka s={0,0,0};
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Wyrazenie zespolone : "<<WyrZ_PytanieTestowe<<endl;
obliczenie=Oblicz(WyrZ_PytanieTestowe);
for(int i=0; i<3; i++)
{
  cin>>wynik;
  if(cin.good())
  {break;}
  cin.clear();
  cin.ignore(100,'\n');
}
if(wynik==obliczenie)
{
  cout<<"dobrze"<<endl;
  s.Poprowane++;
}
else
{
  cout<<"Bledne porawne to "<<obliczenie<<endl;
  s.Bledny++;
}
   s.Wszystkie++; 
  }

  cout<<s;
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}