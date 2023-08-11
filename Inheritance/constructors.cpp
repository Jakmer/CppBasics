#include <iostream>

class Base
{
private:
    int a;

public:
    int b;
    Base() : a(0), b(0)
    {
        std::cout << "Base no args constructor\n";
    }
    Base(int value) : a(value)
    {
        std::cout << "Base int constructor\n";
    }
    ~Base()
    {
        std::cout << "Base destructor\n";
    }
    void setA(int a)
    {
        this->a = a;
    }
    void getA()
    {
        std::cout << a << "\n";
    }
};

class Derived : public Base
{

public:
    int doubledB;
    Derived() :Base(), doubledB(0)
    {
        std::cout << "Derived no args constructor\n";
    }
    Derived(int value) :Base(value), doubledB(value)
    {
        std::cout << "Derived int constructor\n";
    }
    ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};

int main()
{

    int a = 10;
    {
        Derived d{1000};
        d.getA();
        std::cout<<d.doubledB<<'\n';
    }
    return 0;
}