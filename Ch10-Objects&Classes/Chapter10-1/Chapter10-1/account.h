#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <iostream>

class Account{
private:
	std::string depositorName;
	std::string accnNum;
	double balance;
public:
	Account(const std::string name, const std::string number, double bal);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};

#endif
