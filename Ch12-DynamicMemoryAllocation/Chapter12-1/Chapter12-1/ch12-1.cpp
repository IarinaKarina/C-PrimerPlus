/*1. Consider the following class declaration:
	see the header file
Provide the implementation for this class and write a short program that uses all
the member functions.*/
#include<iostream>
#include"cow.h"

int main(){
	using std::cout;
	using std::cin;
	using std::endl;

	Cow one;
	one.ShowCow();

	Cow two("Rosita","eating grass",240);
	two.ShowCow();

	one=two;
	one.ShowCow();

	return 0;
}
