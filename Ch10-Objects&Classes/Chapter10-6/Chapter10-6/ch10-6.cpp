/*6. Here’s a class declaration:
		look in the header file
Create member function definitions and a program that exercises the class.
*/

#include <iostream>
#include "move.h"

int main(){
	Move ob1(10,20);
	ob1.showmove();
	ob1.reset();	//reset to the default values
	std::cout<<"After resetting:\n";
	ob1.showmove();
	
	Move ob2;	//default initialization
	std::cout<<std::endl;
	ob2.showmove();
	ob2.reset(10,5);
	std::cout<<"After resetting:\n";
	ob2.showmove();

	return 0;
}
