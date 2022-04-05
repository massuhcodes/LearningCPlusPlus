// convertfurlongstoyards.cpp

#include <iostream>

double furlongToYards(double);

int main()
{
    double furlongs;
    double yards;

    std::cout << "Enter the number of furlongs: ";
    std::cin >> furlongs;

    yards = furlongToYards(furlongs);

    std::cout << furlongs << " furlong(s) = " << yards << " yard(s)." << std::endl;

    return 0;
}

double furlongToYards(double furlongs)
{
    return furlongs * 220.0;
}