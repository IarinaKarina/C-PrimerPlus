/*5. Consider the following structure declaration:
struct customer {
char fullname[35];
double payment;
};
Write a program that adds and removes customer structures from a stack, represented
by a Stack class declaration. Each time a customer is removed, his or her
payment should be added to a running total, and the running total should be
reported. Note: You should be able to use the Stack class unaltered; just change the
typedef declaration so that Item is type customer instead of unsigned long.
*/

#include "customer.h"
#include <iostream>
#include <cctype>	//for toupper, isalpha


int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	Stack st;		//create an empty stack
	char ch;
	Customer po;
	double total=0.0;

	cout<<"Please enter A to add a customer,\n"
		<<"P to process a customer or Q to quit\n";
	while(cin>>ch && toupper(ch)!='Q'){      //to check either q or Q
		while(cin.get()!='\n')
			continue;
		if(!isalpha(ch)){     //"scream" if is not an alphanumeric input
			cout<<'\a';
			continue;
		}
		switch(toupper(ch)){
		case 'A': cout<<"Enter a Customer to add:\n";
			cout<<"Fullname: ";
			cin.getline(po.fullname,35);
			cout<<"Payment: ";
			cin>>po.payment;
			if(st.isfull())
				cout<<"Stack is already full\n";
			else 
				st.push(po);
			break;
		case 'P': if(st.isempty())
					  cout<<"Stack is already empty\n";
				  else{
					  st.pop(po);
					  total+=po.payment;
				  }
				break;
		}
		cout<<"Please enter A to add a customer,\n"
		<<"P to process a customer or Q to quit\n";
	}
	cout<<"The total after the customers are removed is:"<<total<<endl;

	return 0;
}
