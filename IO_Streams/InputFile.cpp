#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ifstream file;
    file.open("input.txt");

    if (!file)
    {
        std::cerr << "Error: couldn't open file input.txt...\n";
        return 1;
    }

    std::cout << std::setw(45) << std::setfill('=') << "" << std::endl<<std::setfill(' ');
    std::cout << std::setw(15) << std::left << "COUNTRY" << std::setw(15) << std::left << "CAPITAL" << std::setw(15) << std::right << "POPULATION" << std::endl;
    std::cout << std::setw(45) << std::setfill('=') << "" << std::endl<<std::setfill(' ');
    std::string country, capital;
    int population;
    while (file >> country >> capital >> population)
    {
        std::cout << std::setw(15) << std::left << country << std::setw(15) << std::left << capital << std::setw(15) << std::right << population << std::endl;
    }
    file.close();
    return 0;
}