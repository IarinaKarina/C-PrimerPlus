/*8. Write a program that opens a text file, reads it character-by-character to the end of
the file, and reports the number of characters in the file.*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	//opens a text file       
	ifstream inFile;
	inFile.open("D:\alphabet.txt");
	if(!inFile.is_open()){
		cout<<"The file could not be opened!"<<endl;
		cout<<"Program terminating!"<<endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	int count=0;
	//read char by char
	//counts the no of char
	while(inFile){
		inFile>>ch;
		count++;
	}

	//reports the no of characters
	cout<<"In the file opened are "<<count<<" characters\n"; 
	return 0;
}