/*1. Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.*/

/*5. Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument*/

#include <iostream>
#include "account.h"

int main(){
	Account account("Popescu Ion","1289",520);
	account.show();
	account.deposit(100);
	account.show();
	account.withdraw(100);
	account.show();

	return 0;
}
