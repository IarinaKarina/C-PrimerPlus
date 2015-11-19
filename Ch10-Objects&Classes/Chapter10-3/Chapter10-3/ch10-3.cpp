/*3. Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
an appropriate golf class declaration. Replace setgolf(golf &, const char*,
int) with a constructor with the appropriate argument for providing initial values.
Retain the interactive version of setgolf() but implement it by using the constructor.
(For example, for the code for setgolf(), obtain the data, pass the data to
the constructor to create a temporary object, and assign the temporary object to the
invoking object, which is *this.)
*/

#include <iostream>
#include "golf.h"

int main(){
	using namespace std;
	Golf golfArr[5];
	int number,i=0;
	char name[40];

	do{
		cout<<"Full name=";
		cin.getline(name,40);
		cout<<"Handicap=";
		cin>>number;
		if(strcmp(name,"")!=0){
			golfArr[i]=Golf(name,number);
			golfArr[i].setgolf(golfArr[i]);
			i++;
		}
		else break;
		cin.get();	//for the enter after handicap
	}while(i<5);

	for(int j=0;j<i;j++)
			golfArr[j].show();

	return 0;
}