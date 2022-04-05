#include <iostream>

double lightDistancesToAstronomicalUnits(double);

int main()
{
    double lightDistances;
    
    std::cout << "Enter the number of light years: ";
    std::cin >> lightDistances;
    std::cout << lightDistances << " light years = " << lightDistancesToAstronomicalUnits(lightDistances) << " astronomical units." << std::endl;

    return 0;
}

double lightDistancesToAstronomicalUnits(double lightDistances)
{
    return lightDistances * 63240;
}