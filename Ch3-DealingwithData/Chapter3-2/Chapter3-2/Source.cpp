/*2. Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors*/

#include <iostream>

int main(){
	int feetHeight, inchHeight, metersHeight;
	int poundWeight;
	double BMI, kgMass;
	const int fact1=12;
	const double fact2=0.0254, fact3=2.2;

	std::cout<<"Enter your height in feet:__________\b\b\b\b\b\b\b\b\b\b";
	std::cin>>feetHeight;
	std::cout<<"Enter your height in inches:__________\b\b\b\b\b\b\b\b\b\b";
	std::cin>>inchHeight;
	std::cout<<"Enter your weight in pounds:__________\b\b\b\b\b\b\b\b\b\b";
	std::cin>>poundWeight;

	metersHeight=(feetHeight*fact1)*fact2;
	kgMass=poundWeight/fact3;
	BMI=kgMass/(metersHeight*metersHeight);
	std::cout<<"You have "<<BMI<<" BMI!"<<std::endl;

	return 0;
}