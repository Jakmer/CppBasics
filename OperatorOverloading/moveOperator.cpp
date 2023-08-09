#include <iostream>
#include <cstring>

class Move
{
private:
    char *data;

public:
    Move() // No args constructor
    {
        std::cout << "No args constructor called\n";
        data = new char[1];
        data[0]='\0';
    }

    Move(const char *str)
    {
        std::cout << "Arg constructor called\n";
        data = new char[strlen(str)+1];
        strcpy(data,str);
    }

    Move(const Move &source) : data(nullptr)
    {
        data = new char[strlen(source.data)+1];
        strcpy(data,source.data);
        std::cout<<"Copied\n";
    }

    Move(Move &&source):data(source.data)
    {
        source.data=nullptr;
        std::cout<<"Moved\n";
    }


    ~Move()
    {
        delete[] data;
        std::cout << "Destructor called \n";
    }

    Move &operator=(const Move &source){
        if(this==&source)
            return *this;
        delete[] data;
        data = new char[strlen(source.data)+1];
        strcpy(data,source.data);
        std::cout<<"Copy operator\n";
        return *this;
    }

    Move &operator=(Move &&source){
        if(this==&source)
            return *this;
        data = source.data;
        source.data = nullptr;
        std::cout<<"Move operator\n";
        return *this;
    }

    void display()
    {
        std::cout<<data<<"\n";
    }
    void setData(const char* str){
        data = new char[strlen(str)+1];
        strcpy(data,str);
    }
};

int main()
{
    Move a {"Hello"};
    Move b;

    b=a;
    a.setData("Hola");
    
    a.display();
    b.display();

    a = Move{"Ciao"};
    b = "Czesc";

    a.display();
    b.display();

    return 0;
}