/*8. Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done). A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.

You should include the cstring header file and use the strcmp() function to
make the comparison test.*/

#include <iostream>
#include <cstring>	//for strcmp

int main(){
	char *words=new char[100];
	int count=0;

	//read one word at a time until "done" is entered
	std::cout<<"Enter words until \"done\":\n";
	do{
		std::cin>>words;
		count ++;
	} while((strcmp(words,"done"))!=0);

	std::cout<<"You entered a total of "<<count-1<<" words\n";
	
	delete [] words;
	return 0;
}