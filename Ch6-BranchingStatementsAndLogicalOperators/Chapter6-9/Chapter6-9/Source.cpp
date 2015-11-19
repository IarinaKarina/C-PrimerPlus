/*9. Do Programming Exercise 6 but modify it to get information from a file.The first
item in the file should be the number of contributors, and the rest of the file should
consist of pairs of lines, with the first line of each pair being a contributor’s name
and the second line being a contribution.That is, the file should look like this:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;
const int strSize=20;

struct Contrib{
	char name[strSize];
	double contribution;
};

int main(){
	ifstream inFile;
	int noContr;

	inFile.open("D:\patrons.txt");
	if(!inFile.is_open()){	//failed to open file
		cout<<"Could not open the file\n";
		cout<<"Program terminating!\n";
		exit(EXIT_FAILURE);
	}

	cout<<"Number of contributors: \n";
	inFile>>noContr;
	inFile.get();	//to read the enter after

	//enter the name in a dynamically allocated array of structures
	Contrib *arrContrib=new Contrib[noContr];	//the original donors
	Contrib *patrons=new Contrib[noContr];	
	
	//enter the contribution of each contributor
	for(int i=0;i<noContr;i++){
		cout<<"Contributor #"<<i+1<<" name: ";
		inFile.getline(arrContrib[i].name,strSize);
		cout<<arrContrib[i].name<<endl;
		cout<<"Contributor #"<<i+1<<" contribution: ";
		inFile>>arrContrib[i].contribution;
		cout<<arrContrib[i].contribution<<endl;
		inFile.get();
	}
	//display the name and amounts for the donors with 10,000 or more
	//label them Grand Patrons
	int j=0;
	cout<<"The Grand Patrons:\n";
	for(int i=0;i<noContr;i++){
		if(arrContrib[i].contribution>=10000)
			cout<<arrContrib[i].name<<" has a contribution of "
				<<arrContrib[i].contribution<<endl;
		else{		//copy the rest of the members in another arrray of struct
			strcpy(patrons[j].name,arrContrib[i].name);
			patrons[j].contribution=arrContrib[i].contribution;
			j++;
		}
	}
	//print "none" if no donors
	//list the remaining donors
	//label Patrons
	if(j==noContr)
		cout<<"none of the contribution is greater than 10,000\n";
	if(j==0)
		cout<<"none of the contribution is less than 10,000\n";
	else{
		cout<<"The Patrons:\n";
		for(int i=0;i<j;i++)
			cout<<patrons[i].name<<" has a contribution of "
				<<patrons[i].contribution<<endl;
	}

	delete [] arrContrib;
	delete [] patrons;
	inFile.close();
	return 0;
}
