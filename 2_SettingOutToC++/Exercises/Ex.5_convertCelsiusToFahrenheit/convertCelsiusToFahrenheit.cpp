#include <iostream>

double celsiusToFahrenheit(double);

int main()
{
    double celsius;

    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit." << std::endl;

    return 0;
}

double celsiusToFahrenheit(double celsius)
{
    return (1.8 * celsius + 32.0);
}