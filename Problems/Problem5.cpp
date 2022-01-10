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

size_t smallest_multiple (int);
size_t greatest_common_divisor (size_t, size_t);
size_t least_common_multiple (size_t, size_t);


int main() {
    int n = 20;
    std::cout << smallest_multiple (n) << std::endl;

    return 0;
}


size_t smallest_multiple (int n) {
    size_t result = 1;
    for (size_t i = 2; i <= n; i++){
        result = least_common_multiple(result, i);
    }
    return result;
}

size_t greatest_common_divisor (size_t num1, size_t num2) {
    while (num1 != 0) {
        size_t tmp = num1;
        num1 = num2 % num1;
        num2 = tmp;
    }
    return num2;
}

size_t least_common_multiple (size_t num1, size_t num2) {
  return num1 * (num2 / greatest_common_divisor (num1, num2));
}