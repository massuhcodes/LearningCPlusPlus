// displaypoem.cpp

#include <iostream>

void firstLine(void);
void secondLine(void);

int main()
{
    firstLine();
    firstLine();
    secondLine();
    secondLine();

    return 0;
}

void firstLine(void)
{
    std::cout << "Three blind mice" << std::endl;
}

void secondLine(void)
{
    std::cout << "See how they run" << std::endl;
}