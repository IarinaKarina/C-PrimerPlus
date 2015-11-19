#ifndef GOLF_H_
#define GOLF_H_

class Golf{
private:
	static const int Len=40;
	char fullname[Len];
	int handicap;
public:
	Golf(){}
	Golf(char* iniName, int noHandicap);
	Golf setgolf(Golf & g);
	void show(void);
};

#endif
