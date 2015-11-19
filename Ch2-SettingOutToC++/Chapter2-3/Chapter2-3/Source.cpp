/*3. Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output.*/

#include <iostream>

void f1(void){
	std::cout<<"Three blind mice"<<std::endl;
}

void f2(void){
	std::cout<<"See how they run"<<std::endl;
}

int main(){
	f1();
	f1();
	f2();
	f2();

	return 0;
}
