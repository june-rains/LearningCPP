#include <iostream>

int main()
{
    int sum = 0;
    int val = 0;
    std::cout << "Please enter a number:" << std::endl;
    while (1)
    {
        if (std::cin >> val)
        {
            sum += val;
            std::cout << "Please enter a number:" << std::endl;
        }
        else
        {
            break;
        }
    }
    std::cout << "The number you entered sum is: " << sum << std::endl;
}