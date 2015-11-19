#include "complex0.h"

complex::complex(double xini,double yini){
	x=xini;
	y=yini;
}
void complex::setReal(double real){
	this->x=real;
}
void complex::setImag(double imag){
	this->y=imag;
}
//Addition of two complex numbers
complex& complex::operator+(const complex& a){
	this->x += a.x;
	this->y += a.y;
	return *this;
}
//subtraction of two complex numbers
complex& complex::operator-(const complex& a){
	this->x -= a.x;
	this->y -= a.y;
	return *this;
}
//multiplication of two complex numbers
complex& complex::operator*(const complex& a){
	//(A × C - B×D, (A×D + B×C)i)
	this->x = (this->x)*a.x - (this->y)*a.y;
	this->y = (this->x)*a.y + (this->y)*a.x;
	return *this;
}

//conjugation of a complex number
complex& complex::operator~(){
	this->y = -this->y;
	return *this;
}

//friend functions
//multiplication of a complex number and a real number
//can have the real number on the first or on the 2nd position
//so we make a friend function
complex operator*(complex& a, const double r){	
	a.x *= r;
	a.y *= r;
	return a;
}
std::ostream& operator<<(std::ostream& os, const complex& a){
	  os<<"("<<a.x<<", "<<a.y<<"i)";
	  return os;
}

std::istream& operator>>(std::istream& is, complex& a){
	double xtemp, ytemp;
	std::cout<<"real part= ";
	std::cin>>xtemp;
	std::cout<<"imaginary part: ";
	std::cin>>ytemp;
	a.setReal(xtemp);
	a.setImag(ytemp);
	return is;
}
