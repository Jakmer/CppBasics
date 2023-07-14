#include <iostream>

int main()
{
    int *a = new int(10);
    std::cout << *a<<"\n"<<a<<"\n";
    int b;
    std::cout<<b<<"\n";
    delete a;
    return 0;
}