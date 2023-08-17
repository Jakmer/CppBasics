#include <iostream>

class Shape  // ABSTRACT CLASS
{
    public:
        virtual void draw()=0;  // PURE VIRTUAL FUNCTION
        virtual ~Shape(){}
};

class Circle : public Shape
{
    virtual void draw() override
    {
        std::cout<<"Draw circle\n";
    }
    virtual ~Circle(){}
};

class Triangle : public Shape
{
    virtual void draw() override
    {
        std::cout<<"Draw triangle\n";
    }
    virtual ~Triangle(){}
};

int main()
{
    //Shape *s1 = new Shape();    //ERROR: cannot create instance of abstract class
    Shape *s2 = new Circle();
    Shape *s3 = new Triangle();

    s2->draw();
    s3->draw();

    //delete s1;
    delete s2;
    delete s3;
    return 0;
}