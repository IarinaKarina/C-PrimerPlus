/*5. Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent
that the U.S. (or other nation’s) population is of the world’s population.The
output should look something like this:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
You can use the Internet to get more recent figures.*/

#include <iostream>
#include <iomanip>

int main(){
	using std::cout;
	using std::cin;
	long long wPop,usaPop;
	
	cout<<"Enter the world's population: ";
	cin>>wPop;
	cout<<"Enter the population of the US: ";
	cin>>usaPop;
	float percent=(float)100*usaPop/wPop;
	cout<<"The population of the US is ";
	cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
	std::setprecision(6);
	cout<<percent<<"% of the world population.\n";

	return 0;
}