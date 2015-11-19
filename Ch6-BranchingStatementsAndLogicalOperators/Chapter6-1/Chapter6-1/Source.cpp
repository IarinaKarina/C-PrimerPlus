/*1. Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)*/

#include <iostream>
#include <cctype>

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	char ch;
	
	cout<<"Keyboard input:\n";
	cin.get(ch);
	cout<<endl;

	while(ch!='@'){
		if(!isalpha(ch)){
			cin.get(ch);
			continue;
		}
		else{
			if(islower(ch))
				cout.put(toupper(ch));
			else
				cout.put(tolower(ch));
		cin.get(ch);
			}
	}

	return 0;
}