// Example5-DynamicObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingsAccount.h"
#include "SuperSavingsAccount.h"
using namespace std; 

int main()
{
    BankAccount b1; // static creation of objects 

    BankAccount* ptr1 = &b1;

    BankAccount* ptr2 = &b1; // shallow copy 

    BankAccount b3(b1); 
    // deep copy 
  /*  b3.deposit(b1.getBalance());
    b3.setOwnerName(b1.getOwnerName());*/



    //BankAccount* b2 = new BankAccount();// Dynamic object 

    //delete b2; // deallocate memory 

    //b2 = new BankAccount();

    int size = 4;
    //BankAccount* clientAccounts = new BankAccount[size];
    //string tempName;
    //float tempBalance;
    //for (int i = 0;i < size;i++)
    //{
    //    cout << "Enter Owner name:\n";
    //    
    //    cin >> tempName;

    //    cout << "Enter Balance:\n";
    //    cin >> tempBalance;
    //    clientAccounts[i].setOwnerName(tempName);
    //    clientAccounts[i].deposit(tempBalance);
    //}


    BankAccount** dynamicClientAccounts = new BankAccount * [size];

    dynamicClientAccounts[0] = new BankAccount();
    dynamicClientAccounts[1] = new SavingsAccount();
    dynamicClientAccounts[2] = new SavingsAccount();
    dynamicClientAccounts[3] = new SuperSavingsAccount();

    dynamicClientAccounts[0]->deposit(300);
    dynamicClientAccounts[1]->deposit(300);
    dynamicClientAccounts[2]->deposit(300);
    dynamicClientAccounts[3]->deposit(300);

    for (int i = 0;i < size;i++)
    {
        dynamicClientAccounts[i]->withdraw(50);

    }


    for (int i = 0;i < size;i++)
    {
        cout << dynamicClientAccounts[i]->getBalance()<<endl;

    }

  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
