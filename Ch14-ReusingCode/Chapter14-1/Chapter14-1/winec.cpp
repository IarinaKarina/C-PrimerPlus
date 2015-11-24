#include "winec.h"

Wine::Wine() : wineName("no name"), years(0), bottleInfo(ArrayInt(), ArrayInt()) {}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) :
	wineName(l), years(y), bottleInfo(ArrayInt(yr,y), ArrayInt(bot,y)) {}

Wine::Wine(const char * l, int y) : wineName(l), years(y), bottleInfo(ArrayInt(0,y), ArrayInt(0,y)) {}

void Wine::GetBottles(){
    if (years < 1)
        std::cout<<"\nNo years to enter data for or invalid number!";
    else {
        std::cout<<"Enter "<<wineName <<" informations for "<<years<<" year(s): "<< std::endl;
        for(int i = 0; i < years; i++) {
            std::cout<<"Enter year: ";
            (std::cin>>bottleInfo.first()[i]).get();
            std::cout<<"Enter bottles for that year: ";
            (std::cin>>bottleInfo.second()[i]).get();
        }
    }
}

const std::string& Wine::Label() {
        return wineName;
}

int Wine::sum() const{
	return bottleInfo.second().sum();
}

void Wine::Show() const{
    std::cout<<"\nWine: "<<wineName<<std::endl;
    std::cout<<"\tYear";
    std::cout<<"\tBottles"<<std::endl;
    for(int i = 0; i < years; i++)
       std::cout<<"\t"<<bottleInfo.first()[i]<<"\t"
			<<bottleInfo.second()[i]<<std::endl;
}