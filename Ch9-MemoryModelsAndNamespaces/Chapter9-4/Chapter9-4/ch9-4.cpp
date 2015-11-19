/*4. Write a three-file program based on the following namespace:*/
/*The first file should be a header file that contains the namespace.The second file
should be a source code file that extends the namespace to provide definitions for
the three prototyped functions.The third file should declare two Sales objects. It
should use the interactive version of setSales() to provide values for one structure
and the non-interactive version of setSales() to provide values for the second
structure. It should display the contents of both structures by using
showSales().*/

#include <iostream>
#include "sales_header.h"

int main(){
	SALES::Sales ob1, ob2;
	double ar[]={2500,1400,2000,1900,1500};

	SALES::setSales(ob1,ar,3);
	std::cout<<"Sales of the first structure:\n";
	SALES::showSales(ob1);

	SALES::setSales(ob2);
	std::cout<<"Sales of the second structure:\n";
	SALES::showSales(ob2);

	std::cout<<"Done!\n";
	return 0;
}
