/*7. Write a program that asks the user to enter an hour value and a minute value.The
main() function should then pass these two values to a type void function that displays
the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

#include <iostream>

void  timeShow(int h, int min){
	std::cout<<"Time: "<<h<<":"<<min<<std::endl;
}

int main(){
	int hour,minutes;
	do{
		std::cout<<"Enter the number of hours: ";
		std::cin>>hour;
	}while(hour>24);
	do{
		std::cout<<"Enter the number of minutes: ";
		std::cin>>minutes;
	}while(minutes>60);

	timeShow(hour,minutes);

	return 0;
}
