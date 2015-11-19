/*4. Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/

#include <iostream>

int main(){
	long seconds;
	
	std::cout<<"Enter the number of seconds, as an integer value: ";
	std::cin>>seconds;
	
	const long s=(long)seconds%60;
	const long m=(long)seconds/60;
	const long min=(long)m%60;
	const long h=(long)m/60;
	const long hour=(long)h%24;
	const long d=(long)h/24;

	std::cout<<seconds<<" seconds = "<<d<<" days, "
		<<hour<<" hours, "<<min<<" minutes, "<<s<<" seconds\n";

	return 0;
}