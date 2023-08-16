#include <iostream>

using std::cout;

class A
{
    public:
        int* data;

    A(int a){
        data = new int(a);
    }

    A(const A &source):data(source.data){
        cout<<"Copied\n";
    }

    ~A()
    {
        delete data;
        cout<<"Destructed\n";

    }

};

int main()
{
    A *a1 = new A(10);
    A a2 {*a1};
    cout<<*(a1->data)<<'\n';
    delete a1;
    cout<<*(a2.data)<<'\n';

    return 0;
}