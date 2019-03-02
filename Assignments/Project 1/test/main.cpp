#include <iostream>

int main()
{
    int lines;
    std::cin >> lines;
    for (int i = 1; i <= lines; i++)
    {
        std::cout << i;
        for (int j = lines-i+1; j > 0; j--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}