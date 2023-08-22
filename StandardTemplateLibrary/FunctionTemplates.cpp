#include <iostream>

struct Alcohol;
std::ostream &operator<<(std::ostream &os, Alcohol &source);

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

struct Alcohol
{
    std::string name;
    int percentage;
    bool operator>(const Alcohol &source) const
    {
        return this->percentage > source.percentage;
    }

};

std::ostream &operator<<(std::ostream &os, Alcohol &source)
    {
        os<<source.name<<" "<<source.percentage<<"%\n";
        return os;
    }

int
main()
{
    std::cout << max<int>(15, 10) << std::endl;
    std::cout << max(1, 2) << std::endl;
    std::cout << max("ABCDE", "ABCD") << std::endl;

    Alcohol vodka {"Vodka",40};
    Alcohol liquier {"Liquier",15};
    Alcohol stronger = max(vodka,liquier);

    std::cout<<stronger<<std::endl;

    return 0;
}