#include <iostream>
#include <cstring>

int main()
{
    char label[10] {};
    strcpy(label,"Kuba");

    for(int i: label)
    {
        std::cout<<i<<"\n";
    }

    strcat(label,"KubaKuba");
    std::cout<<label;
    std::string l ="TROLOlo\n";
    std::string k {"Frank"}; 

    std::string l1 ="Napis";
    std::string l2 ="Napis";

    std::cout<<std::boolalpha;

    std::cout<<(l1==l2)<<std::endl;

    for(int i: k)
    {
        std::cout<<i<<"\n";
    }
    
    return 0;
}