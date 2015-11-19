#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#ifndef _PORT_H_
#define _PORT_H_
#include <iostream>

class Port{
private:
	char* brand;
	char style[20]; // i.e., tawny, ruby, vintage
	int bottles;
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port & p); // copy constructor
	virtual ~Port() { delete [] brand; }
	Port& operator=(const Port& p);
	Port& operator+=(int b); // adds b to bottles
	Port& operator-=(int b); // subtracts b from bottles, if available
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend std::ostream& operator<<(std::ostream& os, const Port& p);
};

#endif
#endif