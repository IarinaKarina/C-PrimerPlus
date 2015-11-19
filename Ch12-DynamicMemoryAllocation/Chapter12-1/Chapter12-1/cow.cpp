#include "cow.h"
#include <cstring>	//for strcpy, strlen
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Cow::Cow(){
	cout<<"Default constructor:\n";
	cout<<"Enter a name for the cow: ";
	cin.getline(name,20);
	
	hobby=new char[20];
	cout<<"Enter a hobby for the cow: ";
	cin.getline(hobby,20);
	
	cout<<"Enter cow's weight: ";
	cin>>weight;

}

Cow::Cow(const char* nm, const char* ho, double wt){
	cout<<"constructor: \n";
	std::strcpy(name,nm);
	hobby=new char[std::strlen(ho)+1];
	std::strcpy(hobby,ho);
	weight=wt;
}

Cow::Cow(const Cow& c){
	cout<<"Copy constructor: \n";
	std::strcpy(name,c.name);
	hobby=new char[std::strlen(c.hobby)+1];
	std::strcpy(hobby,c.hobby);
	weight=c.weight;
}

Cow::~Cow(){
	cout<<"Default destructor! for "<<name<<endl;
	delete [] hobby;
}

Cow& Cow::operator=(const Cow& c){
	if (this==&c)		//verifies for self assignment
		return *this;
	delete [] hobby;
	std::strcpy(name,c.name);
	hobby=new char[std::strlen(c.hobby)+1];
	std::strcpy(hobby,c.hobby);
	weight=c.weight;
	
	return *this;
}
//display all cow data
void Cow::ShowCow() const{
	cout<<"Showing the contents:\n";
	cout<<"\tCow's name: "<<name<<endl;
	if (hobby==nullptr)
       cout<<"\tCow's hobby:  [empty - please initialize]";
    else
        cout<<"\tCow's hobby: "<<hobby<<endl;
	cout<<"\tCow's weight: "<<weight<<endl;
}
