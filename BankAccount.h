#pragma once
#include <string>
using namespace std;
class BankAccount
{
protected:
	string ownerName;
	float balance; 
public: 
	string getOwnerName();
	void setOwnerName(string o);

	float getBalance();
	// void setBalance(); this will be handled by deposit and withdraw

	void deposit(float amount); 
	virtual void withdraw(float amount);// Virtual enables runtime/dynamic binding
	BankAccount();
	BankAccount(string o, float b);
	BankAccount(BankAccount &c);
};

