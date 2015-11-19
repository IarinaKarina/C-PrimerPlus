/*3. Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
*/

#include <iostream>
#include <cctype>	//for toupper
#include <string>
using namespace std;

void setLetters(string& word);

int main(){
	
	string oneString="";

	cout<<"Enter a string (q to quit): ";
	getline(cin,oneString);
	while(oneString!="q"){
		setLetters(oneString);
		cout<<"Next string (q to quit): ";
		getline(cin,oneString);
	}

	cout<<"Bye.\n";
	return 0;
}

//converts the contents of the string to uppercase
void setLetters(string& word){
	for(int i=0;i<word.size();i++){
		word[i]=toupper(word[i]);
	}
	cout<<word<<endl;
}