/*Derive a Classic class that adds an array of char members that will hold a string
identifying the primary work on the CD. If the base class requires that any functions
be virtual, modify the base-class declaration to make it so. If a declared
method is not needed, remove it from the definition.*/
#ifndef CLASSICDMA_H_
#define CLASSICDMA_H_
#include"cdDMA.h"

class Classic:public Cd{
private:
	char* primaryWork;
public:
	Classic(char* pw, char* s1, char* s2, int n, double x);
	Classic();
	Classic(Classic& c);
	~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& c);
};

#endif