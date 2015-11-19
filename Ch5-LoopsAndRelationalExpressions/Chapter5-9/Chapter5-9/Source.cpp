/*9. Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.*/

#include <iostream>
#include <string>

int main(){
	std::string words;
	int count=0;

	std::cout<<"Enter words until \"done\":\n";
	do{
		std::cin>>words;
		count ++;
	} while(words!="done");

	std::cout<<"You entered a total of "<<count-1<<" words\n";

	return 0;
}