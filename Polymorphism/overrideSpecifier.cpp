#include <iostream>

class Animal
{
public:
    virtual void greetings() const
    {
        std::cout << "Hello, I am an animal\n";
    }
};

class Mammal : public Animal
{
    virtual void greetings() override //Error missing const
    {
        std::cout << "Hola, yo soy un mamifero\n";
    }
};

class Bird : public Animal
{
    virtual void greetings() const override
    {
        std::cout << "Ciao, sono un uccello\n";
    }
};

class Suricate : public Mammal
{
    virtual void greetings() const override
    {
        std::cout << "Czesc, jestem surykatka\n";
    }
};

int main()
{
    Animal *p1 = new Animal();
    Animal *p2 = new Mammal();
    Animal *p3 = new Bird();
    Animal *p4 = new Suricate();

    Animal *array[] = {p1, p2, p3, p4};

    for (const auto &i : array)
    {
        i->greetings();
    }

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}