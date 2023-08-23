#include <iostream>
#include <algorithm>
#include <vector>

void MyFind()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto pos = std::find(vec.begin(), vec.end(), 7);

    if (pos != vec.end())
        std::cout << "Found number " << *pos << '\n';
    else
        std::cout << "Not found number\n";
}

void MyCount()
{
    std::vector<int> vec{1, 1, 1, 1, 1, 0, 0, 0, 0, 0};

    auto n = std::count(vec.begin(), vec.end(), 0);

    std::cout << "Found " << n << " elements [" << 0 << "]\n";
}

void MyCountIf()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto n = std::count_if(vec.begin(), vec.end(), [](int x)
                           { return x % 2 == 0; });

    std::cout << "Found " << n << " even elements\n";
}

void MyReplace()
{
    std::vector<int> vec{1, 2, 1, 4, 1, 6, 1, 8, 1, 10};

    std::replace(vec.begin(), vec.end(), 1, 100);

    for (const auto &i : vec)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void MyTransform()
{
    std::string s{"This is file named Algorithms.cpp"};

    std::cout << s << '\n';

    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    std::cout << s << '\n';
}

int main()
{

    MyFind();
    MyCount();
    MyCountIf();
    MyReplace();
    MyTransform();

    return 0;
}