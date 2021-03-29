#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "LZespolona.hh"
/*Testy wczytywanie i wyświetlanie*/
TEST_CASE("LZespolona - wyswietlanie standard") {
    LZespolona x;
   
    x.re = 2;
    x.im = 2;
    
    std::ostringstream out;
    
    out <<setprecision( 2 ) << fixed << x;
    std::cout <<  out.str() << std::endl;
    CHECK( "(2.00+2.00i)" == out.str() );
}

TEST_CASE("LZespolona - wyswietlanie zaokraglane") {
    LZespolona x;
   
    x.re = 2.0/3.0;
    x.im = 2.0/3.0;
    
    std::ostringstream out;
    
    out <<setprecision( 2 ) << fixed <<  x;
    std::cout << out.str() << std::endl;
    CHECK( "(0.67+0.67i)" == out.str() );
}

TEST_CASE("LZespolona - wczytywanie standard") {
    LZespolona x;
    
    std::istringstream in("(10+10.10i)");
    in >> x;
    std::ostringstream out;
    out <<  setprecision( 2 ) << fixed <<x; // lub strcmp? ew. == dla LZesp
    
    CHECK( "(10.00+10.10i)" == out.str() );
}