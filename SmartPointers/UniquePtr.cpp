#include <iostream>
#include <memory>
#include <vector>

class Base
{
protected:
    int data;

public:
    Base() : data(0)
    {
        std::cout << "Base constructor (" << data << ")\n";
    }

    Base(int a) : data(a)
    {
        std::cout << "Base constructor (" << data << ")\n";
    }

    virtual void getData() const
    {
        std::cout << "Base data: " << data << '\n';
    }

    virtual ~Base()
    {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base
{
public:
    Derived() : Base(0)
    {
        std::cout << "Derived constructor (" << data << ")\n";
    }

    Derived(int a) : Base(a)
    {
        std::cout << "Derived constructor (" << data << ")\n";
    }

    virtual void getData() const override
    {
        std::cout << "Derived data: " << data << '\n';
    }

    virtual ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};

int main()
{
    std::unique_ptr<Base> p1{new Base(10)};
    std::unique_ptr<Base> p2 = std::make_unique<Derived>(20);

    std::vector<std::unique_ptr<Base>> vec;

    // vec.push_back(p1);    // ERROR: cannot copy unique_ptr
    vec.push_back(std::move(p1));
    vec.push_back(std::move(p2));

    for (const auto &i : vec)
    {
        i->getData();
    }

    return 0;   // Smart pointers are deleted automatically
}