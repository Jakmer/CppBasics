#include <iostream>
#include <vector>

int main()
{
    /*
    //int *b;
    //b=0x1bbbeb0;
    // std::cout << *b<<"\n"<<b<<"\n";

    char32_t c = (char)20000000;
    //long long a = 9'000'000'000;
    // std::cout<<sizeof(long )<<"\n";

    std::vector<int> v1;
    std::vector<int> v2;

    v1.push_back(10);
    v1.push_back(20);

    v2.push_back(100);
    v2.push_back(200);

    std::vector<std::vector<int>> vec2d;
    vec2d.push_back(v1);
    vec2d.push_back(v2);

    std::cout << vec2d.at(0).at(0) << std::endl;
    v1.at(0) = 1000;
    std::cout << vec2d.at(0).at(0) << std::endl;
    double tab[5] ;

    std::cout<<tab[500];
    */

    int a {5};
    int b{5};
    std::cout<<++a*2<<"\n";
    std::cout<<b++*2<<"\n";

    for(int i = 0; i <10; i++)
    {
        int c = i;
        std::cout<<c++<<"   "<<++c<<"   "<<c++<<"   "<<++c<<"\n";
    }
    return 0;
}