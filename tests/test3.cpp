#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "LZespolona.hh"

/*Testy moduł i sprzężenie*/

TEST_CASE("test LZespolona modul"){
    LZespolona x;
    double s=2;
    x.re = 1;
    x.im = 1;

    
    
    CHECK( Modul2(x) == s);
}

TEST_CASE("test LZespolona sprzezenie"){
    LZespolona x, y;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -1;

    
    
    
    CHECK(Sprzezenie(x) == y);
}