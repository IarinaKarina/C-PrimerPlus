/*Put together a multifile program based on this header. One file, named golf.cpp,
should provide suitable function definitions to match the prototypes in the header
file.A second file should contain main() and demonstrate all the features of the
prototyped functions. For example, a loop should solicit input for an array of golf
structures and terminate when the array is full or the user enters an empty string
for the golfer’s name.The main() function should use only the prototyped functions
to access the golf structures.
*/
#include <iostream>
#include "golf.h"

int main(){
	golf anne;
	setgolf(anne,"Anne Marie",20);
	showgolf(anne);

	golf andy;
	setgolf(andy);
	showgolf(andy);

	golf boys[5];
	int i=0;
	do{
		if (setgolf(boys[i])==1)
			i++;
		else{
			std::cout<<"The array of structures is done!\n";
			break;
		}
	} while (i<5);

	return 0;
}