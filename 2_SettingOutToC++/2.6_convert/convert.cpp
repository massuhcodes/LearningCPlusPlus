// convert.cpp -- converts stone to pounds

#include <iostream>

int stoneToLb(int);

int main()
{
    int stone;

    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    int pounds = stoneToLb(stone);
    std::cout << stone << " stone = " << pounds << " pounds." << std::endl;

    return 0;
}

int stoneToLb(int stone)
{
    return 14 * stone;
}