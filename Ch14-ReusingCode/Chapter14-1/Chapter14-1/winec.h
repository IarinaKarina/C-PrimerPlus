#ifndef _WINEC_H
#define _WINEC_H_
#include <iostream>
#include <string>
#include <valarray>
/*The first member of each Pair object holds
the vintage years, and the second member holds the numbers of bottles owned for
the corresponding particular vintage year*/
template <class T1,class T2>
class Pair{
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first() const { return a;}
	T2 second() const { return b;}
	Pair(const T1& aval, const T2& bval):a(aval),b(bval) {}
	Pair() {}
};

template <class T1,class T2>
T1& Pair<T1,T2>::first(){
	return a;
}

template <class T1,class T2>
T2& Pair<T1,T2>::second(){
	return b;
}

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine{
private:
	std::string wineName;	//holds the name of a wine
	PairArray bottleInfo;
	int years;				//holds the number of years 
public:
	//a default constructor
	Wine();
	// initialize label to l, number of years to y,
	// vintage years to yr[], bottles to bot[]
	Wine(const char * l, int y, const int yr[], const int bot[]);
	// initialize label to l, number of years to y,
	// create array objects of length y
	Wine(const char * l, int y);
	//given a Wine object with y years, prompts the user to enter 
	//the corresponding number of vintage years and bottle counts
	void GetBottles();	
	const std::string& Label();	//return a reference to the wine name
	int sum() const;		//return the total number of bottles in the second valarray<int> object in the Pair object.
	//display the information stored in the object
	void Show() const;
};

#endif