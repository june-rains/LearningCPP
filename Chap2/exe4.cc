// Purpose: Print the value of global and local variables of type int and string.
#include <iostream>
#include <string>

// 0
int global_int;
// empty string
std::string global_string;

int main()
{
    // waring: local_int is not initialized, so it has undefined value
    int local_int;
    // empty string
    std::string local_string;

    std::cout << "global_int: " << global_int << std::endl;
    std::cout << "local_int: " << local_int << std::endl;
    std::cout << "global_string: " << global_string << std::endl;
    std::cout << "local_string: " << local_string << std::endl;

    return 0;
}
