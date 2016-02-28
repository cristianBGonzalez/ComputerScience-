/** 
 \author	Cristian Gonzalez
 \file 		Bank.cpp
 Description: This file begins the class declaration of Account
*/
#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

Bank::Bank(): savings(0,0), checkings(0,0){}

Bank::Bank(double savings_amount, double checking_amount): savings(savings_amount,0), checkings(checking_amount,0){}

void Bank::deposit(double amount, string account)
{
	if (account == "S"){
		savings.deposit(amount);
		cout << "Successful deposit to Savings." << endl;
		cout << "Savings:   $" << savings.query() << endl;
	}

	else if (account == "C"){
		checkings.deposit(amount);
		cout << "Successful deposit to Checkings." << endl;
		cout << "Checkings: $" << checkings.query() << endl;
	}

	else cout << "Use either \"S\" for Savings or \"C\" for Checkings" << endl; 
}

void Bank::withdraw(double amount, string account)
{
	if (account == "S"){
		if (savings.withdraw(amount)){
			cout << "Successful withdraw from Savings.\n";
		}

		else cout << "Not enough in the Savings, $5 penalty charged.\n";
		cout << "Savings:   $" << savings.query() << endl;
	}

	else if (account == "C"){
		if(checkings.withdraw(amount)){
			cout << "Successful withdraw from Checkings.\n";
		}

		else cout << "Not enough in the Checkings, $5 penalty charged.\n";
		cout << "Checkings: $" << checkings.query() << endl;
	}

	else cout << "Use either \"S\" for Savings or \"C\" for Checkings" << endl; 
}

void Bank::transfer(double amount, string account)
{
	if (account == "S"){
		if (savings.withdraw(amount)){
			checkings.deposit(amount);
			cout << "Successful transfer from Savings to Checkings.\n";
		}

		else cout << "Not enough in the Savings, $5 penalty charged.\n";
		cout << "Savings:   $" << savings.query() << endl;
		cout << "Checkings: $" << checkings.query() << endl;
	}

	else if (account == "C"){
		if (checkings.withdraw(amount)){
			savings.deposit(amount);
			cout << "Successful transfer from Checkings to Savings.\n";
		}

		else cout << "Not enough in the Checkings, $5 penalty charged.\n";
		cout << "Savings:   $" << savings.query() << endl;
		cout << "Checkings: $" << checkings.query() << endl;
	}
	
	else cout << "Use either \"S\" for Savings to Checkings or \"C\" for Checkings to Savings" << endl; 
}

void Bank::print_balances() const
{
	cout << "Savings:   $" << savings.query() << endl;
	cout << "Checkings: $" << checkings.query() << endl;
}