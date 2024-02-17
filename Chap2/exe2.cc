#include <iostream>

int main()
{
    // according to the ASCII https://www.cs.uah.edu/~rcoleman/Common/Basics/ASCIICharSet.html
    // character '2' is 62(octal)
    // character 'M' is 115(octal)
    // character new line is 12(octal)
    std::cout << "\062\115\012";

    std::cout << "\62";
    std::cout << "\t";     // tab can print use by escape sequence '\t'
    std::cout << "\115\n"; // new line can print use by escape sequence '\n'
    return 0;
}