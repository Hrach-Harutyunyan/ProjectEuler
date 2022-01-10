// ////////////////////////////////////////////////////////
// # Title
// Largest palindrome product
//
// # Problem
// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is `9009 = 91 * 99`.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <math.h>

size_t the_opposite_of_number(const size_t&);
size_t largest_palindrome_product(const int&);

int main() {
    int NumberOfDigits = 3;
    std::cout << largest_palindrome_product(NumberOfDigits) << std::endl;

    return 0;
}

size_t the_opposite_of_number(const size_t& number) {
	size_t OppositeNumber = 0;
    size_t tmp = number;

	while (tmp > 0) {
		OppositeNumber = OppositeNumber * 10 + tmp % 10;
		tmp = tmp / 10;
	}
	return OppositeNumber;
}

size_t largest_palindrome_product(const int& NumberOfDigits){
    size_t min = pow(10,NumberOfDigits - 1);
    size_t max = pow(10,NumberOfDigits) - 1;
    size_t GreatestPalindrome = 0;

	for (size_t first = min; first <= max; first++) {
		for (size_t second = min; second <= max; second++) {
			if ((first * second) == the_opposite_of_number (first * second)) {
                if (first * second > GreatestPalindrome) {
				    GreatestPalindrome = first * second;
                }
            }
		}
	}
    return GreatestPalindrome;
};