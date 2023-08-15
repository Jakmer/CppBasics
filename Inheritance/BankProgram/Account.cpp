#include "Account.h"
#include <iostream>

Account::Account(std::string name, double balance) : name{name}, balance{balance}
{
}

bool Account::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}
bool Account::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        return true;
    }
    else
        return false;
}
double Account::get_balance() const
{
    return balance;
}

std::ostream &operator<<(std::ostream &os, Account &acc){
    os<<"[Acount: "<< acc.name<<":"<<acc.balance<<" ]\n";
    return os;
}