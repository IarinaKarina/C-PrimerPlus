/*1. Write a C++ program that requests and displays information as shown in the following
example of output:
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
Note that the program should be able to accept first names that comprise more
than one word. Also note that the program adjusts the grade downward—that is, up
one letter.Assume that the user requests an A, a B, or a C so that you don’t have to
worry about the gap between a D and an F.*/


#include <iostream>
#include <cctype>	//for toupper

int main(){
	using namespace std;
	char first[20];
	char last[20];
	char grade;
	int  age;

	cout<<"What is your first name? ";
	cin.getline(first,20);
	cout<<"What is your last name? ";
	cin.getline(last,20);
	cout<<"What letter grade do you deserve? ";
	cin>>grade;
	cout<<"What is your age? ";
	cin>>age;

	cout<<"Name: "<<last<<", "<<first<<endl;
	//convert grade in upper letters to recognise either 
	//you enter small or upper case
	switch(toupper(grade)){
	case 'A':
		cout<<"Grade: B"<<endl;
		break;
	case 'B':
		cout<<"Grade: C"<<endl;
		break;
	case 'C':
		cout<<"Grade: C"<<endl;
		break;
	};
	cout<<"Age: "<<age<<endl;

	return 0;
}
