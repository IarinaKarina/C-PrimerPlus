/*3. Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies.Then the program should use a
switch to select a simple action based on the user’s selection.A program run could
look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.*/

#include <iostream>

int main(){
	char ch;
	using std::cout;
	using std::cin;

	cout<<"Please enter one of the following choices:\n";
	cout<<"a) tulip b) rose\n";
	cout<<"c) daisy d) gardenia\n";
	do{
		cout<<"Please enter a, b, c or d:";
		cin>>ch;
		if((ch=='a')||(ch=='b')||(ch=='c')||(ch=='d'))
			break;
	}while(1);

	cout<<"Today's flower is the ";
	switch(ch){
	case 'a':
		cout<<"tulip\n";
		break;
	case 'b':
		cout<<"rose\n";
		break;
	case 'c':
		cout<<"daisy\n";
		break;
	case 'd':
		cout<<"gardenia\n";
		break;
	};
}
