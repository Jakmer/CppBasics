#include <iostream>
#include <iomanip>

int main()
{
    int val {255};
    int nval {-255};

    //  Displaying in different bases
    std::cout<<std::dec<<val<<std::endl;    // Display in decimal base
    std::cout<<std::hex<<val<<std::endl;    // Display in hexadecimal base
    std::cout<<std::oct<<val<<std::endl;    // Display in octal base

    // Showing base
    std::cout<<std::showbase;
    std::cout<<std::dec<<val<<std::endl;    // No prefix
    std::cout<<std::hex<<val<<std::endl;    // 0x prefix
    std::cout<<std::oct<<val<<std::endl;    // 0 prefix

    // Showing uppercases
    std::cout<<std::hex<<val<<std::endl;    //  0x255
    std::cout<<std::uppercase<<val<<std::endl;  //  0X255

    // Showing sign + if number is positive
    std::cout<<std::showpos<<std::dec;
    std::cout<<val<<std::endl;    //    +255
    std::cout<<nval<<std::endl;     //  -255     

    // Reset manipulators
    std::cout<<std::resetiosflags(std::ios::basefield);
    std::cout<<std::resetiosflags(std::ios::showbase);
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<std::resetiosflags(std::ios::uppercase);

    std::cout<<val<<"   "<<nval<<std::endl;

    return 0;
}