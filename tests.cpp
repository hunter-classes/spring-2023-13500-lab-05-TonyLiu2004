#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisibleBy"){
    CHECK(isDivisibleBy(10,5) == true);
}