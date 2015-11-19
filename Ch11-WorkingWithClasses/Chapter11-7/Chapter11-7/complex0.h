/*7. A complex number has two parts: a real part and an imaginary part. One way to
write an imaginary number is this: (3.0, 4.0). Here 3.0 is the real part and 4.0 is
the imaginary part. Suppose a = (A,Bi) and c = (C,Di).Here are some complex
operations:
n Addition: a + c = (A + C, (B + D)i)
n Subtraction: a - c = (A - C, (B - D)i)
n Multiplication: a × c = (A × C - B×D, (A×D + B×C)i)
n Multiplication: (x a real number): x × c = (x×C,x×Di)
n Conjugation: ~a = (A, - Bi)
*/

#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_
#include <iostream>

class complex{
private:
	double x;
	double y;
public:
	complex(double xini=0.0,double yini=0.0);
	void setReal(double);	//set the real part
	void setImag(double);	//set the imaginary part
	complex& operator+(const complex&);		//Addition of two complex numbers
	complex& operator-(const complex&);		//subtraction of two complex numbers
	complex& operator*(const complex&);		//multiplication of two complex numbers
	complex& operator~();				//conjugation of a complex number
	friend complex operator*(complex&, const double);		//multiplication of a complex number and a real number
	friend complex operator*(const double n, complex& a) { return a*n;};	//use the overloaded operator* before defined
	friend std::ostream& operator<<(std::ostream& os, const complex&);
	friend std::istream& operator>>(std::istream& is, complex&);
};
#endif