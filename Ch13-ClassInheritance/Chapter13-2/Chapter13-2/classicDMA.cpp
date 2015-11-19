#include "classicDMA.h"
#include <iostream>
#include <cstring>

Classic::Classic(char* pw, char* s1, char* s2, int n, double x) : Cd(s1,s2,n,x) {
	primaryWork=new char[std::strlen(pw)+1];
	strcpy(primaryWork,pw);
}

Classic::Classic() : Cd() {
	primaryWork=nullptr;
}

Classic::Classic(Classic& c){
	primaryWork=new char[std::strlen(c.primaryWork)+1];
	strcpy(primaryWork,c.primaryWork);
}

Classic::~Classic(){
	delete [] primaryWork;
}

void Classic::Report() const{
	std::cout<<"\nPrimary work of the cd: "<<primaryWork<<std::endl;
}

Classic& Classic::operator=(const Classic& c){
	if(this==&c)
		return *this;
	delete [] primaryWork;
	primaryWork=new char[std::strlen(c.primaryWork)+1];
	strcpy(primaryWork,c.primaryWork);

	return *this;
}