// carrots.cpp -- food processing program uses and displays a variable

#include <iostream>

int main() 
{
    int carrots;

    carrots = 25;
    std::cout << "I have " << carrots << " carrots." << std::endl;
    carrots--;
    std::cout << "Crunch, crunch. Now I have " << carrots << " carrots." << std::endl;
    return 0;
}