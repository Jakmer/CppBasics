#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ofstream out_file{"ROMEOANDJULIET.txt"};
    std::ifstream in_file{"romeoandjuliet.txt"};

    if (!out_file || !in_file)
    {
        std::cerr << "Error: cannot open file\n";
    }

    int count{1};
    std::string line;

    while (std::getline(in_file, line))
    {
        if (line.size() == 1)
        {
            out_file << line;
            continue;
        }
        out_file << std::setw(7) << std::left << count << line;
        count++;
    }

    out_file.close();
    in_file.close();

    return 0;
}