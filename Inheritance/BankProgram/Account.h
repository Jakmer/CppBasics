#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, Account &acc);

private:
    static constexpr char *default_name = "Account";
    static constexpr double default_balance = 0.0;

protected:
    double balance;
    std::string name;

public:
    Account(std::string name = default_name, double balance = default_balance);
    bool withdraw(double amount);
    bool deposit(double amount);
    double get_balance()const;
};

#endif