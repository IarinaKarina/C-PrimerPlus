/*3. Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.*/

#include <iostream>

int main(){
	int no,sum=0;

	do{
		std::cout<<"Enter a number, 0 to quit: ";
		std::cin>>no;
		sum+=no;
	}while(no!=0);

	std::cout<<"The sum of all numbers is: "<<sum<<std::endl;

	return 0;
}