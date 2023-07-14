#include <iostream>

using std::cout, std::endl;

class Obj1
{
public:
    int *data;

    Obj1(int a)
    {
        data = new int;
        *data = a;
    }

    Obj1(const Obj1 &o1)
        : Obj1{*o1.data} {}

    void takeObject(Obj1 o)
    {
        cout << *(o.data) << endl;
    }

    void display()
    {
        cout << (*data) << endl;
    }

    ~Obj1()
    {
        cout << "Destructor called." << endl;
        delete data;
    }
};

int main()
{
    Obj1 o {100};

    o.display();
    o.takeObject(o);
    o.display();
}