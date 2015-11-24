#include "person.h"

//Card methods
Card::Card(char st, int fc){
	CheckAndSet(st,fc);
}

//return full string of suit based on first character of suit
std::string Card::getsuit() const { 
    std::string temp;

    if (suit=='c')
        temp="Clubs";
    else 
		if (suit=='d')
        temp="Diamonds";
		else 
			if (suit=='h')
				temp="Hearts";
			else
				temp="Spades";
    return temp;
}

//checks for validity of values and sets the card to those values
void Card::CheckAndSet(char st, int fc){
	if ((tolower(st)!='c') && (tolower(st)!='d') && (tolower(st)!='h') && (tolower(st)!='s')) {
        std::cout<<"\nInvalid suit! The card is now set to clubs - c.";
        suit='c';
    } else
        suit=tolower(st);

    if ((fc<1) || (fc>13)) {
        std::cout<<"\nInvalid face value! The new value of card is 1.";
        face=1;
    } else
        face=fc;
}

//Person class methods and friend functions
void Person::Set(){
	std::cout<<"\nEnter first name of the person: ";
	std::getline(std::cin,firstName);
	std::cout<<"\nEnter last name of the person: ";
	std::getline(std::cin,lastName);
}

std::ostream& operator<<(std::ostream& os, const Person& p){
	os<<"\nFirst name of the person: "<<p.firstName;
	os<<"\nLast name of the person: "<<p.lastName;

	return os;
}

//Gunslinger class methods
void Gunslinger::Show() const{
	Person::Show();
	std::cout<<"\nDraw Time for the gun: "<<drawTime;
	std::cout<<"Number of notches for the gun: "<<noNotches;
}

void Gunslinger::Set(){
	Person::Set();
	std::cout<<"\nEnter draw time: ";
	(std::cin>>drawTime).get();
	std::cout<<"\nEnter number of notches: ";
	(std::cin>>noNotches).get();
}

//PokerPlayer class methods
//return Card with random face and suit values
Card PokerPlayer::Draw() const{
	char temp;

    int randomFace=1+int(13*rand()/(RAND_MAX + 1.0)); // generate Card face values, from 1 to 13
    int randomSuit=1+int(4*rand()/(RAND_MAX + 1.0)); // generate suit value from 1 to 4: Hearts or Diamonds or Spades or Clubs

    switch(randomSuit) {
    case 1  :
        temp='c';
        break;
    case 2  :
        temp='d';
        break;
    case 3  :
        temp='h';
        break;
    case 4  :
        temp='s';
        break;
    default :
        temp='c';
    }

    return Card(temp,randomFace); // initialize and return card with random values
}
