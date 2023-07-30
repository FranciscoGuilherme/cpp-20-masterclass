#include <iostream>

int main()
{
    int age = 0;
    std::string name;
    std::string info;

    std::cerr << "std::cerr output: Something went wrong" << std::endl;
    std::clog << "std::clog output: This is a log message" << std::endl;

    std::cout << "Please type in your age: ";
    std::cin >> age;
    std::cout << "Please type in your name: ";
    std::cin >> name;

    std::cout << name << ", voce tem: " << age << " anos" << std::endl;
    std::cout << "Digite alguma informacao longa: " << std::endl;
    std::getline(std::cin >> std::ws, info);

    return 0;
}
