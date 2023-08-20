#include <iostream>
#include <memory>

class A
{
    int a;

public:
    A(int a) : a(a)
    {
        std::cout << "A constructor "<<a<<"\n";
    }
    ~A()
    {
        std::cout << "A destructor "<<a<<"\n";
    }
};

void myDelete(A* ptr)
{
    std::cout<<"A custom delete\n";
    delete ptr;
}

int main()
{
    std::shared_ptr<A> ptr1 {new A(80),myDelete};
    std::shared_ptr<A> ptr2 {new A(10), [](A *p){
        std::cout<<"A custom labda delete\n";
    delete p;
    }};
    return 0;
}