/*3. Here is a structure declaration:
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

//display the value of each member of the structure
//pass the structure by value
void displayMembers(box container){
	cout<<"The box's maker= "<<container.maker<<endl;;
	cout<<"The box's height= "<<container.height<<endl;
	cout<<"The box's width= "<<container.width<<endl;
	cout<<"The box's length= "<<container.length<<endl;
	cout<<"The box's volume= "<<container.volume<<endl;
}

//set the volume member to the product of the other 3 dimensions
//pass by address the structure
float setVolume(box &pBox){
	pBox.volume=pBox.width * pBox.length * pBox.height;

	return pBox.volume;
}

int main(){
	box shape;
	box &pBox=shape;

	cout<<"Enter the characteristics of a box:\n";
	cout<<"Maker: ";
	cin>>shape.maker;
	cout<<"Height: ";
	cin>>shape.height;
	cout<<"Width: ";
	cin>>shape.width;
	cout<<"Length: ";
	cin>>shape.length;
	cout<<"Volume: ";
	cin>>shape.volume;
	displayMembers(shape);

	cout<<"\n\nAfter modifying the volume member:\n";
	setVolume(pBox);
	displayMembers(shape);

	return 0;
}
