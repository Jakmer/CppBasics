#include <queue>
#include <iostream>

void f1()
{
    std::priority_queue<int> s1;

    for(int i : {13,12,3,7,21,9})
    {
        s1.push(i);
        std::cout<<"Top: "<<s1.top()<<"\n";
    }

    s1.pop();
    s1.push(50);

    while(!s1.empty())
    {
        std::cout<<'['<<s1.top()<<"]\n";
        s1.pop();
    }
    
}

int main()
{
    f1();
    return 0;
}