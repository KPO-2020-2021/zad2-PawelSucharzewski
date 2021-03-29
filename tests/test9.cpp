#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"
#include "Statystyki.hh"


TEST_CASE("Test LZespolona dodawanie,znany wynik") {
    WyrazenieZesp x{{1,1},Op_Dodaj,{1,1}};
    LZespolona t ={2,2};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona odejmowanie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Odejmij,{1,1}};
    LZespolona t ={0,0};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona mnozenie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Mnoz,{1,1}};
    LZespolona t ={0,2};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona dzielenie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Dziel,{1,1}};
    LZespolona t ={1,0};
    
  
    CHECK(Oblicz(x)== t);
}
/*
TEST_CASE("Test LZespolona ststystyka") {
   /* Statystyki a={5,10,0,0};
    
  Oblicz(a);
    CHECK(a.pr_dobrze== 50);
    CHECK(a.pr_zle== 50);
}
*/