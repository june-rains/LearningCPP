#include <iostream>

int main()
{
    std::cout << "Please enter 2 numbers: " << std::endl;
    int val1 = 0;
    int val2 = 0;
    std::cin >> val1 >> val2;
    int leftBoundary = val1;
    int rightBoundary = val2;
    if (val1 > val2)
    {
        leftBoundary = val2;
        rightBoundary = val1;
    }
    std::cout << "The number from [" << leftBoundary << " , " << rightBoundary << "] is: " << std::endl;
    while (leftBoundary <= rightBoundary)
    {
        std::cout << leftBoundary << std::endl;
        ++leftBoundary;
    }
    return 0;
}