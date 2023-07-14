#include <iostream>
#include <math.h>
#include <string>

int stirling(const int &n, const int &k)
{
    if(n==0 && k==0) return 1;

    if(n==0) return 0;

    return stirling(n-1,k-1) + k* stirling(n-1,k);
}
int main()
{
    int sum {0};
    int n {9};
    int x{7};

    for(int i = 0; i<=n; i++)
    {
        sum+= stirling(n,i)*pow(x,i);
    }

   // std::cout<<sum<<std::endl<<pow(x,n)<<std::endl;

    std::string napis {"KUBA"};
    std::cout<<napis.find('X')<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<(napis.find('X')==std::string::npos)<<std::endl;
    std::cout<<std::string::npos<<std::endl;
    sqrt(10);

    return 0;
}