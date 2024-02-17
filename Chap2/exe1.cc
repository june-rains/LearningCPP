#include <iostream>

int main()
{
    unsigned u1 = 10;
    unsigned u2 = 42;

    std::cout << u2 - u1 << std::endl; // 32
    std::cout << u1 - u2 << std::endl; // 2^32(4294967296) - 32 = 4294967264

    int i1 = 10;
    int i2 = 42;
    std::cout << i2 - i1 << std::endl; // 32
    std::cout << i1 - i2 << std::endl; // -32

    std::cout << u1 - i1 << std::endl; // 0
    std::cout << i1 - u1 << std::endl; // 0
}