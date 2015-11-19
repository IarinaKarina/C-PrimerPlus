#ifndef DMA_H_
#define DMA_H_
#include <iostream>

//Abstract Base Class
class ABC{
private:
	char* label;
	int rating;
public:
	ABC(const char* l="null", int r=0);
	ABC(const ABC& rs);
	virtual ~ABC();
	ABC& operator=(const ABC& rs);
	friend std::ostream& operator<<(std::ostream& os, const ABC& rs);
	virtual void View() const = 0; // pure virtual function making ABC an abstract base class
};


//Base Class using DMA
//derived from the abstract class
class baseDMA:public ABC{
public:
	baseDMA(const char* l="null", int r=0);
	void View() const {	ABC::View();}
};


//second class derived from abstract class
class lacksDMA:public ABC{
private:
	enum {COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char* c="blank", const char* l="null", int r=0);
	lacksDMA(const char* c, const ABC& rs);
	void View() const;
};

class hasDMA:public ABC{
private:
	char* style;
public:
	hasDMA(const char* s="none", const char* l="null", int r=0);
	hasDMA(const char* s, const ABC& rs);
	hasDMA(const hasDMA& hs);		
	~hasDMA();	
	hasDMA& operator=(const hasDMA& rs);
	void View() const;
};

#endif
