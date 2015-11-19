/*4. Rewrite the final Time class example (Listings 11.10, 11.11, and 11.12) so that all
the overloaded operators are implemented using friend functions.
*/

//usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "mytime3.h"

int main(){
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << "Aida and Tosca:\n";
	cout << aida<<"; " << tosca << endl;
	temp = aida + tosca; // operator+()
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida* 1.17; // member operator*()
	cout << "Aida * 1.17: " << temp << endl;
	cout << "Tosca * 10.0: " << tosca * 10.0 << endl;
	return 0;
}
