#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>	//for strncpy
#include "golf.h"

// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc){
	strncpy(g.fullname,name,strlen(name)+1);		//copy exactly the same length
	g.handicap=hc;
}

// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g){
	char name[Len];
	int hc;

	std::cout<<"Enter player's name: ";
	std::cin.getline(name,Len);
	if (name[0]==' ' || name[0]=='\0'){
		std::cout<<"Empty string entered. Data input terminated!\n";
		return 0;
	}
	else{
		strncpy(g.fullname,name,strlen(name)+1);
		std::cout<<"Enter player's handicap: ";
		(std::cin>>hc).get();
		g.handicap=hc;
		return 1;
	}
	
}

// function resets handicap to new value
void handicap(golf & g, int hc){
	g.handicap=hc;
}

// function displays contents of golf structure
void showgolf(const golf & g){
	std::cout<<"Player's name: "<<g.fullname<<std::endl;
	std::cout<<"Player's handicap: "<<g.handicap<<std::endl;
}

#endif