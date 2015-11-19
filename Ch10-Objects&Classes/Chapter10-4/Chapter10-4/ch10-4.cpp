/*4. Do Programming Exercise 4 from Chapter 9 but convert the Sales structure and
its associated functions to a class and its methods. Replace the setSales(Sales &,
double [], int) function with a constructor. Implement the interactive
setSales(Sales &) method by using the constructor. Keep the class within the
namespace SALES.
*/

#include <iostream>
#include "sales.h"
const int QUARTER=4;	
int main(){
	using namespace SALES;

	//Sales object;
	double salesArray[QUARTER];
	for(int i=0;i<QUARTER;i++){
		std::cout<<"Sales on the "<<i+1<<" quarter= ";
		std::cin>>salesArray[i];
	};
	Sales object=Sales(salesArray);
	object.setSales();
	object.showSales();

	return 0;
}
