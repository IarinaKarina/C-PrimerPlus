#include "vintage.h"
#include <cstring>

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br,"vintage",b){
	nickname=new char[strlen(nn)+1];
	strcpy(nickname,nn);
	year=y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp){
	nickname=new char[strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year=vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort &vp){
	if(this==&vp)
		return *this;
	delete [] nickname;
	nickname=new char[strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year=vp.year;
	return *this;
}

void VintagePort::Show() const{
	std::cout<<"\nNickname: "<<nickname;
    std::cout<<"\nYear: "<<year;
	Port::Show();
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp){
	os<<vp.nickname<<", "<<vp.year;
	os<<(const Port&) vp;
	return os;
}