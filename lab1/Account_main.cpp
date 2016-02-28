/** 
 \author	Cristian Gonzalez
 \file 		Account_main.cpp
 Description: This file begins the class declaration of Account
*/

#include <iostream>
#include "Account.h"
#include <cmath>
using namespace std;

int main()
{
	Account savings(100, .06);

	savings.deposit(20);
	cout << savings.query() << endl;

    // Will attempt to withdraw $50 from savings
	if(savings.withdraw(50))
		cout << "Successful withdraw.\n";
	else cout << "Not enough in the account, $5 penalty charged.\n";
	cout << savings.query() << endl;
	
	// Will attempt to withdraw $100 from savings
	if (savings.withdraw(100))
		cout << "Successful withdraw.\n";
	else cout << "Not enough in the account, $5 penalty charged.\n";
    cout << savings.query() << endl;
    
    // Will do compound interest until savings is above $20,000
    int num_of_compound = 0;
    double initial_balance = savings.query();
    double rate = savings.get_interest_rate();
    while(savings.query() < 19999){
    	savings.add_interest();
    	num_of_compound++;
    }
    double final_balance = savings.query();
    double years = log(final_balance / initial_balance) / (num_of_compound * log(1 + (rate / num_of_compound) ) );
    cout << "your balance of " << savings.query() << " has been accquired in " << years << " years.\n";
}