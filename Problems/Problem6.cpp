// ////////////////////////////////////////////////////////
// # Title
// Sum square difference
//
// # Problem
// The sum of the squares of the first ten natural numbers is,
// `1^2 + 2^2 + ... + 10^2 = 385`
//
// The square of the sum of the first ten natural numbers is,
// `(1 + 2 + ... + 10)^2 = 55^2 = 3025`
//
// Hence the difference between the sum of the squares of the first ten natural numbers
// and the square of the sum is `3025 - 385 = 2640`.
//
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <math.h>

size_t sum_square_difference (const size_t&);


int main() {
    size_t n = 100;
    std::cout << sum_square_difference (n) << std::endl;

    return 0;
}


size_t sum_square_difference (const size_t& n) {
    size_t sum1 = 0;
    size_t sum2 = 0;

  for (size_t i = 1; i <= n; i++) {
      sum1 = sum1 + pow(i,2);
      sum2 = sum2 + i;
  }
  return pow(sum2,2) - sum1;
}