#pragma once
#include "BankAccount.h"
class SavingsAccount :public BankAccount
{
private: 
	float interestRate; 

public: 
	void setInterestRate(float r);
	float getInterestRate();

	SavingsAccount();
	SavingsAccount(string o, float b, float r);

	void withdraw();// override 


};

