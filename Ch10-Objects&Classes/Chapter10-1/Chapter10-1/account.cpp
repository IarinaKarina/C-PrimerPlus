#include "account.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

//Creating an object and initializing it.
Account::Account(const std::string name, const std::string number, double bal){
		depositorName=name;
		accnNum=number;
		balance=bal;
}

// Displaying the depositor’s name, account number, and balance
void Account::show(void) const{
	cout<<"Depositor's name: "<<depositorName<<endl;
	cout<<"Account number: "<<accnNum<<endl;
	cout<<"Balance= "<<balance<<endl;
}

//Depositing an amount of money given by an argument
void Account::deposit(double cash){
	balance+=cash;
}

//Withdrawing an amount of money given by an argument*/
void Account::withdraw(double cash){
	balance-=cash;
}