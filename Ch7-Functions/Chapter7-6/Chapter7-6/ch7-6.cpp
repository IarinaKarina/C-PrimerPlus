/*6. Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.

Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.

Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.

The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.
*/

#include<iostream>
const int MAX=20;
using namespace std;

//function prototypes
int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
void reverse_array(double ar[], int n);

int main(){
	double arr[MAX];
	int size=fill_array(arr,MAX);

	std::cout<<"The initial array:\n";
	show_array(arr,size);

	double* rev_array=arr+1;
	reverse_array(rev_array,size-2);
	std::cout<<"The reversed array:\n";
	show_array(arr,size);
	
	std::cout<<"Done.\n";
	return 0;
}

//function that prompts the user to enter double values to be entered in the array
//It ceases taking input when the array is full or when the user enters non-numeric input
//it returns the actual number of entries.
int fill_array(double ar[],int limit){
	double temp;
	int i=0;

	do{
		cout<<"Enter value #"<<i+1<<": ";
		cin>>temp;
		if(cin.fail()){
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input; input process terminated.\n";
			break;
		}
		else if(temp<0)
			break;
		ar[i++]=temp;
	}while(i<limit);
	
	return i;
}

//displays the contents of the array
void show_array(const double ar[], int n){
	for(int i=0;i<n;i++){
		cout<<"Element #"<<i+1<<": ";
		cout<<ar[i]<<endl;
	}
}

//reverses the order of the values stored in the array
void reverse_array(double ar[], int n){
	double temp;

	for(int i=0;i <= n/2;i++){
		temp=ar[i];
		ar[i]=ar[n-i-1];
		ar[n-i-1]=temp;
	}

}
