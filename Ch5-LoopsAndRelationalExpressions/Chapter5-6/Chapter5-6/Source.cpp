/*6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string month[3][12]={
		{"January","Febuary","March","April","May","June","July","August","September","October","November",	"December"},
		{"January","Febuary","March","April","May","June","July","August","September","October","November",	"December"},
		{"January","Febuary","March","April","May","June","July","August","September","October","November",	"December"}
	};

	int sales[3][12]={0};
	int sum=0,sumOnYears=0;

	for(int i=0;i<3;i++){
		for(int  j=0;j<12;j++){
			cout<<"Number of  books sold in "<<month[i][j]<<" year "<<i+1<<"=";
			cin>>sales[i][j];
			sum+=sales[i][j];
		}
		cout<<"Total sales for year "<<i+1<<"= "<<sum<<endl;
		sumOnYears+=sum;
	}
	cout<<"Total sales for the 3 years: "<<sumOnYears<<endl;

	return 0;
}
