#include <iostream>

class Animal
{
public:
    virtual void greetings()
    {
        std::cout << "Hello, I am an animal\n";
    }
    virtual ~Animal()
    {
        std::cout << "Animal destructor\n";
    }
};

class Mammal : public Animal
{
public:
    virtual void greetings()
    {
        std::cout << "Hola, yo soy un mamifero\n";
    }

    virtual ~Mammal()
    {
        std::cout << "Mammal destructor\n";
    }
};

class Bird : public Animal
{
public:
    virtual void greetings()
    {
        std::cout << "Ciao, sono un uccello\n";
    }

    virtual ~Bird()
    {
        std::cout << "Bird destructor\n";
    }
};

class Suricate : public Mammal
{
public:
    virtual void greetings()
    {
        std::cout << "Czesc, jestem surykatka\n";
    }

    virtual ~Suricate()
    {
        std::cout << "Suricate destructor\n";
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