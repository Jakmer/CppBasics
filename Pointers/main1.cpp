#include <iostream>

using std::cout, std::endl;

int main()
{
    int num{10};

    int *ptr = &num;

    cout << num << "    " << *ptr << endl;

    *ptr = 20;

    cout << num << "    " << *ptr << endl;

    return 0;
}