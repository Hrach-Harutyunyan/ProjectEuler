// ////////////////////////////////////////////////////////
// # Title
// Largest prime factor
//
// # Problem
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>

bool number_is_prime (const size_t&);
size_t largest_prime_factor (const size_t &);

int main() {
    size_t limit = 600851475143;
    std::cout << largest_prime_factor(limit) << std::endl;

    return 0;
}

bool number_is_prime (const size_t& number) {
    bool flag = true;
    if (number == 0 || number == 1) {
        return !flag;
    }else if (number > 1) {
        for (size_t i = 2; i <= number/2; ++i) {
            if(number % i == 0) {
                return !flag;
            }
        }
        return flag;
    }
}

size_t largest_prime_factor (const size_t & limit){
    size_t result = 0;
    for(size_t i = 1; i <= limit /2; i++){
        if(limit % i == 0 ) {
            if(number_is_prime (i)) {
            result = i;
            }
        }
    }
    return result;
}