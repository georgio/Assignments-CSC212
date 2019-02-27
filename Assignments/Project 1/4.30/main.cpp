//
//  main.cpp
//  assignment 1
//  4.30
//

#include <iostream>
#include <cstdint>

int main() {
    int64_t term_0 = 0;
    int64_t term_1 = 1;
    while (true) {
        int64_t temp = term_0 + term_1;
        std::cout << temp << "\n" ;
        term_0 = term_1;
        term_1 = temp;
    }
}
//  Integer Overflow