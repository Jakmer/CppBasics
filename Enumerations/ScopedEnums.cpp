#include <iostream>

enum class Direction
{
    North = 0,
    South = 6,
    East = 3,
    West = 9,
    Unknown = 13
};

enum class Kierunek
{
    North = 100,
    South = 200,
    East = 300,
    West = 400,
    Unknown = 500
};

std::ostream &operator<<(std::ostream &os, const Kierunek &source)
{
    switch (source)
    {
    case Kierunek::North:
        os << "North"
           << "\n";
        break;
    case Kierunek::South:
        os << "South"
           << "\n";
        break;
    case Kierunek::West:
        os << "West"
           << "\n";
        break;
    case Kierunek::East:
        os << "East"
           << "\n";
        break;

    default:
        os << "Cannot identify enum\n";
        break;
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const Direction &source)
{

    switch (source)
    {
    case Direction::North:
        os << "North"
           << "\n";
        break;
    case Direction::South:
        os << "South"
           << "\n";
        break;
    case Direction::West:
        os << "West"
           << "\n";
        break;
    case Direction::East:
        os << "East"
           << "\n";
        break;

    default:
        os << "Cannot identify enum\n";
        break;
    }
    return os;
}

void f1()
{
    Direction d = Direction::North;
    Kierunek k = Kierunek::North;

    std::cout << d << k << "\n";
}

void f2()
{
    Direction d = Direction::North;
    Kierunek k = Kierunek::North;

    int dInt = static_cast<int>(d);
    int kInt = static_cast<int>(k);

    std::cout<<dInt<<" "<<kInt<<"\n";
}

int main()
{
    f1();
    f2();

    return 0;
}