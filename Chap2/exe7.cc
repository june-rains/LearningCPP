#include <iostream>

// legal in C++, bad naming practice
// illegal in Java
int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        // override outer i
        sum += i;
    }
    // print 100 45
    std::cout << i << " " << sum << std::endl;
}
