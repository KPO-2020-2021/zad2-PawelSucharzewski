#include "Statystyki.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
ostream & operator << (ostream  & Skl1,  const statystyka & Skl2)
{
    Skl1<<"poprawne :"<<Skl2.Poprowane<<endl;
        Skl1<<"bledne :"<<Skl2.Bledny<<endl;
            Skl1<<"procent :"<<Skl2.Poprowane*100.0/Skl2.Wszystkie<<endl;
}