/*A plorg has a name with no more than 19 letters.
A plorg has a contentment index (CI), which is an integer.
Operations
A new plorg starts out with a name and a CI of 50.
A plorg’s CI can change.
A plorg can report its name and CI.
The default plorg has the name "Plorga".
*/
#ifndef _PLORG_H_
#define _PLORG_H_

class Plorg{
private:
	char name[20];
	int contIndex;
public:
	Plorg(char* defName="Plorga", int index=50);
	void resetCI(const int value);
	void showContents() const;
};

#endif