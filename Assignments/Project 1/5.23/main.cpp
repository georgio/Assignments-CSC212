//
//  main.cpp
//  assignment 1
//  5.23
//

#include <iostream>
using namespace std;

int main()
{

    int a, b;

    for (int i = 0; i < 9; i++)
    {
        std::cout << "#";
        if (i != 0 && i != 8)
        {
            for (int j = 0; j < 7; j++)
            {
                a = i;
                b = 7 - i - 1;
                if (a <= b)
                {
                    if (j >= a && j <= b)
                        std::cout << "*";
                    else
                        std::cout << " ";
                }
                else
                {
                    if (j >= b && j <= a)
                        std::cout << "*";
                    else
                        std::cout << " ";
                }
            }
        }
        else
        {
            for (int i = 0; i < 7; i++)
            {
                std::cout << "#";
            }
        }
        std::cout << "#";
        std::cout << "\n";
    }
    return 0;
}