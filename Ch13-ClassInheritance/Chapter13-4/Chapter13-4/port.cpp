#include "port.h"
#include <cstring>
using namespace std;

Port::Port(const char* br, const char* st, int b){
	brand=new char[strlen(br)+1];
	strcpy(brand,br);
	strncpy(style,st,19);
	style[19]='\0';
	bottles=b;
}

Port::Port(const Port& p){
	brand=new char[strlen(p.brand)+1];
	strcpy(brand,p.brand);
	strncpy(style,p.style,19);
	style[19]='\0';
	bottles=p.bottles;
}

Port& Port::operator=(const Port &p){
	if(this==&p)
		return *this;
	delete[] brand;
	brand=new char[strlen(p.brand)+1];
	strcpy(brand,p.brand);
	strncpy(style,p.style,19);
	style[19]='\0';
	bottles=p.bottles;
	return *this;
}
// adds b to bottles
Port& Port::operator+=(int b){
	bottles+=b;
	return *this;
}

// subtracts b from bottles, if	available
Port& Port::operator-=(int b){
	if (bottles>=b){
		bottles-=b;
		return *this;
	}
	cout<<"Cannot perform the subtraction, not enough bottles!\n";
	return *this;
}

void Port::Show() const{
	cout<<"Brand: "<<brand<<endl;
	cout<<"Kind: "<<endl;
	cout<<"Bottles: "<<bottles<<endl;
}

ostream& operator<<(ostream& os, const Port& p){
	os<<p.brand<<", "<<p.style<<", "<<p.bottles;
	return os;
}

