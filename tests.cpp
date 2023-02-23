#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy"){
    CHECK(isDivisibleBy(10,15) == true);
    CHECK(isDivisibleBy(20,3) == true);
    CHECK(isDivisibleBy(126,252) == true);
}