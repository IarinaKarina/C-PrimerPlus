/*5. Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.
*/

#include <iostream>
#include <cstdlib>	//for isalpha

//recursive function
int factorial(int);

int main(){
	int n;
	
	//using a loop to enter various values
	do{
		std::cout<<"Enter a positive value or 0 to quit: ";
		std::cin>>n;
		if(n>0)
			std::cout<<n<<"!="<<factorial(n)<<std::endl;
	}while(n!=0);

	std::cout<<"Done!\n";
	return 0;
}

//recursive function that returns the factorial
//of the integer argument
int factorial(int arg){
	if(arg==1)
		return 1;
	else
		return arg*factorial(arg-1);
}