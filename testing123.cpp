#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int func(int a){
    return a;
}

TEST_CASE("IDK"){
    CHECK(func(0) == 0);
}