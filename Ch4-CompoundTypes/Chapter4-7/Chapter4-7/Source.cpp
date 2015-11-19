/*7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
n The name of the pizza company, which can consist of more than one word
n The diameter of the pizza
n The weight of the pizza
Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information, and then the program should display that information.
Use cin (or its methods) and cout.*/

#include<iostream>
#include<string>

struct pizzaAnalyzer{
	std::string companyName;
	int diameter;
	int weight;
};

int main(){
	using namespace std;
	pizzaAnalyzer pizza;
	
	cout<<"Enter company's name: ";
	(cin>>pizza.companyName).get();
	cout<<"Enter pizza's diameter: ";
	cin>>pizza.diameter;
	cout<<"Enter pizza's weight: ";
	cin>>pizza.weight;
	
	cout<<"The name of the pizza's company is "<<pizza.companyName
		<<", the diameter of the pizza is "<<pizza.diameter
		<<" and the pizza's weight is "<<pizza.weight<<endl;
		
}
