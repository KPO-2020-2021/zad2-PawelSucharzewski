#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
 /*Test funkcji dodatkowych*/ 

 TEST_CASE("test LZespolona +="){
LZespolona x, y, z;

x.re = 1;
x.im = 1;

y.re = 1;
y.im = -3;

z.re = 2;
z.im = -2;
x += y;
CHECK(x == z);
}

TEST_CASE("test LZespolona /= " ){
LZespolona x, y, z;

x.re = 1;
x.im = 8;

y.re = 2;
y.im = 3;

z.re = 2;
z.im = 1;

CHECK( (x/=y) == z);
}
