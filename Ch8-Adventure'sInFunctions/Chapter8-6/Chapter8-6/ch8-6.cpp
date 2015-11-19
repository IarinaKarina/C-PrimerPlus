/*6. Write a template function maxn() that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template
with an array of six int value and an array of four double values.The program
should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.
*/

#include <iostream>
#include <string>
#include <cstring>

template <typename T>
T maxn(T arr[], int n){
	T maxim=arr[0];
	for(int i=1;i<n;i++){
		if (maxim<arr[i])
			maxim=arr[i];
	}
	return maxim;
}

//specialization
template<> char* maxn<char*>(char* arr[], int noPointers){
	char* maxim=arr[0];
	for(int i=1;i<noPointers;i++){
		if (strlen(maxim)<strlen(arr[i]))
			maxim=arr[i];
	}
	return maxim;
}

int main(){
	using namespace std;
	cout<<"Enter the values of the int array:\n";
	
	int intArray[6];
	for(int i=0;i<6;i++)
		cin>>intArray[i];
	cout<<"The max element in the int array is: "<<maxn(intArray,6)<<endl;

	double doubleArray[4];
	cout<<"Enter the values of the double array:\n";
	for(int i=0;i<4;i++)
		cin>>doubleArray[i];
	cout<<"The max element in the double array is: "<<maxn(doubleArray,4)<<endl;

	string charArray[5];
	cout<<"Enter the values of the string array:\n";
	for(int i=0;i<5;i++){
		(cin>>charArray[i]).get();
	}
	cout<<"The max element in the string pointers is: "<<maxn(charArray,5)<<endl;

	cout<<"Done!\n";
	return 0;
}
