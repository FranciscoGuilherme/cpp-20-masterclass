#include <iostream>

int main()
{
    int bin = 0b00001111;
    int octal = 017;
    int decimal = 15;
    int hexadecimal = 0x0f;

    std::cout << "Number is: " << bin << std::endl;
    std::cout << "Number is: " << octal << std::endl;
    std::cout << "Number is: " << decimal << std::endl;
    std::cout << "Number is: " << hexadecimal << std::endl;

    return 0;
}
