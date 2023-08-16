#include "TrustAccount.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, Trust_acc &acc)
{
    os << "[Trust account: " << acc.name << ":" << acc.balance << " rate: " << acc.rate << " ]\n";
    return os;
}

Trust_acc::Trust_acc(std::string name, double balance, double rate) : Saving_acc(name, balance, rate), counter(0) {}

bool Trust_acc::withdraw(double amount)
{
    if (counter < 3 && amount < 0.2 * balance)
    {
        counter++;
        return Saving_acc::withdraw(amount);
    }
    else
        return false;
}

bool Trust_acc::deposit(double amount)
{
    if (amount >= 5000)
        balance+=50;       
    return Account::deposit(amount);
}
