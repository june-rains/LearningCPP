#include <iostream>

int main()
{
    // compile error -> expected primary-expression before 'int'
    // std::cin >> int input_values;

    // compile error -> narrowing conversion from 'double' to 'int'
    // int i = {3.14};

    // 'wage' was not declared in this scope
    // double salary = wage = 9999.9;

    // ok, but j will be 3
    int j = 3.14;
    std::cout << j << std::endl;
    return 0;
}