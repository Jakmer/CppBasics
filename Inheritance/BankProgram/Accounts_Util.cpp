#include "Accounts_Util.h"
#include <iostream>

void display(std::vector<Account> &acc)
{
    std::cout << "===========Accounts================\n";
    for ( auto &i : acc)
        std::cout << i;
}
void withdraw(std::vector<Account> &acc, double amount)
{
    std::cout << "===========Withdrawing from accounts================\n";
    for (auto &i : acc)
    {
        if (i.withdraw(amount))
            std::cout << "Withdrew: " << amount << " from " << i;
        else
            std::cout << "Failed withdrawal of: " << amount << " from " << i;
    }
}
void deposit(std::vector<Account> &acc, double amount)
{
    std::cout << "===========Depositing from accounts================\n";
    for ( auto &i : acc)
    {
        if (i.deposit(amount))
            std::cout << "Deposited: " << amount << " from " << i;
        else
            std::cout << "Failed deposit of: " << amount << " from " << i;
    }
}

void display(std::vector<Saving_acc> &acc)
{
    std::cout << "===========Saving accounts================\n";
    for ( auto &i : acc)
        std::cout << i;
}
void withdraw(std::vector<Saving_acc> &acc, double amount)
{
    std::cout << "===========Withdrawing from saving accounts================\n";
    for ( auto &i : acc)
    {
        if (i.withdraw(amount))
            std::cout << "Withdrew: " << amount << " from " << i;
        else
            std::cout << "Failed withdrawal of: " << amount << " from " << i;
    }
}
void deposit(std::vector<Saving_acc> &acc, double amount)
{
    std::cout << "===========Depositing from saving accounts================\n";
    for (auto &i : acc)
    {
        if (i.deposit(amount))
            std::cout << "Deposited: " << amount << " from " << i;
        else
            std::cout << "Failed deposit of: " << amount << " from " << i;
    }
}