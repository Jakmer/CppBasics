#include <iostream>
#include <array>
#include <algorithm>

using std::cout;

int main()
{
    std::array<int, 5> arr{1, 4, 3, 24, 12};

    cout << arr.front() << '\n';
    cout << arr.back() << '\n';

    auto max = std::max_element(arr.begin(), arr.end());
    cout<<*max<<'\n';

    cout << arr.size() << '\n';

    int *ptr = arr.data();
    cout << *ptr << '\n';

    cout<<"=======================\n";

    std::sort(arr.begin(), arr.end());

    std::for_each(arr.begin(), arr.end(), [](int x)
                  { cout << x << ' '; });

    return 0;
}