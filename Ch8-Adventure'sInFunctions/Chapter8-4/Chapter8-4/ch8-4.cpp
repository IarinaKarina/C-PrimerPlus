/*4. The following is a program skeleton:*/

/*Complete this skeleton by providing the described functions and prototypes. Note
that there should be two show() functions, each using default arguments. Use
const arguments when appropriate. Note that set() should use new to allocate
sufficient space to hold the designated string.The techniques used here are similar
to those used in designing and implementing classes. (You might have to alter the
header filenames and delete the using directive, depending on your compiler.)
*/
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()

struct stringy {
	char * str; // points to a string
	int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy&, char*);
void show(const stringy);
void show(const stringy, int n);
void show(const char*);
void show(const char*, int);

int main(){
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing); // first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany
	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");
	return 0;
}

void set(stringy& beany, char* arg){
	char* pstring=new char[strlen(arg)+1];
	beany.str=pstring;
	strcpy(beany.str,arg);
	beany.ct=strlen(beany.str);
}

void show(const stringy beany){
	cout<<"Str member is: "<<beany.str<<endl;
	cout<<"\thas a length of: "<<beany.ct<<endl;
}

void show(const stringy beany,int n){
	for(int i=0;i<n;i++){
		cout<<"Str member is: "<<beany.str<<endl;
		cout<<"\thas a length of: "<<beany.ct<<endl;
	}
}

void show(const char* text){
	cout<<text<<endl;
}

void show(const char* text, int n){
	for(int i=0;i<n;i++){
		cout<<text<<endl;
	}
}
#endif