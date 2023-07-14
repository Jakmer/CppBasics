#include <iostream>

using std::cout, std::endl;

class Obj1
{
public:
    int *data;


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
    Obj1 o;
    int num =100;
    o.data = &num;

    o.display();
    o.takeObject(o);
    o.display();
}