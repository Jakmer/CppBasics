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

    return 0;
}