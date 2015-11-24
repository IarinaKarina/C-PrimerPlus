#include "wine_priv.h"

Wine::Wine():std::string("no name"), years(0), PairArray(ArrayInt(),ArrayInt()) {}

// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l),
	years(y), PairArray(ArrayInt(yr,y),ArrayInt(bot,y)) {}
   
// initialize label to l, number of years to y,
// create array objects of length y
Wine::Wine(const char * l, int y) : std::string(l), years(y), PairArray(ArrayInt(0,y),ArrayInt(0,y)) {}

void Wine::GetBottles(){
	 if (years<1)
        std::cout<<"\nNo years to enter data for or invalid number!";
    else {
        std::cout<<"Enter "<<(const std::string)(*this)<<" information for "
			<<years<<" year(s): "<< std::endl;
        for(int i = 0; i < years; i++) {
            std::cout<<"Enter year: ";
            (std::cin>>PairArray::first()[i]).get();
            std::cout<<"Enter bottles for that year: ";
            (std::cin>>PairArray::second()[i]).get();
        }
    }
}

const std::string& Wine::Label() {
	return (const std::string& )(*this);
}

int Wine::sum() const {
	return PairArray::second().sum();
}

void Wine::Show() const{
	std::cout<<"\nWine: "<<(const std::string& )(*this)<<std::endl;
    std::cout<<"\tYear";
    std::cout<<"\tBottles"<<std::endl;
    for(int i = 0; i < years; i++)
       std::cout<<"\t"<<PairArray::first()[i]<<"\t"
			<<PairArray::second()[i]<<std::endl;
}