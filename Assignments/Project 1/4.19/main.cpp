//
//  main.cpp
//  assignment 1
//  4.19
//


#include <iostream>

int main() {
    int largest = 0;
    int second_largest = 0;
    unsigned int i = 0;
    while (i < 10) {
        int input;
        std::cout << "Enter a number\n";
        std::cin >> input;
        if (input > largest) {
            second_largest = largest;
            largest = input;
        }
    i++;
    }
    std::cout << "Largest Number: " << largest << "\nSecond Largest Number: " << second_largest << std::endl;
}
