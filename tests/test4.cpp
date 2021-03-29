#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
/*Testy porównania liczb */
TEST_CASE("LZespolona - porownanie 1") {
    LZespolona x, y;
    
    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;
   
    CHECK(!(x == y));
}

TEST_CASE("LZespolona - porownanie 2") {
    LZespolona x, y;
    
    x.re = 2;
    x.im = 2;

    y.re = 2;
    y.im = 2;
   
    CHECK(x == y);
}


TEST_CASE("test LZespolona operator równości") {

	LZespolona x, y;
	bool result, result1;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = 1;


	 result = ((x.re == y.re) && (x.im == y.im));
	 result1 = (x == y);

	 CHECK( result == result1 );

}

TEST_CASE("test LZespolona operator równości błąd") {

	LZespolona x, y;
	bool result, result1;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -1;


	 result = ((x.re == y.re) && (x.im == y.im));
	 result1 = (x == y);

	 CHECK( result == result1 );

}




