#include <iostream>
#include <vector>
#include <algorithm>

struct Square
{
    int operator()(int x)
    {
        return x*x;
    }
};

class Multi
{
    int num;

public:
    Multi(int n) : num(n){};
    int operator()(int n)
    {
        return num * n;
    }
};

void display(std::vector<int> &vec)
{
    for (const auto &i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};

    Square sq;

    display(vec);
    std::transform(vec.begin(), vec.end(), vec.begin(), sq);

    display(vec);
    std::transform(vec.begin(), vec.end(), vec.begin(), Multi(10));

    display(vec);
    std::transform(vec.begin(), vec.end(), vec.begin(), [](int x)
                   { return -x; });
    display(vec);

    return 0;
}
