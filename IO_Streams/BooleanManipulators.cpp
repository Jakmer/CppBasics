#include <iostream>
#include <iomanip>

using std::cout;

int main()
{
    cout<<(1==1)<<'\n'; //  1
    cout<<(1==0)<<'\n'; //  0

    cout<<std::boolalpha;   //  changing to true/false

    cout<<(1==1)<<'\n'; //  true
    cout<<(1==0)<<'\n'; //  false

    cout<<std::noboolalpha;   //  changing to 1/0

    cout<<(1==1)<<'\n'; //  1
    cout<<(1==0)<<'\n'; //  0

    cout<<std::boolalpha;   //  changing to true/false 

    cout<<(1==1)<<'\n'; //  true
    cout<<(1==0)<<'\n'; //  false

    cout<<std::resetiosflags(std::ios::boolalpha);   //  reset manipulator std::boolalpha

    cout<<(1==1)<<'\n'; //  1
    cout<<(1==0)<<'\n'; //  0

    return 0;
}