/*6. Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.*/

#include <iostream>
#include <iomanip>
int main(){
	int km,liters;

	std::cout<<"Enter how many kilometers have you driven: ";
	std::cin>>km;
	std::cout<<"Enter how many liters you have used: ";
	std::cin>>liters;

	std::cout<<"Your car has gotten: "
		<<(float)100*liters/km<<" liters per 100 kilometers!\n";

	return 0;
}