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
    Base(int value): a(value){
        std::cout<<"Base int constructor\n";
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
    using Base::Base;
public:
    int doubledB;
    Derived() : doubledB(0)
    {
        std::cout << "Derived no args constructor\n";
    }
   /* Derived(int value): doubledB(value){
        std::cout<<"Derived int constructor\n";
    }*/
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
        d.setA(10);
        d.getA();
        Derived e{1000};
        e.getA();
    }
    return 0;
}