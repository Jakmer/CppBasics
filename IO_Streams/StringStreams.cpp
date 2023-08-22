#include <iostream>
#include <sstream>
#include <iomanip>

int main()
{
    std::string country {"Poland"};
    std::string capital {"Warsaw"};
    long population {41026067};

    std::ostringstream oss;
    oss<<std::setw(10)<<std::left<<country;
    oss<<std::setw(10)<<std::left<<capital;
    oss<<std::setw(15)<<std::left<<population;

    std::cout<<oss.str()<<std::endl;
    

    return 0;
}