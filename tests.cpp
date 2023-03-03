#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("testing the isDivisibleBy function") {
  CHECK(isDivisibleBy(4, 2) == true);
  CHECK(isDivisibleBy(9, 2) == false);
}

TEST_CASE("testing the isPrime function") {
  CHECK(isPrime(7) == true);
  CHECK(isPrime(2) == true);
  CHECK(isPrime(1) == false);
}

TEST_CASE("testing the nextPrime function") {
  CHECK(nextPrime(9) ==  11);
  CHECK(nextPrime(2) == 3);
  CHECK(nextPrime(5) == 7);
}

TEST_CASE("testing countPrimes function") {
  CHECK(countPrimes(2,5) == 3);
  CHECK(countPrimes(4,11) == 3);
}

TEST_CASE("testing isTwinPrime function") {
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(19) == true);
  CHECK(isTwinPrime(16) == false);
  CHECK(isTwinPrime(4) == false);
}

TEST_CASE("testing nextTwinPrime function"){
  CHECK(nextTwinPrime(17) == 19);
  CHECK(nextTwinPrime(2) == 3);
  CHECK(nextTwinPrime(5) == 7);
}

TEST_CASE("testing largestTwinPrime") {
  CHECK(largestTwinPrime(5, 18) == 17);
  CHECK(largestTwinPrime(1, 31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
}
