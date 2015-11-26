#ifndef _EXC_MEAN3_H
#define _EXC_MEAN3_H
#include <iostream>
#include <stdexcept>

class bad_base : public std::logic_error{
protected:				
	double v1;
	double v2;
public:
	bad_base(const char* str ="not defined yet", double a = 0, double b = 0) : std::logic_error(str), v1(a), v2(b) {}
    virtual void mesg() const = 0;		//to make this an abstract class
    virtual ~bad_base() {}
};

class bad_hmean : public bad_base{
public:
    bad_hmean(double a, double b) : bad_base("\ninvalid arguments: a = -b\n", a, b) {}
    void mesg() const;
};

inline void bad_hmean::mesg() const{
    std::cout<<"hmean("<<v1<<", "<<v2 <<")= ";		//accessible members as protected
    std::cout<<what();
}

class bad_gmean : public bad_base{
public:
    bad_gmean(double a = 0, double b = 0) : bad_base("\ngmean() arguments should be positive\n", a, b) {}
    void mesg() const;
};

inline void bad_gmean::mesg() const {
    std::cout<<"Values used: "<<v1<<", "<<v2;
    std::cout<<what();
}

#endif