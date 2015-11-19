/*6. Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution. After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting.*/

#include <iostream>
#include <string>

int main() {
    using namespace std;

    struct contributors{
        string fullname ;
        double contribution;
    };

    int input,contNo;
    cout<<"Enter the number of contributors: ";
    (cin>>contNo).get();
   
	//dynamically allocate an array of structures
    contributors* contList =new contributors [contNo];

	//reading the data
    for (int i=0; i<contNo; i++) { 
        cout<<"Enter contributor #"<<i+1<<" fullname: ";
        getline(cin,contList[i].fullname );
        cout<<"Enter contributor #"<<i+1<<" contribution: ";
        cin>>contList[i].contribution;
        cin.get();
    }

    int grand=0;	//number of grand patrons  
	cout<<"Grand patrons: " <<endl;
    for(int i=0; i<contNo; i++ ) {
        if (contList[i].contribution >= 10000 ) {
            cout<<contList[i].fullname<<endl;
            grand++;
        }
    }
    if (grand==0)              
        cout<<"None\n";

    int patrons=0;                       
    cout<<"Patrons: "<<endl;
    for(int i=0; i<contNo; i++ ) {
        if(contList[i].contribution<10000) {
            cout<<contList[i].fullname<<endl;
            patrons++;
        }
    }
    if (patrons== 0)                        
        cout<<"none\n";

    return 0;
}