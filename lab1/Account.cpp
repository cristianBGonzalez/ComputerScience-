/** 
 \author	Cristian Gonzalez
 \file 		Account.cpp
 Description: This file constructs the class Account's member function
*/

#include <iostream>
#include <cmath>
#include "Account.h"
using namespace std;

Account::Account(): balance(0), interest_rate(0){}

Account::Account(double amount, double rate): balance(amount), interest_rate(rate){}

void Account::deposit(double amount)
{
	balance += amount;
}

bool Account::withdraw(double amount)
{
    bool status;

     //penalty for overdrawing acount
    if (amount > balance){
	    //penalty points in $
	    balance -= 5;
	    status = false;
	}

	//subtract money from account
	else{
		balance -= amount;
		status = true;
	}

	return status;
}

void Account::set_interest_rate(double rate)
{
	interest_rate = rate;
}

void Account::add_interest()
{
	balance = balance * (1 + interest_rate)

double Account::query() const
{
	return balance;
}

double Account::get_interest_rate() const
{
	return interest_rate;
}