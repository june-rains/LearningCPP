#include <iostream>

int main()
{
    std::cout << "/*"; // correct
    std::cout << "*/"; // correct

    // incorrect
    // std::cout << /*"*/"*/;

    std::cout << /*"*/ "/*" /*"*/; // correct

    // incorrect
    // std::cout << /*"*/;
}