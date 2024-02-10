#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    Sales_item item2;

    std::cout << "Please enter 2 items(notice you need enter the same ISBN):" << std::endl;
    std::cin >> item1 >> item2;

    std::cout << "The sum of the 2 items you entered is: " << item1 + item2 << std::endl;
    return 0;
}