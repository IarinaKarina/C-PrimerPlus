/*6. The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, initializes
them to values of your choice, and then displays the contents of each structure.*/
#include "stdafx.h"
#include <iostream>
#include <string>

struct CandyBar{
	std::string brandName;
	float weight;
	int noCalories;
};

int main(){
	using std::cout;
	using std::cin;
	using std::endl;

	CandyBar snack[3];

	for(int i=0; i<3;i++){
		cout<<"CandyBar's no "<<i+1<<" name is: ";
		(cin>>snack[i].brandName).get();
		cout<<"CandyBar's no "<<i+1<<" weight is: ";
		cin>>snack[i].weight;
		cout<<"CandyBar's no "<<i+1<<" no of calories is: ";
		cin>>snack[i].noCalories;
	}
	for(int i=0; i<3;i++){
		cout<<"CandyBar's no "<<i+1<<":\n";
		cout<<"name: "<<snack[i].brandName<<endl;
		cout<<"weight: "<<snack[i].weight<<endl;
		cout<<"no of calories: "<<snack[i].noCalories<<endl;
	}
}

