#ifndef TRUST_H
#define TRUST_H
#include "SavingAccount.h"

class Trust_acc : public Saving_acc
{
    friend std::ostream &operator<<(std::ostream &os, Trust_acc &acc);

private:
    static constexpr char *default_name = "Trust account";
    int counter;
public:
    Trust_acc(std::string name = default_name, double balance = default_balance, double rate = default_rate);
    bool withdraw(double amount);
    bool deposit(double amount);
};

#endif