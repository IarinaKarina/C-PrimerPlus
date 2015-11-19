#include "golf.h"
#include <cstring>	//for strncpy
#include <iostream>

//Golf::Golf(){
//	std::cout<<"default constructor!\n";
//}

Golf::Golf(char* iniName,int noHandicap){
	strncpy_s(fullname,iniName,Len);
	fullname[Len]='\0';
	handicap=noHandicap;
}
/*For example, for the code for setgolf(), obtain the data, pass the data to
the constructor to create a temporary object, and assign the temporary object to the
invoking object, which is *this.)*/
Golf Golf::setgolf(Golf & g){
	*this=g;
	return *this;
}

void Golf::show(void){
	std::cout<<"Full name: "<<fullname<<std::endl;
	std::cout<<"Handicap: "<<handicap<<std::endl;
}
