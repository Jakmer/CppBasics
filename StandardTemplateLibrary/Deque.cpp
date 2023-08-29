#include <iostream>
#include <deque>
#include <algorithm>

template <typename T>
void display(std::deque<T> &dq)
{
    std::for_each(dq.begin(), dq.end(), [](T x)
                  { std::cout << x << " "; });
    std::cout << '\n';
}

void f1()
{
    std::deque<int> dq{1, 2, 3, 4, 5};

    display(dq);
    std::cout<<dq.at(0)<<" "<<dq[1]<<'\n';

    dq.pop_back();
    dq.push_back(6);
    dq.pop_front();
    dq.push_front(0);

    display(dq);
}

void f1()
{
    std::deque<int> dq{1, 2, 3, 4, 5};

    display(dq);
    std::cout<<dq.at(0)<<" "<<dq[1]<<'\n';

    dq.pop_back();
    dq.push_back(6);
    dq.pop_front();
    dq.push_front(0);

    display(dq);
}



int main()
{
    f1();

    return 0;
}