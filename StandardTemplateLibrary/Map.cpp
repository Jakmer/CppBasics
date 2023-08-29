#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

template <typename T1, typename T2>
void display(std::map<T1, T2> &m)
{
    std::for_each(m.begin(), m.end(), [](auto x)
                  { std::cout << x.first << " " << x.second << '\n'; });
}

std::string clean_string(const std::string &s) {
    std::string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

void f1()
{
    std::map<char, int> m1{
        {'A', 1}, {'B', 2}, {'C', 3}};

    display(m1);

    m1.insert(std::make_pair('X', 10));
    m1.at('B') = 999;

    display(m1);

    auto it = m1.find('C');
    if (it != m1.end())
        std::cout << it->first << ' ' << it->second << '\n';
}

void f2()
{
    std::ifstream file {"words.txt"};

    if(!file)
    {
        std::cout<<"Cannot open file\n";
    }

    std::map<std::string,int> words;
    std::string word;

    while(file>>word)
    {
        word = clean_string(word);
        words[word]++;
    }

    file.close();

    display(words);

}

int main()
{
    f1();
    f2();

    return 0;
}