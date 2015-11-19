/*Write a C++ program that asks for a distance in furlongs and converts it to yards.
(one furlong is 220 yards).*/

#include <iostream>

int main(){
	int dFur;
	std::cout<<"Enter the distance in furlongs: ";
	std::cin>>dFur;
	std::cout<<"The converted distance is: "<<dFur*220<<" yards"<<std::endl;
}