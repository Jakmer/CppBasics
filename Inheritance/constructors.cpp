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
    Derived() : doubledB(0)
    {
        std::cout << "Derived no args constructor\n";
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
        Derived d{};
        d.setA(10);
        d.getA();
    }
    return 0;
}