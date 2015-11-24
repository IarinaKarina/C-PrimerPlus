/*5. Here are some class declarations:
		look in the emp.h

Note that the class hierarchy uses MI with a virtual base class, so keep in mind the
special rules for constructor initialization lists for that case.Also note the presence
of some protected-access methods.This simplifies the code for some of the
highfink methods. (Note, for example, that if highfink::ShowAll() simply
calls fink::ShowAll() and manager::ShowAll(), it winds up calling
abstr_emp::ShowAll() twice.) Provide the class method implementations and test
the classes in a program. Here is a minimal test program:*/

// pe14-5.cpp
// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
using namespace std;
#include "emp.h"

int main(void){
	employee em("Trip", "Harris", "Thumper");
	cout<<em<<endl;
	em.ShowAll();

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout<<ma<<endl;
	ma.ShowAll();

	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout<<fi<<endl;
	fi.ShowAll();

	highfink hf(ma, "Curly Kew"); 
	hf.ShowAll();
	cout<<"Press a key for next phase:\n";
	cin.get();
	
	highfink hf2;
	hf2.SetAll();
	cout<<"Using an abstr_emp * pointer:\n";
	abstr_emp* tri[4] = {&em, &fi, &hf, &hf2};
	for (int i=0; i<4; i++)
		tri[i]->ShowAll();
	
	return 0;
}
/*
Why is no assignment operator defined?
ans: the assignment operator is unnecessary since the default constructor is assigning class data members to each other.
	explicit assignment is needed when there are dynamically allocated data members in the clas, which is not in our case.

Why are ShowAll() and SetAll() virtual?
ans: these methods are virtual because they are redefined in each derived class, where they display or ask for different information 
	for each class

Why is abstr_emp a virtual base class?
ans: abstr_emp is declared as being virtual to allow an aobject derived from it to share a common base,
	to inherit just one object of the shared base class

Why does the highfink class have no data section?
ans: highfink inherits all data members from the base classes

Why is only one version of operator<<() needed?
ans: because only information from the base classs needs to be displayed by using operator<<, since the derived objects are
	downcasted to baseclass

What would happen if the end of the program were replaced with this code?
	abstr_emp tri[4] = {em, fi, hf, hf2};
	for (int i = 0; i < 4; i++)
		tri[i].ShowAll();
ans: all the ShowAll methods are defined based on reference-to-type, so this for will use ShowAll() based on variable type,
	so will display only informations from the base class for all derived objects.
*/


