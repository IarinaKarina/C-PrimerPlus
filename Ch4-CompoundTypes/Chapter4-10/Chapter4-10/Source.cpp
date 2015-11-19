/*10. Write a program that requests the user to enter three times for the 40-yd dash (or
40-meter, if you prefer) and then displays the times and the average. Use an array
object to hold the data. (Use a built-in array if array is not available.)*/

#include <iostream>
#include <array>

int main () {
    std::array<float,3> time;
	float aver=0.0;

    for(int i=0;i<3;i++){
		std::cout<<"Enter your #"<<i+1<<" time: ";
		std::cin>>time[i];
		aver+=time[i];
	}
    aver/=3.0;
	std::cout <<"Your average time is: " <<aver<<std::endl;

	return 0;
}