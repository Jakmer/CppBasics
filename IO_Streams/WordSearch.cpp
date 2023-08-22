#include <iostream>
#include <fstream>

int main()
{
    std::fstream file {"romeoandjuliet.txt"};

    if(!file)
    {
        std::cerr<<"Error: cannot open file\n";
        return 1;
    }

    std::string word, i;
    int count {0} , countAll {0};

    std::cout<<"Enter a word you want to search: ";
    std::cin>>word;

    while(file>>i)
    {
        if(i.find(word)!=std::string::npos) count++;
        countAll++;
    }
     std::cout<<"Word: "<<word<<" found "<<count<<" times in "<<countAll<<" words\n";

     file.close();

}