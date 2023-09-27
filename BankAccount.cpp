#include "BankAccount.h"

string BankAccount::getOwnerName()
{
    return ownerName;
}

void BankAccount::setOwnerName(string o)
{
    ownerName = o;
}

float BankAccount::getBalance()
{
    return balance;
}

void BankAccount::deposit(float amount)
{
    balance += amount;
}

void BankAccount::withdraw(float amount)
{
    balance -= amount;
}

BankAccount::BankAccount()
{
}

BankAccount::BankAccount(string o, float b)
{
    setOwnerName(o);
    balance = b;
}
