#include <iostream>

int main()
{
    int counter = 10;
    while (counter >= 0)
    {
        std::cout << "Counter now is: " << counter << std::endl;
        counter--;
    }
    return 0;
}