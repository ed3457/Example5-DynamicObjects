#include "SavingsAccount.h"

void SavingsAccount::setInterestRate(float r)
{
    interestRate = r;
}

float SavingsAccount::getInterestRate()
{
    return interestRate;
}

SavingsAccount::SavingsAccount()
{
    interestRate = 0.01;
}

SavingsAccount::SavingsAccount(string o, float b, float r):BankAccount(o,b)
{
    setInterestRate(r);
}

void SavingsAccount::withdraw(float amount)
{

    balance -= (amount + 5);
}
