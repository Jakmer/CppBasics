#include <iostream>
#include <set>
#include <algorithm>
#include <iterator> // std::advance

template <typename T>
void display(std::set<T> &l)
{
    std::for_each(l.begin(), l.end(), [](T x)
                  { std::cout << x << " "; });
    std::cout << '\n';
}

void f1()
{
    std::set<int> s1 {1,1,1,2,3,3,4,5,5,5,6,7,8,8};

    display(s1);

    s1.insert(0);
    s1.insert(9);
    std::cout<<std::boolalpha;
    auto result = s1.insert(0);
    std::cout<<(*result.first)<<" "<<result.second<<"\n";

    display(s1);

    if(s1.count(5))
    {
        std::cout<<"Found 5 in the set\n";
    }
    else
    {
        std::cout<<"Not found 5 in the set\n";
    }

    if(s1.count(11))
    {
        std::cout<<"Found 11 in the set\n";
    }
    else
    {
        std::cout<<"Not found 11 in the set\n";
    }

    auto it = s1.find(8);
    if(it!= s1.end())
    {
        s1.erase(it);
    }

    display(s1);
}

int main()
{
    f1();
    return 0;
}