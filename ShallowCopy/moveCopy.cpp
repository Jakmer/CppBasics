#include <iostream>
#include <vector>

using std::cout;

class A
{
public:
    int *data;

    A(int a)
    {
        data = new int(a);
        cout << "Created\n";
    }

    A(const A &source) : A(*(source.data))
    {
        cout << "Copied\n";
    }

    A(A &&source):data(source.data)
    {
        source.data=nullptr;
        cout<<"Moved\n";
    }

    ~A()
    {
        delete data;
        cout << "Destructed\n";
    }
};

int main()
{
    std::vector<A> vec;
    vec.push_back(A{10});
    /*output without move constructors:
        Created
        Created
        Copied
        Destructed
    */
   /*with move constructor:
        Created
        Moved
        Destructed
        Destructed
   */

    return 0;
}