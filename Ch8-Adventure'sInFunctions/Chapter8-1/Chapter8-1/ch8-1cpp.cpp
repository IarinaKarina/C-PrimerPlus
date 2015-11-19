/*1. Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.
*/

#include <iostream>
#include <string>
using namespace std;

int noTimes=0;		//the number of the function calls set as global variable

void display(string line, int arg=0);
  
int main (){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

	cout<<"Display the function with 2 arguments, once:\n\n";
    display(str,5);
    cout<<"Display the function with 2 arguments, twice:\n\n";
    display(str,3);
    cout<<"Display the function with one argument:\n\n";
    display(str);

	cout<<"Done!\n";
	return 0;
}

void display(string line, int arg){
	noTimes++;
	if(arg>0){
		for(int i=noTimes;i>0;i--)
			cout<<"The string is: "<<line<<endl;
	}
	else
		cout<<"The string is: "<<line<<endl;
}
