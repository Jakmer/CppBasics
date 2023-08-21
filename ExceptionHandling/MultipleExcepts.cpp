#include <iostream>

double divide(int a, int b)
{
    if (a < 0 || b < 0)
        throw std::string("Negative number!");
    if (b == 0)
        throw 0;
    return static_cast<double>(a) / b;
}

int main()
{
    double result;

    try
    {
        result = divide(10, -3);
        std::cout << result << '\n';
    }
    catch (int &ex)
    {
        std::cerr << "Division by zero!\n";
    }
    catch(std::string &ex)
    {
        std::cout<<ex<<"\n";
    }

    return 0;
}