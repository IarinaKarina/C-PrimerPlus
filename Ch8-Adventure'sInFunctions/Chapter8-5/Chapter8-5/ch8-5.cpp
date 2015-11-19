/*5. Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.
*/

#include <iostream>

template <typename T>
T max5(T arr[5]){
	T maxim=arr[0];

	for(int i=1;i<5;i++){
		if (maxim<arr[i])
			maxim=arr[i];
	}
	return maxim;
}

int main(){
	using namespace std;
	cout<<"Enter the values of the int array:\n";
	
	int intArray[5];
	for(int i=0;i<5;i++)
		cin>>intArray[i];
	cout<<"The max element in the int array is: "<<max5(intArray)<<endl;

	double doubleArray[5];
	cout<<"Enter the values of the double array:\n";
	for(int i=0;i<5;i++)
		cin>>doubleArray[i];
	cout<<"The max element in the double array is: "<<max5(doubleArray)<<endl;

	cout<<"Done!\n";
	return 0;
}

