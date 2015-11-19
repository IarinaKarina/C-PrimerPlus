#include "classic.h"
#include <iostream>
#include <cstring>

Classic::Classic(char* pw, char* s1, char* s2, int n, double x) : Cd(s1,s2,n,x) {
	strncpy_s(primaryWork,pw,74);
	primaryWork[74]='\0';
}
Classic::Classic() : Cd() {
	primaryWork[0]='\0';
}

void Classic::Report() const{
	std::cout<<"\nPrimary work of the cd: "<<primaryWork<<std::endl;
}
