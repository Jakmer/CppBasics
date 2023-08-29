#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

template <typename T1, typename T2>
void display(std::map<T1, T2> &m)
{
    std::for_each(m.begin(), m.end(), [](auto x)
                  { std::cout << x.first << " " << x.second << '\n'; });
}

void f1()
{
    std::map<char, int> m1{
        {'A', 1}, {'B', 2}, {'C', 3}};

    display(m1);

    m1.insert(std::make_pair('X', 10));
    m1.at('B') = 999;

    display(m1);

    auto it = m1.find('C');
    if (it != m1.end())
        std::cout << it->first << ' ' << it->second << '\n';
}

int main()
{
    f1();

    return 0;
}