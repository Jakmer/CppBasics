#include <iostream>
#include <vector>
#include <functional>

void f1()
{
    []()
    { std::cout << "Hello world!\n"; };

    []()
    { std::cout << "Hello world!\n"; }();

    [](int x)
    {  x*=x; std::cout<<x<<'\n'; }(7);

    [](int x, int y)
    { std::cout << x + y << '\n'; }(50, 50);
}

void f2()
{
    auto f = [](auto x, auto y)
    { return x * y; };

    auto result = f(6.7,90.9);
    std::cout<<result<<'\n';
}

void transformVec(std::vector<int> &vec, std::function<bool(int)> func)
{
    for(auto &i : vec)
    {
        if(func(i))
        {
            i*=i;
        }
    }
}

void display(std::vector<int> &vec)
{
    for(const auto &i:vec)
    {
        std::cout<<i<<" ";
    }
    std::cout<<'\n';
}

void f3()
{
    std::vector<int> vec {1,2,3,4,5,6,7,8};

    display(vec);
    transformVec(vec,[](int x){ return x%2==0;});
    display(vec);
}

int main()
{
    f1();
    f2();
    f3();

    return 0;
}