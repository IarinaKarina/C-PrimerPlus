#include "sales_header.h"
#include <iostream>
namespace SALES{
	
// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void setSales(Sales & s, const double ar[], int n){
	for(int i=0;i<QUARTERS;i++){
		s.sales[i]=ar[i];
	}
	double calc_min = s.sales[0];
    double calc_max = s.sales[0];
    double calc_average = s.sales[0];
    for (int i=1;i<n;i++) {
        if (calc_min>s.sales[i])
            calc_min=s.sales[i];
        if (calc_max<s.sales[i])
            calc_max = s.sales[i];
        calc_average+=s.sales[i];
    }
	calc_average/=4;
    s.min=calc_min;
    s.max=calc_max;
    s.average=calc_average;
	
	if(n<QUARTERS){
		for(int i=n;i<QUARTERS;i++) { // if elements of arr < QUANTITY - push 0.
			s.sales[i] = 0;
		 }
	}
}
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void setSales(Sales & s){
	for(int i=0;i<QUARTERS;i++){
		std::cout<<"Enter sales for the #"<<i+1<<" quarter: ";
		std::cin>>s.sales[i];
	}
	double calc_min = s.sales[0];
    double calc_max = s.sales[0];
    double calc_average = s.sales[0];
	for (int i=1;i<QUARTERS;i++) {
        if (calc_min>s.sales[i])
            calc_min=s.sales[i];
        if (calc_max<s.sales[i])
            calc_max = s.sales[i];
        calc_average+=s.sales[i];
    }
	calc_average/=4;
    s.min=calc_min;
    s.max=calc_max;
    s.average=calc_average;
}

// display all information in structure s
void showSales(const Sales & s){
	std::cout<<"Information for the structure: \n";
    for(int i=0;i<QUARTERS;i++) {
        std::cout<<"\t#"<<i+1<<": " <<s.sales[i]<<std::endl;
    }
    std::cout<<"\tmin: "<<s.min<<std::endl;
    std::cout<<"\tmax: "<<s.max<<std::endl;
    std::cout<<"\taverage: "<<s.average<<std::endl;
}
}