#ifndef _CRT_SECURE_NO_WARNINGS		//for strcy being unsafe
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>	//for strlen, strcpy, strncpy
#include "dma.h"

//Abstract Class methods
ABC::ABC(const char* l, int r){
	label=new char[std::strlen(l)+1];
	strcpy(label,l);
	rating=r;
}

ABC::ABC(const ABC& rs){
	label=new char[std::strlen(rs.label)+1];
	std::strcpy(label,rs.label);
	rating=rs.rating;
}

ABC::~ABC(){
	delete [] label;
}

ABC& ABC::operator=(const ABC& rs){
	if (this==&rs)
		return *this;
	delete [] label;
	label=new char[std::strlen(rs.label)+1];
	strcpy(label,rs.label);
	rating=rs.rating;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const ABC& rs){
	rs.View();
	return os;
}

void ABC::View() const{
	std::cout<<"\nLabel: "<<label;
    std::cout<<"\nRating: "<<rating;
}

//First derived class methods
baseDMA::baseDMA(const char* l, int r) : ABC(l,r){}
	
//second's derived class methods
lacksDMA::lacksDMA(const char* c, const char* l, int r):ABC(l,r){
	std::strncpy(color,c,COL_LEN-1);
	color[COL_LEN-1]='\0';
}

lacksDMA::lacksDMA(const char* c, const ABC& rs):ABC(rs){
	std::strncpy(color,c,COL_LEN-1);
	color[COL_LEN-1]='\0';
}

void lacksDMA::View() const{
	ABC::View();
	std::cout<<"\nColor is: "<<color<<std::endl;
}
//third's derived class methods
hasDMA::hasDMA(const char* s, const char* l, int r):ABC(l,r){
	style=new char[std::strlen(s)+1];
	strcpy(style,s);
}

hasDMA::hasDMA(const char* s, const ABC& rs):ABC(rs){
	style=new char[std::strlen(s)+1];
	strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA& hs){
	style=new char[std::strlen(hs.style)+1];
	strcpy(style,hs.style);
}

hasDMA::~hasDMA(){
	delete [] style;
}

hasDMA& hasDMA::operator=(const hasDMA& rs){
	if (this==&rs)
		return *this;
	delete [] style;
	style=new char[std::strlen(rs.style)+1];
	strcpy(style,rs.style);
	return *this;
}

void hasDMA::View() const{
	ABC::View();
	std::cout<<"\nStyle is: "<<style<<std::endl;
}

#endif