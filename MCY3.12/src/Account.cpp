#include <iostream>
#include"Account.h"
using namespace std;
Account::Account(int initialBalance)
{
    int Balance=0;
    if(initialBalance>=0)
        Balance=initialBalance;
    if (Balance<0)
        cout<<"Error:Initial balance is invalid.\n"<<endl;
}

void Account::credit(int amountA)
{
    balance=balance+amountA;
}
void Account::debit(int amountB)
{


if(amountB>balance)
    {cout<<"Debit amount exceeded account account balance.\n"<<endl;
    balance=balance;
     }
if(amountB<=balance)
    balance=balance-amountB;
}
int Account::getBalance()
{
    return balance;
}
