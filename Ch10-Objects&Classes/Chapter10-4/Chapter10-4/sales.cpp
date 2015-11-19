#include "sales.h"
#include <iostream>
//default constructor
SALES::Sales::Sales(){
	for(int i=0;i<4;i++)
		sales[i]=0.0;
}

//sales on the n Quarter
SALES::Sales::Sales(double salesArray[4]){
	for(int i=0;i<4;i++)
		sales[i]=salesArray[i];;
}

void SALES::Sales::setSales(void){
	max=sales[1];
	min=sales[1];
	double totsales=0.0;
	for(int i=0;i<4;i++){
		totsales+=sales[i];
		if(min>sales[i]) min=sales[i];
		if(max<sales[i]) max=sales[i];
	}
	average=totsales/4;
}

void SALES::Sales::showSales(void){
	for(int i=0;i<4;i++){
		std::cout<<"For the quarter "<<i+1<<":\n";
		std::cout<<"    "<<"Sales: "<<sales[i]<<std::endl;
	}
		std::cout<<"    "<<"Average: "<<average<<std::endl;
		std::cout<<"    "<<"Min: "<<min<<std::endl;
		std::cout<<"    "<<"Max: "<<max<<std::endl;
}

