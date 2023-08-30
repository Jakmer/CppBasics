#include <iostream>

void f1()
{
    int x {100};

    std::cout<<x<<'\n';

    auto l = [x]() mutable{
        x+=100;
        std::cout<<x<<'\n';
    };
    
    l();
    std::cout<<x<<'\n';

    l();
    std::cout<<x<<'\n';
}

void f2()
{
    int x {100};

    std::cout<<x<<'\n';

    auto l = [&x]() mutable{
        x+=100;
        std::cout<<x<<'\n';
    };
    
    l();
    std::cout<<x<<'\n';

    l();
    std::cout<<x<<'\n';
}

void f3()
{
    int x {100};
    int y {10};

    std::cout<<x<<" "<<y<<'\n';

    auto l = [=,&x]() mutable{
        x+=100;
        y++;
        std::cout<<x<<" "<<y<<'\n';
    };
    
    l();
    std::cout<<x<<" "<<y<<'\n';

    l();
    std::cout<<x<<" "<<y<<'\n';
}

int main()
{
    f1();
    std::cout<<"=====================\n";
    f2();
    std::cout<<"=====================\n";
    f3();

    return 0;
}