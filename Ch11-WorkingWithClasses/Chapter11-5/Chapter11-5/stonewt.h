// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt{
public:
	enum Mode {STONE, INTEGER_POUNDS, FLOATING_POUNDS} my_mode;	//state member
private:
	enum {Lbs_per_stn = 14}; // pounds per stone
	int stone; // whole stones
	double pds_left; // fractional pounds
	double pounds; // entire weight in pounds
	Mode mode;	//how the object is interpreted
public:
	Stonewt(double lbs, Mode mode = FLOATING_POUNDS);          // constructor for double pounds
    Stonewt(int stn, double lbs, Mode mode = STONE);			// constructor for stone, lbs
	Stonewt();			// default constructor
	~Stonewt();
	void setMode(Mode m);
    friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
    friend Stonewt& operator + ( const Stonewt & st1, const Stonewt & st2 );
    friend Stonewt& operator - ( const Stonewt & st1, const Stonewt & st2 );
    friend Stonewt& operator * ( const Stonewt & st1, const double n );
    friend Stonewt& operator * ( const double n, const Stonewt & st1 ) {
        return st1 * n;
    };

};

#endif