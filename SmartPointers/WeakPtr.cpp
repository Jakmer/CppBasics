#include <iostream>
#include <memory>

class B;

class A
{
    std::shared_ptr<B> b_ptr;
    public:
        void setB(std::shared_ptr<B> &b)
        {
            b_ptr=b;
        }
        A()
        {
            std::cout<<"A constructor\n";
        }
        ~A()
        {
            std::cout<<"A destructor\n";
        }
};

class B
{
    //std::shared_ptr<A> a_ptr; cannot be shared because if then we wont deallocate memory
    std::weak_ptr<A> a_ptr;
    public:
        void setA(std::shared_ptr<A> &a)
        {
            a_ptr=a;
        }
        B()
        {
            std::cout<<"B constructor\n";
        }
        ~B()
        {
            std::cout<<"B destructor\n";
        }
};

int main()
{
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->setB(b);
    b->setA(a);
    std::cout<<a.use_count()<<" "<<b.use_count()<<'\n';
    return 0;
}