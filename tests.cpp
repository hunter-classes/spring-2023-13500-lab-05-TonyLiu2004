#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy"){
  CHECK(isDivisibleBy(10,5) == true);
  CHECK(isDivisibleBy(20,3) == false);
  CHECK(isDivisibleBy(126,252) == false);
}

TEST_CASE("isPrime"){
    CHECK(isPrime(15) == false);
    CHECK(isPrime(41) == true);
    CHECK(isPrime(-5) == false);
}

TEST_CASE("nextPrime"){
    CHECK(nextPrime(7) == 11);
    CHECK(nextPrime(14) == 17);
}

TEST_CASE("countPrimes"){
    CHECK(countPrimes(10,20) == 4);
    CHECK(countPrimes(23,47) == 7);
}

TEST_CASE("isTwinPrime"){
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(31) == true);
    CHECK(isTwinPrime(21) == false);
}

TEST_CASE("nextTwinPrime"){
    CHECK(nextTwinPrime(10) == 11);
    CHECK(nextTwinPrime(20) == 29);
}

TEST_CASE("largestTwinPrime"){
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
}
