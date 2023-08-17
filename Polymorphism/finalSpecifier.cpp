#include <iostream>

class Animal //final  //if final then cannot inherit from this class
{
public:
    virtual void greetings() //final //if final then cannot override this method in derived class
    {
        std::cout << "Hello, I am an animal\n";
    }
};

class Mammal : public Animal
{
    virtual void greetings() override
    {
        std::cout << "Hola, yo soy un mamifero\n";
    }
};


class Suricate : public Mammal
{
    virtual void greetings() override
    {
        std::cout << "Czesc, jestem surykatka\n";
    }
};

int main()
{
    Animal *p1 = new Animal();
    Animal *p2 = new Mammal();
    Animal *p3 = new Suricate();

    Animal *array[] = {p1, p2, p3};

    for (const auto &i : array)
    {
        i->greetings();
    }

    delete p1;
    delete p2;
    delete p3;

    return 0;
}