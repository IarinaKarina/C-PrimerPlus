/*7. Write a program that reads input a word at a time until a lone q is entered.The
program should then report the number of words that began with vowels, the number
that began with consonants, and the number that fit neither of those categories.
One approach is to use isalpha() to discriminate between words beginning with
letters and those that don’t and then use an if or switch statement to further identify
those passing the isalpha() test that begin with vowels.A sample run might
look like this:
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/

#include <iostream>
#include <cctype>
const int wordSize=10; 

int main(){
	using namespace std;
	char word[wordSize]="0";
	int vowels=0,consonants=0,other=0;

	cout<<"Enter a word (q to quit): ";
	cin>>word;
	while(word[0]!='q' && word[0]!='Q'){
		if(isalpha(word[0])){
			switch(word[0]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels++;
				break;
			default:
				consonants++;
				break;
			}
		}
		else other++;
		cout<<"Enter a word (q to quit): ";
		cin>>word;
	}
	cout<<vowels<<" words beginning with vowels\n";
	cout<<consonants<<" words beginning with consonants\n";
	cout<<other<<" others\n";

	return 0;
}
		

