/** 
 \author	Cristian Gonzalez
 \file 		Bank_main.cpp
 Description: This file begins the class declaration of Account
*/
#include <iostream>
#include <string>
#include "Bank.h"
using namespace std;

int main()
{
	Bank csusb_bank(1000, 100);

	csusb_bank.deposit(50, "S");
	csusb_bank.withdraw(10, "CH");
	csusb_bank.withdraw(10, "C");
	csusb_bank.transfer(40, "S");
	csusb_bank.withdraw(150, "C");
	csusb_bank.print_balances();
}