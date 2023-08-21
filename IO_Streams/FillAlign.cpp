#include <iostream>
#include <iomanip>

int main()
{
    std::string s = "Hello world!";
    double num = 1234.5678;

    std::cout<<num<<s<<std::endl;

    //   setw
    std::cout<<"123456789012345678901234567890\n";
    std::cout<<std::setw(10)<<num<<std::setw(10)<<s<<std::endl;
    
    //   left
    std::cout<<"123456789012345678901234567890\n";
    std::cout<<std::left<<std::setw(10)<<num<<std::setw(15)<<s<<std::endl;

    //   setfill
    std::cout<<"123456789012345678901234567890\n";
    std::cout<<std::left<<std::setfill('#')<<std::setw(10)<<num<<std::setw(15)<<std::right<<std::setfill('-')<<s<<std::endl;

    return 0;
}