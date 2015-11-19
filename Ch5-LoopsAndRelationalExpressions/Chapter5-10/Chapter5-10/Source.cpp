/*10. Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
Enter number of rows: 5
....*
...**
..***
.****
*****
*/

#include <iostream>

int main(){
	int rows;

	//read the number of rows to display
	std::cout<<"Enter number of rows: ";
	std::cin>>rows;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows-i-1;j++)
			std::cout<<".";
		for(int k=rows-i-1;k<rows;k++)
			std::cout<<"*";
		std::cout<<std::endl;
	}
	
	return 0;
}
