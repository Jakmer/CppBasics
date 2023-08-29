#include <iostream>
#include <deque>
#include <algorithm>

template <typename T>
void display(std::deque<T> &dq)
{
    std::for_each(dq.begin(), dq.end(), [](T x)
                  { std::cout << x << " "; });
    std::cout << '\n';
}

void f1()
{
    std::deque<int> dq{1, 2, 3, 4, 5};

    display(dq);
    std::cout << dq.at(0) << " " << dq[1] << '\n';

    dq.pop_back();
    dq.push_back(6);
    dq.pop_front();
    dq.push_front(0);

    display(dq);
}

template <typename T>
bool palindrome(std::deque<T> &dq)
{
    while (!dq.empty())
    {
        if (dq.front() != dq.back())
        {
            return false;
        }
        dq.pop_back();
        dq.pop_front();
    }
    return true;
}

void isPalindrome(std::string &&str)
{
    std::deque<char> dq;
    std::string tmp = str;
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace),
              str.end());       //  removing whitespaces
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    for (const auto &i : str)
    {
        dq.push_back(i);
    }

    if (palindrome(dq))
    {
        std::cout << tmp << " is a palindrome\n";
    }
    else
    {
        std::cout << tmp << " is NOT a palindrome\n";
    }
}

int main()
{
    f1();
    isPalindrome("A Santa at Nasa");
    isPalindrome("Hello world");

    return 0;
}