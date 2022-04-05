#include <iostream>

int main()
{
    int age;
    int months;

    std::cout << "Enter your age: ";
    std::cin >> age;
    months = age * 12;
    std::cout << "You age in months is " << months << "." << std::endl;

    return 0;
}