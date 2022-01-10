// ////////////////////////////////////////////////////////
// # Title
// 10001st prime
//
// # Problem
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10001st prime number?

#include <iostream>

bool number_is_prime (const size_t&);
size_t prime_10001st(const size_t&);


int main() {
    size_t number = 10001;
    std::cout << prime_10001st (number) << std::endl;
    return 0;
}


bool number_is_prime (const size_t& number) {
    bool flag = true;
    if (number == 0 || number == 1) {
        return !flag;
    }else if (number > 1) {
        for (size_t i = 2; i <= number/2; ++i) {
            if(number % i == 0){
                return !flag;
            }
        }
        return flag;
    }
}

size_t prime_10001st(const size_t& number) {
    size_t result = 0;
    size_t count = 1;
    for(size_t i = 2; count <= number; i++) {
       if(number_is_prime(i)) {
           if(count == number) {
           result = i; 
           }
           ++ count;
       }
    }
    return result;
}