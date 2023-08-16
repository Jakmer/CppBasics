#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H

#include <iostream>
#include "Account.h"

class Saving_acc : public Account
{
    friend std::ostream &operator<<(std::ostream &os, Saving_acc &acc);

protected:
    static constexpr char *default_name = "Saving account";
    static constexpr double default_balance = 0.0;
    static constexpr int default_rate = 0.0;
    int rate;

public:
    Saving_acc(std::string name = default_name, double balance = default_balance, int rate = default_rate);
    bool deposit(double amount);
};

#endif