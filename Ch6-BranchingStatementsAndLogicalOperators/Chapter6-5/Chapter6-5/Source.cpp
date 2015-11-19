/*5. The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following
income tax code:
First 5,000 tvarps: 0% tax
Next 10,000 tvarps: 10% tax
Next 20,000 tvarps: 15% tax
Tvarps after 35,000: 20% tax
For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
loop to solicit incomes and to report tax owed.The loop should terminate when
the user enters a negative number or non-numeric input.*/

#include <iostream>
#include <cctype>	//for isnum
int main(){
	using std::cout;
	using std::cin;
	int sum,tax=0;
	char ch;

	cout<<"Enter the sum earned: ";
	(cin>>sum).get();
	while(sum>=0 || isdigit(sum)){
		if(sum<=5000)
			tax=0;
		else
			if(sum>5000 && sum<15000)
				tax=sum*0.1;
			else
				if(sum>=15000 && sum<35000)
					tax=sum*0.15;
				else
					if(sum>=35000)
						tax=5000*0.00+10000*0.10+20000*0.15+(sum-5000-10000-20000)*0.20;
		cout<<"for "<<sum<<" twarps, you earn "<<tax<<" taxes\n";
		cout<<"Enter the sum earned: ";
		cin>>sum;
	};

	return 0;
}
