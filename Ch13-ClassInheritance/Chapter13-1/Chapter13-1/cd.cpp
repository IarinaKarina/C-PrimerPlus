#include "cd.h"
#include <iostream>
#include <cstring>

Cd::Cd(char* s1, char* s2, int n, double x){
	strncpy_s(performers,s1,49);
	performers[49]='\0';
	strncpy_s(label,s2,19);
	label[19]='\0';
	selections=n;
	playtime=x;
}

Cd::Cd(){
	performers[0]='\0';
	label[0]='\0';
	selections=0;
	playtime=0.0;
}

// reports all CD data
void Cd::Report() const{
	std::cout<<"Performer: "<<performers<<std::endl;
	std::cout<<"Label: "<<label<<std::endl;
	std::cout<<"Selections: "<<selections<<std::endl;
	std::cout<<"Playtime: "<<playtime<<std::endl;
}

