#include "SavingAccount.h"

std::ostream &operator<<(std::ostream &os, Saving_acc &acc)
{
    os << "[Saving account: " << acc.name << ":" << acc.balance <<" rate: "<<acc.rate<< " ]\n";
    return os;
}

bool Saving_acc::deposit(double amount)
{
    amount += rate * amount / 100;
    return Account::deposit(amount);
}

Saving_acc::Saving_acc(std::string name, double balance, int rate) : Account(name, balance), rate(rate)
{
}