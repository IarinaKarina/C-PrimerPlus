/*2. Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!*/

#include <iostream>
#include <array>
const int ArSize=16;

int main(){
	std::array<long double,16> factorials;
	factorials[1]=factorials[0]=1;
	
	for(int i=2;i<ArSize;i++)
		factorials[i]=i*factorials[i-1];
	for(int i=0;i<ArSize;i++)
		std::cout<<i<<"!="<<factorials[i]<<std::endl;

	return 0;
}