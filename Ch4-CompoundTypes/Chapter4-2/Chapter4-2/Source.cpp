/*2. Rewrite Listing 4.4, using the C++ string class instead of char arrays.*/

#include <iostream>
#include <string>

int main(){
	using namespace std;
	string first,last;
	char grade;
	int  age;

	cout<<"What is your first name? ";
	getline(cin,first);
	cout<<"What is your last name? ";
	getline(cin,last);
	cout<<"What letter grade do you deserve? ";
	cin>>grade;
	cout<<"What is your age? ";
	cin>>age;

	cout<<"Name: "<<last<<", "<<first<<endl;;
	if(grade=='A')	
		cout<<"Grade: B"<<endl;
	if(grade=='B')	
		cout<<"Grade: C"<<endl;
	if(grade=='C')	cout<<"Grade: C"<<endl;
	cout<<"Age: "<<age<<endl;

	return 0;
}
