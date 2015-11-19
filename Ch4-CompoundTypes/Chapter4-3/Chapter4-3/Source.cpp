/*3. Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>	//strcpy, strcat

int main(){
	char first[20];
	char last[20];
	
	std::cout<<"What is your first name? ";
	std::cin.getline(first,20);
	std::cout<<"What is your last name? ";
	std::cin.getline(last,20);
	
	char *big=new char[strlen(first)+strlen(last)+3];
	strcpy(big,last);
	strcat(big,", ");
	strcat(big,first);
	std::cout<<"Here's the information in a single string: "<<big<<std::endl;;
	delete []big;
	return 0;
}

#endif
