/*2. Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.
*/

#include<iostream>
using namespace std;
const int size=10;

//ask the user to enter up to 10 golf scores
//having a mean to terminate input prior
//returns the number of inputs
int inputScores(int scores[], int n){
	int i=0;
	char enter='y';

	do{
		cout<<"scores["<<i+1<<"]=";
		cin>>scores[i++];
		cout<<"More inputs? y/n: ";
		cin>>enter;
	}while(i<n && (enter=='y' || enter=='Y'));
	
	return i; 
}

//display all the scores on one line
void displayScores(int scores[],int n){
	for(int i=0;i<n;i++){
		cout<<scores[i]<<"  ";
	}
	cout<<endl;
}

//report the average score
double average(int scores[],int n){
	int i=0,av=0;

	while(i<n){
		av+=scores[i++];
	}
	return (double)av/n;
}

int main(){
	int scores[size];		//array of inputs
	int scoresNo;			//total number of inputs

	cout<<"Input the scores:\n";
	scoresNo=inputScores(scores,size);
	cout<<"The final scores are:\n";
	displayScores(scores,scoresNo);
	cout<<"The average score is: "<<average(scores,scoresNo)<<endl;

	return 0;
}