#include "customer.h"

Stack::Stack(){     //creates an empty stack
	top=0;
}

bool Stack::isempty() const{
	return top==0;
}

bool Stack::isfull() const{
	return top==MAX;
}

bool Stack::push(const Customer& item){
	if (top<MAX){
		customers[top++]=item;
		return true;
	}
	else return false;
}

bool Stack::pop(Customer& item){
	if(top>0){
		item=customers[--top];
		return true;
	}
	else return false;
}