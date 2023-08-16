#include <iostream>

using std::cout;

class A
{
    public:
        int* data;

    A(int a){
        data = new int(a);
    }

    A(const A &source):data

};