#include "plorg.h"
#include <iostream>
#include <cstring>	//for strcpy

Plorg::Plorg(char* defName, int index){
	strcpy_s(name,defName);
	contIndex=index;
}

void Plorg::resetCI(const int value){
	contIndex=value;
}

void Plorg::showContents() const{
	std::cout<<"The current plorg\n"<<"\tname is: "
		<<name<<std::endl;
	std::cout<<"\tcontentment index is: "<<contIndex<<std::endl;
}
