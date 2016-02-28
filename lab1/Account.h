#ifndef ACCOUNT_H
#define ACCOUNT_H

/** 
 \author	Cristian Gonzalez
 \file 		Account.h
 Description: This file begins the class declaration of Account
*/

class Account {
public:

	//constructor

	/** constructor for class Account
		Account will at least declare balance and interest_rate
	*/
	Account();

	/** constructor for class Account
		Account with parameters will at least declare balance and interest_rate based on user's input
		@param amount argument that will be related to balance
		@param rate argument that will be related to interest_rate
	*/
	Account(double amount, double rate);

	
	//mutators

	/** mutator function for class Account
		deposit will add money to the class Account
		@param amount argument that will be related to balance 
	*/
	void deposit(double amount);

	/** mutator function for class Account
		withdraw will subtract money from the class Account
		@param amount argument that will be related to balance 
	*/
	bool withdraw(double amount);

	/** mutator function for class Account
		set_interest_rate will modify the interest rate from the class Account
		@param rate argument that will be related to interest_rate
	*/
	void set_interest_rate(double rate);

	/** mutator function for class Account
		add_interest will add money to the class Account by compounding interest
	*/
	void add_interest();

    
    //accessors

    /** accessor function for class Account
		query will return the money avaiable from the class Account
	*/
	double query() const;

	/** accessor function for class Account
		get_interest_rate will return the interest rate on the class Account
	*/
	double get_interest_rate() const;

private:
	double balance;
	double interest_rate;
};

#endif