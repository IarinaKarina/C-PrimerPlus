/*2. The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an int and
uses the last three values to set the corresponding members of the structure.The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a CandyBar as an
argument and displays the contents of the structure. Use const where appropriate.*/

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>	//for strcpy
struct CandyBar{
	char* brandName;
	double weight;
	int calories;
};

void setMembers(CandyBar&, char* name="Millenium Munch", const double w=2.85, const int cal=350);
void display(const CandyBar&);

int main(){
	CandyBar milka;

	setMembers(milka);
	display(milka);

	std::cout<<"Done!\n";
	return 0;
}

//uses the last three values to set the corresponding members of the structure
void setMembers(CandyBar& lolli, char* name, const double w, const int cal){
	lolli.brandName=name;
	lolli.weight=w;
	lolli.calories=cal;
}

//displays the contents of the structure
void display(const CandyBar& lolli){
	std::cout<<"The CandyBar's name is "<<lolli.brandName<<std::endl;
	std::cout<<"\thas a weight of "<<lolli.weight<<std::endl;
	std::cout<<"\tand "<<lolli.calories<<" calories!\n";
}
#endif
