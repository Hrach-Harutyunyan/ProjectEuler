//////////////////////////////////////////////////////////////////////////
// # Title
// Multiples of 3 and 5:

// # Problem
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

size_t multiples_of_3_or_5 (const size_t&);

int main() {
    int number = 3;
    std::cout << multiples_of_3_or_5 (number) << std::endl;

    return 0;
}

size_t multiples_of_3_or_5(const size_t& num){
    size_t sum = 0;
    for(size_t i = 2; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}
