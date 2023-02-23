#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

bool isDivisibleBy(int, int);
bool isPrime(int);
int nextPrime(int);
int countPrimes(int, int);
bool isTwinPrime(int);
int nextTwinPrime(int);
int largestTwinPrime(int, int);

TEST_CASE("w"){
    CHECK(isPrime(7) == 1);
}