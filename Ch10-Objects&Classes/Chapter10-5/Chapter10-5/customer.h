#ifndef CUSTOMER_H_
#define CUSTOMER_H_

struct Customer{
	char fullname[35];
	double payment;
};

class Stack{
private:
	enum{MAX=10};
	Customer customers[MAX];
	int top;	//index for top stack item
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Customer& item);	//return false if stack already full
	bool pop(Customer& item);		//return false if stack already is empty
};

#endif

