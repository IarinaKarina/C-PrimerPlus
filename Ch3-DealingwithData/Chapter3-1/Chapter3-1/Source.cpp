/*1. Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response. Also use a const symbolic constant to represent
the conversion factor.*/
/*1 foot = 12 inches*/

#include <iostream>

int main(){
	int inchHeigh;
	const int fact=12;
	
	std::cout<<"Enter your height in integer inches:"
		<<"__________\b\b\b\b\b\b\b\b\b\b";
	std::cin>>inchHeigh;
	std::cout<<"You are "<<(double)inchHeigh/fact<<" feets tall!"<<std::endl;

	return 0;
}