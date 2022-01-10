// ////////////////////////////////////////////////////////
// # Title
// Special Pythagorean triplet
//
// # Problem
// A Pythagorean triplet is a set of three natural numbers, `a < b < c`,
// for which, `a^2 + b^2 = c^2`
//
// For example, `3^2 + 4^2 = 9 + 16 = 25 = 5^2`.
//
// There exists exactly one Pythagorean triplet for which `a + b + c = 1000`.
// Find the product `abc`.

#include <iostream>
#include <math.h>
#include <time.h>

size_t special_pythagorean_triplet();


int main() {
    std::cout << special_pythagorean_triplet() << std::endl;

    return 0;
}


size_t special_pythagorean_triplet(){
    int a;
    int b;
    int c;
    bool right = false;

    srand(time(NULL));
    do {
        a = rand()%1000;
        b = rand()%1000;
        c = rand()%1000;
        if(a > 0 && b > 0) {
            if (pow(a,2) + pow(b,2) == pow(c,2)) {
                if(a + b + c == 1000) {
                    right = true;
                }
            };
        }
    } while (right != true);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    
    return a * b * c;
}