/*1. Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)
*/

#include <iostream>

double harmonic(int a,int b){
	return 2.0*a*b/(a+b);
}

int main(){
	int x,y;
	
	do{
		std::cout<<"Enter the pair of numbers:"<<std::endl;
		std::cout<<"x= ";
		std::cin>>x;
		std::cout<<"y= ";
		std::cin>>y;
		if(x!=0 && y!=0)
			std::cout<<"Harmonic mean between "<<x<<" and "
			<<y<<" is: "<<harmonic(x,y)<<std::endl;
	}
	while(x!=0 && y!=0);

	std::cout<<"Done!\n";
	return 0;
}
