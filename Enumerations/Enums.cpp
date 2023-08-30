#include <iostream>

enum Direction
{
    North,
    South,
    East,
    West,
    Unknown
};

std::string DirectionToStr(Direction d)
{
    std::string result;

    switch (d)
    {
    case North:
        result = "North";
        break;
    case South:
        result = "South";
        break;
    case East:
        result = "East";
        break;
    case West:
        result = "West";
        break;

    default:
        result = "Unknown";
        break;
    }

    return result;
}

void f1()
{

    std::cout << North << South << East << West << "\n";

    Direction d{South};

    std::cout << d << " " << DirectionToStr(d) << "\n";
}

std::ostream &operator<<(std::ostream &os, const Direction &d)
{
    switch (d)
    {
    case North:
        os << "North";
        break;
    case South:
        os << "South";
        break;
    case East:
        os << "East";
        break;
    case West:
        os << "West";
        break;

    default:
        os << "Unknown";
        break;
    }

    return os;
}

void f2()
{
    Direction d = Direction(100);
    std::cout << d << " " << DirectionToStr(d) << "\n";
}

std::istream &operator>>(std::istream &is, Direction &d)
{
    int user_input;
    is >> user_input;

    switch (user_input)
    {
    case North:

    case South:

    case East:

    case West:
        d = static_cast<Direction>(user_input);
        break;

    default:
        d= Unknown;
        std::cout<<"Cannot identify input\n";
        break;
    }

    return is;
}

void f3()
{
    Direction d;
    std::cin>>d;
    std::cout<<d<<"\n";
}

int main()
{
    f1();
    f2();
    f3();


    return 0;
}