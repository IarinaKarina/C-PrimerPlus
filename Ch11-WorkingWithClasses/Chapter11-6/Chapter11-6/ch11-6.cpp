/*6. Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six
relational operators.The operators should compare the pounds members and return
a type bool value.Write a program that declares an array of six Stonewt objects and
initializes the first three objects in the array declaration.Then it should use a loop
to read in values used to set the remaining three array elements.Then it should
report the smallest element, the largest element, and how many elements are greater
or equal to 11 stone. (The simplest approach is to create a Stonewt object initialized
to 11 stone and to compare the other objects with that object.)
*/

#include <iostream>
#include "stonewt.h"

void display(const Stonewt& st, int n);
const int LIMIT=6;		//number of Stonewt objects

int main() {
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    double temp = 0;
    Stonewt stonewtArr[LIMIT];
    stonewtArr[0] = 15;
    stonewtArr[1] = 2.15;
    stonewtArr[2] = 37;
	for (int i=3;i<LIMIT;i++) {
        std::cout<<"Enter stone# "<<i+1<<" (q to quit): ";
        std::cin>>temp;
        stonewtArr[i]=temp;
    }

    Stonewt smallest=stonewtArr[0];
	Stonewt largest=stonewtArr[0];
	Stonewt equality(11);	//the object to be compared
    int greater=0;		//how many elements are greater
    int equal=0;		//how many elements are equal

    for (int i=0; i<6; i++) {
        if (smallest>stonewtArr[i])     // check if the smallest greater than i element
            smallest = stonewtArr[i];
        if (largest<stonewtArr[i])     // check if the largest smaller than i element
            largest=stonewtArr[i];
		if (stonewtArr[i]>equality) 
			greater ++;
        else
			if (stonewtArr[i]==equality)
		      equal ++;
    }

    std::cout<<"Smallest element: ";
    smallest.show_lbs();
    std::cout<<"Largest element: ";
    largest.show_lbs();
    std::cout<<"Greater than 11 pounds: "<<greater<<"\nEqual to 11 pounds: "<<equal<<std::endl;

    std::cin.get();
    return 0;
}