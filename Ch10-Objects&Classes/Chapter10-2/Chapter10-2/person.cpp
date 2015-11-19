#include "person.h"
#include <iostream>
#include <cstring>
#include <string>

Person::Person(const std::string & ln){
	lname=ln;
	strcpy_s(fname,"HeyYou");

}
Person::Person(const std::string & ln,char fn[LIMIT]){
	lname=ln;
	strncpy_s(fname,fn,LIMIT);
	fname[LIMIT]='\0';
}

// firstname lastname format
void Person::Show() const{
	std::cout<<fname<<" "<<lname<<std::endl;;
}

 // lastname, firstname format
void Person::FormalShow() const{
	std::cout<<lname<<" "<<fname<<std::endl;
}
