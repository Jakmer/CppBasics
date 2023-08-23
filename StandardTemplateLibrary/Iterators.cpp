#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto it = vec.begin();
    std::vector<int>::iterator end = vec.end();

    it += 5; //  point to index 0 + 5 = 5 so should display vec[5] = 6;
    std::cout << *it << std::endl;

    std::cout<<"=================================================\n";

    it = vec.begin();

    while (it != end)
    {
        (*it)++;
        std::cout << *it << std::endl;
        it++;
    }

    auto it2 = vec.cbegin(); //  const iterator

    while (it2 != end)
    {
        //(*it2)++;       //  Error: cannot change const
       // std::cout << *it2 << std::endl;
        it2++;
    }

    std::cout<<"=================================================\n";

    auto rit = vec.rbegin();

    for (rit; rit != vec.rend(); rit++)
    {
        std::cout<<*rit<<std::endl;
    }

    return 0;
}