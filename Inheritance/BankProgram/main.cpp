#include "Account.h"
#include "SavingAccount.h"
#include "Accounts_Util.h"
#include <iostream>

int main()
{
    std::cout.precision(2);
    std::cout<<std::fixed;
    
    std::vector<Account> accounts;

    accounts.push_back(Account{});
    accounts.push_back(Account{"Alice"});
    accounts.push_back(Account{"Bob",2000});
    accounts.push_back(Account{"Fred",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    std::vector<Saving_acc> sav_accounts;

    sav_accounts.push_back(Saving_acc{});
    sav_accounts.push_back(Saving_acc{"A"});
    sav_accounts.push_back(Saving_acc{"B",2000});
    sav_accounts.push_back(Saving_acc{"F",5000,5});

    display(sav_accounts);
    deposit(sav_accounts,1000);
    withdraw(sav_accounts,2000);

    std::vector<Check_acc> check_accounts;

    check_accounts.push_back(Check_acc{});
    check_accounts.push_back(Check_acc{"Alice"});
    check_accounts.push_back(Check_acc{"Bob",2000});
    check_accounts.push_back(Check_acc{"Fred",5000});

    display(check_accounts);
    deposit(check_accounts,1000);
    withdraw(check_accounts,2000);

    std::vector<Trust_acc> trust_accounts;

    trust_accounts.push_back(Trust_acc{});
    trust_accounts.push_back(Trust_acc{"A"});
    trust_accounts.push_back(Trust_acc{"B",2000});
    trust_accounts.push_back(Trust_acc{"F",5000,5});

    display(trust_accounts);
    deposit(trust_accounts,1000);
    withdraw(trust_accounts,2000);
    withdraw(trust_accounts,20);
    withdraw(trust_accounts,20);
    withdraw(trust_accounts,20);
    withdraw(trust_accounts,20);
    deposit(trust_accounts,5000);

    return 0;
}