#include <iostream>
#include <string>

class Copy
{
private:
    int *data;

public:
    char name;

    Copy() // No args constructor
    {
        std::cout << "No args constructor called\n";
        data = nullptr;
    }

    Copy(const int &num)
    {
        std::cout << "Arg constructor called\n";
        data = new int();
        *data = num;
    }

    Copy(const Copy &source) : Copy{*source.data}
    {
        std::cout << "Copied\n";
    }

    ~Copy()
    {
        delete data;
        std::cout << "Destructor called " << name << " \n";
    }

    const void display() const
    {
        if (data == nullptr)
            return;
        std::cout << (*data) << "\n";
    }
    //=======================================
    Copy &operator=(const Copy &source)
    {
        if (this == &source)
            return *this;
        data = new int();
        *data=*source.data;

        return *this;
    }
    //=======================================
};

int main()
{
    int number{100};
    int number2{200};
    Copy a{number2};
    Copy *b = new Copy(number);
    Copy c{*b};
    Copy d{};
    d = a;
    a.name='A';
    b->name='B';
    c.name='C';
    d.name='D';
    d.display();

    a.display();
    b->display();
    c.display();

    delete b;

    return 0;
}