#include <iostream>

void func_b();
void func_c();

void func_a()
{
    std::cout << "Starting function a\n";
    func_b();
    std::cout << "Ending function a\n";
}

void func_b()
{
    std::cout << "Starting function b\n";
    try
    {
        func_c();
    }
    catch (int &ex)
    {
        std::cerr << "Caught exception in func_b\n";
    }
    std::cout << "Ending function b\n";
}

void func_c()
{
    std::cout << "Starting function c\n";
    throw 0;
    std::cout << "Ending function c\n";
}

int main()
{
    std::cout << "===========================\n";
    try
    {
        func_a();
    }
    catch (int &ex)
    {
        std::cerr << "Caught exception in main\n";
    }
    std::cout << "===========================\n";

    /*
        Now when func_b catch exception function close properly
    ----Output----------
===========================
Starting function a
Starting function b
Starting function c
Caught exception in func_b
Ending function b
Ending function a
===========================
    */

    return 0;
}