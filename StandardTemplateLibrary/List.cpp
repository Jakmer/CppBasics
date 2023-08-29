#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> // std::advance

template <typename T>
void display(std::list<T> &l)
{
    std::for_each(l.begin(), l.end(), [](T x)
                  { std::cout << x << " "; });
    std::cout << '\n';
}

void f1()
{
    std::list<int> l1 {1,2,3,4,5,6,7,8};
    std::list<int> l2 (5,49);

    display(l1);
    display(l2);

    auto it = l1.begin();
    std::advance(it,4);     // 5
    std::cout<<*it<<'\n';

    l1.insert(it,l2.begin(),l2.end());

    display(l1);

    l1.sort();

    display(l1);

    l1.pop_back();
    l1.push_back(100);

    display(l1);

    it++;
    std::cout<<*it<<"\n";
}

int main()
{
    f1();
    return 0;
}