/*4. When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/

#include<iostream>
using namespace std;
const int strsize=30;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main(){
	bop members[10];
	char ch;
	int i=0,noMem=0;

	cout<<"Enter the BOP list of members:\n";
	do{
		cout<<"Member #"<<i+1<<" real name: ";
		cin.getline(members[i].fullname,strsize);
		cout<<"Member #"<<i+1<<" job title: ";
		cin.getline(members[i].title,strsize);
		cout<<"Member #"<<i+1<<" secret BOP name: ";
		cin.getline(members[i].bopname,strsize);
		cout<<"Member #"<<i+1<<" preference: ";
		cin>>(members[i].preference);
		cin.get();	//for the enter after
		i++;
		cout<<"Want more members? y/n: ";
		cin>>ch;
		cin.get();	//for the enter after
	}while(ch!='n');
	noMem=i;
	
	cout<<"Benevolent Order of Programmers Report\n";	
	cout<<"a. display by name b. display by title\n";
	cout<<"c. display by bopname d. display by preference\n";
	cout<<"q. quit\n";
	do{
		cout<<"Please enter a, b, c, d or q:";
		cin>>ch;
		if((ch=='a')||(ch=='b')||(ch=='c')||(ch=='d')||(ch=='q'))
			break;
	}while(1);
	do{
	
		switch(ch){
		case 'a':
			for(i=0;i<noMem;i++)
				cout<<members[i].fullname<<endl;
			break;
		case 'b':
			for(i=0;i<noMem;i++)
				cout<<members[i].title<<endl;
			break;
		case 'c':
			for(i=0;i<noMem;i++)
				cout<<members[i].bopname<<endl;
			break;
		case 'd':
			for(i=0;i<noMem;i++)
				switch(members[i].preference){
				case 0:
					cout<<members[i].fullname<<endl;
					break;
				case 1:
					cout<<members[i].title<<endl;
					break;
				case 2:
					cout<<members[i].bopname<<endl;
					break;
			}
			break;
		case 'q': 
			cout<<"Bye!";
			break;
		default:
			cout<<"you didn't entered a suitable letter!!\n";
			break;
		};
		cout<<"Next choice: ";
		cin>>ch;
		}while(ch!='q');

	return 0;
}
