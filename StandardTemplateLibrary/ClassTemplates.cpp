#include <iostream>
template <typename T>
class A
{
    T value;

public:
    A(T value) : value(value){};
    T getValue()
    {
        return value;
    }
    void setValue(T v)
    {
        value=v;
    }
};

int main()
{
    A<int> a{100};
    std::cout << a.getValue() << std::endl;

    A<double> b {2.7182};
    std::cout << b.getValue() << std::endl;

    A<std::string> c {"Alice"};
    std::cout << c.getValue() << std::endl;

    A<A<std::string>> d {c};
    
    A<std::string> e = d.getValue();
    e.setValue("Bob");
    std::cout<<e.getValue()<<std::endl;

    return 0;
}