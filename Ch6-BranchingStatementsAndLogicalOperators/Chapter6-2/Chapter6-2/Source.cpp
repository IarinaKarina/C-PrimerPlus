/*2. Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.*/

#include <iostream>
const int Max = 10;  

int main() {
    using namespace std;
    double donation[Max]={};
	double total=0;
	int count = 0;
    bool flag = false; 

    cout<<"Please enter "<<Max<<" donations:\n";
    for(int i = 0; i < Max; i++ ) {
        cout<<"Donation #"<<i+1<<": ";
        while(!(cin>>donation[i])){
            cin.clear();                        // reset input
            while (cin.get() !='\n')
                continue;                       // get rid of bad input
            cout<<"Input terminated.\n";
            flag = true;                            
            break;
        }
		total+=donation[i];
        if(flag)                             
			break;
        count++;                              
    }
    
    // report results
	double average=0.0;
	average=total/count;
    cout<<"The average of the numbers= "<<average<<endl;
    int higher=0;         //number of donations that are higher than average
    for(int i=0; i<Max; i++ ){
       if(donation[i]>average)
		   higher++;
	}
    cout<<"There are "<<higher<<" donations higher than average."<<endl;

    return 0;
}

