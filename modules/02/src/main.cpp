#include <iostream>

#include "headers/sum.h"

int main(int argc, char **argv)
{
    int aux1 = 3;
    int aux2 = 7;
    int sum = add_numbers(12, 9);

    std::cout << "The sum of two numbers is: " << sum << std::endl;
    std::cout << "First aux: " << aux1 << std::endl;

    return 0;
}
