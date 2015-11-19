/*8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include<iostream>
#include<string>

struct pizzaAnalyzer{
	std::string companyName;
	int diameter;
	int weight;
};

int main(){
	using namespace std;
	pizzaAnalyzer* pizza=new pizzaAnalyzer;
	
	cout<<"Enter pizza's diameter: ";
	cin>>pizza->diameter;
	cout<<"Enter company's name: ";
	(cin>>pizza->companyName).get();
		cout<<"Enter pizza's weight: ";
	cin>>pizza->weight;
	
	cout<<"The name of the pizza's company is "<<pizza->companyName
		<<", the diameter of the pizza is "<<pizza->diameter
		<<" and the pizza's weight is "<<pizza->weight<<endl;

	delete pizza;
	return 0;
}