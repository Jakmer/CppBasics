#include "Check_acc.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, Check_acc &acc)
{
    os << "[Checking ccount: " << acc.name << ":" << acc.balance << " rate: " << acc.fee << " ]\n";
    return os;
}

Check_acc::Check_acc(std::string name, double balance, double fee) : Account(name, balance), fee(fee) {}

bool Check_acc::withdraw(double amount)
{
    amount *= (fee + 100) / 100;
    Account::withdraw(amount);
}