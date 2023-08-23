#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;

void display(std::vector<int> &v)
{
    std::for_each(v.begin(), v.end(), [](int x)
                  { cout << x << " "; });
    cout << '\n';
}

void f1()
{
    std::vector<int> vec1{1, 2, 3, 4, 5, 6};

    cout << vec1.front() << " " << vec1.back() << " " << vec1.size() << " " << vec1.capacity() << " " << vec1.max_size() << '\n';

    vec1.push_back(10);
    display(vec1);
    vec1.pop_back();
    display(vec1);
}

void f2()
{
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50,60};
    
    auto it = std::find(vec1.begin(),vec1.end(),3);
    vec1.insert(it,vec2.begin(),vec2.end());

    display(vec1);
    
}

int main()
{
    f1();
    f2();

    return 0;
}