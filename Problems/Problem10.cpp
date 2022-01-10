// ////////////////////////////////////////////////////////
// # Title
// Summation of primes
//
// # Problem
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include <iostream>

bool number_is_prime (const size_t&);
size_t summation_of_primes (const size_t&);



int main() {
    size_t limit = 2000000;
    std::cout << summation_of_primes(limit) << std::endl;
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

size_t summation_of_primes (const size_t& limit) {
    size_t sum = 0;
    for (size_t i = 2; i < limit; i++) {
        if(number_is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}