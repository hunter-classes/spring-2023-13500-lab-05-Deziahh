/*
Author: Deziah Gayle
Course: CSCI-135
Instructor: Professer Zamansky
Assignment: Lab05
*/

#include <iostream>
#include <string>

#include "funcs.h"

int main() {
  // IS DIVISIBLE BY TEST
  int a = 9;
  int b = 2;
  bool result = isDivisibleBy(a, b);
  if (result == true) {
    std::cout << "Yes, " << a << " is divisible by " << b << std::endl;
  } else {
    std::cout << "No, " << a << " is not divisible by " << b << std::endl;
  }

  // IS PRIME TEST
  int n = 9;
  bool result2 = isPrime(n);
  if (result2 == true) {
    std::cout << n << " is a prime number." << std::endl;
  } else {
    std::cout << n << " is not a prime number." << std::endl;
  }

  // NEXT PRIME TEST
  int result3 = nextPrime(n);
  std::cout << "The next prime number is " << result3 << std::endl;

  //COUNT PRIME TEST
  int num1 = 2;
  int num2 = 7;
  int result4 = countPrimes(num1, num2);
  std::cout << "There are " << result4 << " prime numbers between " << num1 << " and " << num2 << std::endl;

  // IS A TWIN PRIME TEST
  int num3 = 17;

    if (isTwinPrime(num3)) {
        std::cout << num3 << " is a twin prime." << std::endl;
    } else {
        std::cout << num3 << " is not a twin prime." << std::endl;
    }

  //NEXT TWIN PRIME TEST
  int result5 = nextTwinPrime(num3);
  std::cout << "The next twin prime is " << result5 << std::endl;

  //LARGEST TWIN PRIME TEST
  int num4 = 1;
  int num5 = 25;
  int result6 = largestTwinPrime(num4, num5);
  if (result6 == -1) {
        std::cout << "There are no twin primes in the range " << num4 << " to " << num5 << std::endl;
    } else {
        std::cout << "The largest twin prime in the range " << num4 << " to " << num5 << " is " << result6 << std::endl;
    }

  return 0;
}
