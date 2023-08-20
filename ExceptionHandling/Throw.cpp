#include <iostream>

double divide(int a, int b)
{
    if (b == 0)
        throw 0;
    return a / b;
}

int main()
{
    double result;

    try
    {
        result = divide(10, 0);
        std::cout << result << '\n';
    }
    catch (int &ex)
    {
        std::cout << "Division by zero!\n";
    }

    return 0;
}