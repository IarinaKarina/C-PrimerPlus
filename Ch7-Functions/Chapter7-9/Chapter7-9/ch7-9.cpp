/*9. This exercise provides practice in writing functions dealing with arrays and structures.
The following is a program skeleton. Complete it by providing the described
functions:
*/

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n){
	int totalNo=0;	//total number of the students

	do{
		cout<<"Enter information about student #"<<totalNo+1<<":\n";
		cout<<"Student["<<totalNo+1<<"].fullname= ";
		cin.getline(pa[totalNo].fullname,SLEN);
		if( pa[totalNo].fullname=="" || cin.fail()){
			cin.clear();
			cout<<"Input terminated!\n";
			break;
		}
		cout<<"Student["<<totalNo+1<<"].hobby= ";
		(cin>>pa[totalNo].hobby).get();
		cout<<"Student["<<totalNo+1<<"].ooplevel= ";
		(cin>>pa[totalNo].ooplevel).get();
		totalNo++;	
	}while(totalNo<n);

	return totalNo;
}

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st){
	cout<<"Student "<<st.fullname<<" has "<<st.hobby
		<<" as a hobby, and "<<st.ooplevel<<" as ooplevel.\n";

}

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student * ps){
	cout<<"Student "<<ps->fullname<<" has "<<ps->hobby
		<<" as a hobby, and "<<ps->ooplevel<<" as ooplevel.\n";
}

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n){
	for(int i=0;i<n;i++){
		cout<<"Student "<<pa[i].fullname<<" has "<<pa[i].hobby
		<<" as a hobby, and "<<pa[i].ooplevel<<" as ooplevel.\n";
	}
}

int main(){
	cout<<"Enter class size: ";
	int class_size;
	cin>>class_size;

	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	
	delete [] ptr_stu;
	cout<<"Done\n";
	return 0;
}