#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    Sales_item item2;
    std::cout << "Please enter 2 transactions" << std::endl;
    std::cin >> item1;
    std::cin >> item2;

    std::cout << "The transactions you enter are: :" << std::endl;
    std::cout << item1 << std::endl;
    std::cout << item2 << std::endl;
    return 0;
}