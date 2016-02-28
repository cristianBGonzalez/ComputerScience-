#ifndef BANK_H
#define BANK_H

/** 
 \author	Cristian Gonzalez
 \file 		Bank.h
 Description: This file begins the class declaration of Bank, which is derived from class Account.
*/

#include <string>
#include "Account.h"
using namespace std;

class Bank{

public:

	//constructors

	/** constructor for class Bank
		Bank will at least declare savings and checkings set to 0
	*/
	Bank();

	/** constructor for class Bank
		Bank with parameters will at least declare savings and checkings based on user's input
		@param savings_amount argument that will be related to savings
		@param checking_account argument that will be related to checkings
	*/
	Bank(double savings_amount, double checking_account);

	
	//mutators

	/** mutator function for class Bank
		deposit will add money to the class Bank
		@param amount argument that will be related to balance from class Account
		@param account argument that will determine which class Account to use
	*/
	void deposit (double amount, string account);

	/** mutator function for class Bank
		withdraw will add money to the class Bank
		@param amount argument that will be related to balance from class Account
		@param account argument that will determine which class Account to use
	*/
	void withdraw(double amount, string account);

	/** mutator function for class Bank
		transfer will add money from one Account to another Account in class Bank
		@param amount argument that will be related to balance from class Account
		@param account argument that will determine which class Account to transfer from
	*/
	void transfer(double amount, string account);

	
	//accessor

	/** accessor function for class Bank
		print_balances will return the money avaiable from all Accounts in class Bank
	*/
	void print_balances() const;

private:
	Account savings;
	Account checkings;
};

#endif