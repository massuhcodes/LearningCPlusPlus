#include <iostream>

void displayTime(int, int);

int main()
{
    int hours, minutes;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    displayTime(hours, minutes);

    return 0;
}

void displayTime(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}