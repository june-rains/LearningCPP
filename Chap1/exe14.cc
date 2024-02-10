#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item trans;
    Sales_item currTrans;
    if (std::cin >> trans)
    {
        while (std::cin >> currTrans)
        {
            if (currTrans.isbn() == trans.isbn())
            {
                trans += currTrans;
            }
            else
            {
                std::cout << trans << std::endl;
                trans = currTrans;
            }
        }
        std::cout << trans << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
}