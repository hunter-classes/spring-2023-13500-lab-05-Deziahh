#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
    if (n % d == 0) {
        return true;
    }
    return false;
}
#include "funcs.h"
#include <cmath>
#include <iostream>

// add functions here
bool isDivisibleBy(int n, int d) {
  if (n % d == 0) {
    return true;
  }
  return false;
}

bool isPrime(int n) {
  // Special cases: 1 and even numbers are not prime
  if (n <= 1 || (n > 2 && n % 2 == 0)) {
    return false;
  }
  // Check odd divisors up to the square root of n
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int nextPrime(int n) {
  int prime = n + 1;
  while (!isPrime(prime)) {
    prime++;
  }
  return prime;
}

int countPrimes(int a, int b) {
  int count = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      count++;
    }
  }
  return count;
}

bool isTwinPrime(int n) {
  if (isPrime(n)) {
    if (isPrime(n - 2) || isPrime(n + 2)) {
      return true;
    }
  }
  return false;
}

int nextTwinPrime(int n) {
  int i = n + 1;
  while (true) {
    if (isPrime(i) && (isPrime(i - 2) || isPrime(i + 2))) {
      return i;
    }
    i++;
  }
}

int largestTwinPrime(int a, int b) {
  int maxTwinPrime = -1;

  for (int i = b; i >= a; i--) {
    if (isPrime(i) && (isPrime(i - 2) || isPrime(i + 2))) {
      maxTwinPrime = i;
      break;
    }
  }
  return maxTwinPrime;
}
