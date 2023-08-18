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
    std::shared_ptr<Base> p1{new Base(10)};
    std::shared_ptr<Base> p2 = std::make_shared<Derived>(20);

    std::vector<std::shared_ptr<Base>> vec;

    std::cout<<p1.use_count()<<"    "<<p2.use_count()<<'\n';

    vec.push_back(p1);
    vec.push_back(p2);

    std::cout<<p1.use_count()<<"    "<<p2.use_count()<<'\n';    //vec uses copy constructor so now p1 and p2 are used twice

    for (const auto &i : vec)
    {
        i->getData();
    }

    return 0;   // Smart pointers are deleted automatically
}