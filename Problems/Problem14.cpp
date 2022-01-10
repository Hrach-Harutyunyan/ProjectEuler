// ////////////////////////////////////////////////////////
// # Title
// Longest Collatz sequence
//
// # Problem
// The following iterative sequence is defined for the set of positive integers:
//
// if `n` is even: `n \to n/2`
// if `n` is odd:  `n \to 3n + 1`
//
// Using the rule above and starting with 13, we generate the following sequence:
// `13 \to 40 \to 20 \to 10 \to 5 \to 16 \to 8 \to 4 \to 2 \to 1`
//
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
// Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
//
// Which starting number, under one million, produces the longest chain?
//
// __NOTE:__ Once the chain starts the terms are allowed to go above one million.

#include <iostream>
#include <vector>

size_t collatz_sequence (size_t);
size_t longest_collatz_sequence(const size_t&);


int main() {

    size_t limit = 1000000;
    std::cout << longest_collatz_sequence(limit) << std::endl;


    return 0;
}



size_t collatz_sequence (size_t n) {
    std::vector<size_t> digits;

    digits.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            digits.push_back(n);
        } else if (n % 2 == 1) {
            n = 3 * n + 1;
            digits.push_back(n);
        }
    }
    return digits.size();
}

size_t longest_collatz_sequence(const size_t& limit) {
    size_t longestLength = 0;
    size_t result = 0;
    for (size_t startNumber = 1; startNumber < limit; startNumber ++) {
        if(longestLength < collatz_sequence(startNumber)){
            longestLength = collatz_sequence(startNumber);
            result = startNumber;
        };
    }
    return result;
}