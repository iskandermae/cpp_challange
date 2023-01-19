// challenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "swap.h"

void printXY(int const& x, int const& y)
{
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "\n";
}

int main()
{
    int a = 1;
    int b = 2;

    printXY(a, b);
    my_swap<int>(a, b);
    printXY(a, b);
}
