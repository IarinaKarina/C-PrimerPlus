/*4.Write a program that asks the user to enter his or her age.The program then should
display the age in months:
Enter your age: 29
Your age in months is 384.*/

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
int main(){
	int age;
	int birthMonth;
	time_t rawTime;
	struct tm* date;

	std::cout<<"Enter your age: ";
	std::cin>>age;
	std::cout<<"Enter the number of the month of your birthtime: ";
	std::cin>>birthMonth;
	//get the current month
	time(&rawTime);
	date=localtime(&rawTime);
	
	std::cout<<"Your age in months is "<<age*12+date->tm_mon-birthMonth<<std::endl;

	return 0;
}

#endif