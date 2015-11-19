/*2. Modify the Vector class header and implementation files (Listings 11.13 and 11.14)
so that the magnitude and angle are no longer stored as data components. Instead,
they should be calculated on demand when the magval() and angval() methods
are called.You should leave the public interface unchanged (the same public methods
with the same arguments) but alter the private section, including some of the
private method and the method implementations.Test the modified version with
Listing 11.15, which should be left unchanged because the public interface of the
Vector class is unchanged.*/

// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include <fstream>
#include "vect.h"

int main(){
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	
	cout << "Enter target distance (q to quit): ";
	while (cin >> target){
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout<<"Target Distance: "<<target<<", Step Size: "<<dstep<<endl;
		while (result.magval() < target){
			cout<<steps<<": (x,y) = ("<<result.xval()<<", "<<result.yval()<<")\n";
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
		}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}