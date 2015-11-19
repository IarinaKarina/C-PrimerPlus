/*3. Begin with the following structure declaration:
struct chaff
{
char dross[20];
int slag;
};
Write a program that uses placement new to place an array of two such structures in
a buffer.Then assign values to the structure members (remembering to use
strcpy() for the char array) and use a loop to display the contents. Option 1 is to
use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
new to allocate the buffer.
*/
#include <iostream>
#include <new>
const int BUF=512;
const int N=2;
char buffer[BUF];	//chunk of memory

struct chaff{
	char dross[20];
	int slag;
};

int main(){
	using namespace std;

	cout<<"Option 1, using a static array:\n";
	char name[20];
	int s;
	chaff *pd1= new (buffer) chaff[N]; // use buffer array
	for (int i=0;i<N;i++){
		cout<<"Enter chaff's dross: ";
		cin.getline(name,20);
		strcpy_s(pd1[i].dross,name);
		cout<<"Enter chaff's slag: ";
		cin>>s;
		cin.get();
		pd1[i].slag=s;
	}
	cout<<"Displaing the contents of variant1:\n";
	for (int i=0;i<N;i++){
		cout<<"Chaff's dross: "<<pd1[i].dross<<endl;
		cout<<"Enter chaff's slag: "<<pd1[i].slag<<endl;
	}

	cout<<"Option 2, using regular new: \n";
	chaff *pd2=new chaff[N];	//use heap
	for (int i=0;i<N;i++){
		cout<<"Enter chaff's dross: ";
		cin.getline(name,20);
		strcpy_s(pd2[i].dross,name);
		cout<<"Enter chaff's slag: ";
		(cin>>s).get();
		pd2[i].slag=s;
	}
	cout<<"Displaing the contents of variant2:\n";
	for (int i=0;i<N;i++){
		cout<<"Chaff's dross: "<<pd2[i].dross<<endl;
		cout<<"Enter chaff's slag: "<<pd2[i].slag<<endl;
	}


	delete [] pd2;
	return 0;
}
