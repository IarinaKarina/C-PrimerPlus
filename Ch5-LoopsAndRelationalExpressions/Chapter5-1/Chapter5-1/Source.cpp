/*1. Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.*/

#include <iostream>

int main(){
	int x,y,sum=0;

	std::cout<<"Enter first number: ";
	std::cin>>x;
	std::cout<<"Enter second number, bigger then the first one: ";
	std::cin>>y;
	
	for(int i=x;i<=y;i++)
		sum+=i;
	std::cout<<"The sum of all integers between "<<x<<" and "<<y
		<<"= "<<sum<<std::endl;

	return 0;
}
