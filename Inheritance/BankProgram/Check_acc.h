#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class Check_acc : public Account
{
    friend std::ostream &operator<<(std::ostream &os, Check_acc &acc);

private:
    static constexpr char *default_name = "Checking account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fee = 1.50;

protected:
    double fee;

public:
    Check_acc(std::string name = default_name, double balance = default_balance, double fee = default_fee);
    bool withdraw(double amount);
};

#endif