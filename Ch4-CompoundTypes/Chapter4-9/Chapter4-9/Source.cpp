/*9. Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.*/

#include <iostream>

struct CandyBar{
	char brandName[20];
	float weight;
	int noCalories;
};

int main(){
	using namespace std;

	CandyBar *snack=new CandyBar[3];
	for(int i=0; i<3;i++){
		cout<<"CandyBar's no "<<i+1<<" name is: ";
		cin.getline(snack[i].brandName,20);
		cout<<"CandyBar's no "<<i+1<<" weight is: ";
		cin>>snack[i].weight;
		cout<<"CandyBar's no "<<i+1<<" no of calories is: ";
		cin>>snack[i].noCalories;
	}
	for(int i=0; i<3;i++){
		cout<<"CandyBar's no "<<i+1<<":\n";
		cout<<"name: "<<snack[i].brandName<<endl;
		cout<<"weight: "<<snack[i].weight<<endl;
		cout<<" no of calories: "<<snack[i].noCalories<<endl;
	}
	delete [] snack;
	return 0;
}

