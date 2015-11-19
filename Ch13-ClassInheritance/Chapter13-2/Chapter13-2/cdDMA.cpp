#include "cdDMA.h"
#include <iostream>
#include <cstring>

Cd::Cd(char* s1, char* s2, int n, double x){
	performers=new char[std::strlen(s1)+1];
	strcpy(performers,s1);
	label=new char[std::strlen(s2)+1];
	strcpy(label,s2);
	selections=n;
	playtime=x;
}

Cd::Cd(const Cd& d){
	performers=new char[std::strlen(d.performers)+1];
	strcpy(performers,d.performers);
	label=new char[std::strlen(d.label)+1];
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
}

Cd::Cd(){
	performers=nullptr;
	label=nullptr;
	selections=0;
	playtime=0.0;
}

Cd::~Cd(){
	delete [] performers;
	delete [] label;
}
Cd& Cd::operator=(const Cd & d) {
    if (this==&d)
        return *this;
    delete [] performers;
	performers=new char[std::strlen(d.performers)+1];
	strcpy(performers,d.performers);
	delete [] label;
	label=new char[std::strlen(d.label)+1];
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;

	return *this;
}
// reports all CD data
void Cd::Report() const{
	std::cout<<"Performer: "<<performers<<std::endl;
	std::cout<<"Label: "<<label<<std::endl;
	std::cout<<"Selections: "<<selections<<std::endl;
	std::cout<<"Playtime: "<<playtime<<std::endl;
}

