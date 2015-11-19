#ifndef _VINTAGE_H_
#define _VINTAGE_H_
#include "port.h"

class VintagePort : public Port // style necessarily = "vintage"
{
private:
	char* nickname; // i.e., "The Noble" or "Old Velvet", etc.
	int year; // vintage year
public:
	VintagePort();
	VintagePort(const char* br, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete [] nickname; }
	VintagePort& operator=(const VintagePort &vp);
	void Show() const;
	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
};

#endif
