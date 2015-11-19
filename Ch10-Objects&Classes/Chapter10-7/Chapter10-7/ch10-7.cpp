/*7. A Betelgeusean plorg has these properties:
Data
A plorg has a name with no more than 19 letters.
A plorg has a contentment index (CI), which is an integer.
Operations
A new plorg starts out with a name and a CI of 50.
A plorg�s CI can change.
A plorg can report its name and CI.
The default plorg has the name "Plorga".
Write a Plorg class declaration (including data members and member function prototypes)
that represents a plorg.Write the function definitions for the member functions.
Write a short program that demonstrates all the features of the Plorg class.
*/

#include "plorg.h"

int main(){
	Plorg ob1;	//default initialization
	ob1.showContents();

	Plorg ob2("The klingonian");
	ob2.showContents();
	ob2.resetCI(15);
	ob2.showContents();

	return 0;
}
