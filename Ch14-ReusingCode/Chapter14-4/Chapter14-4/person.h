#ifndef _PERSON_H
#define _PERSON_H
#include <iostream>
#include <string>

class Card{
private:
    char suit;		// card Suit
    int face;		// card Face value
public:
    Card() : suit('c'), face(2) {}	// initialize suit character to first letter of Suit, and face to int value
    Card(char st, int fc);
    std::string getsuit() const;	// getsuit returns full string name of card suit
	int getFace() const { return face; }   // return int value of face with range of 1-13, 13 is Joker, or the highest value
    void CheckAndSet(char st, int fc); // checks for validity of values and sets the card to those values
};

class Person{
private:
    std::string firstName;		// first name of a person
    std::string lastName;		// last name of a person
public:
    Person(std::string fn="first", std::string ln="last") : firstName(fn), lastName(ln) {}
	 virtual ~Person() {}

	virtual void Show() const { std::cout<<firstName<<" "<<lastName;  }			
    virtual void Set();
    friend std::ostream& operator<<(std::ostream& os, const Person& p); 
};

class Gunslinger : virtual public Person{
private:
	double drawTime;	//a gunslinger’s draw time
	int noNotches;		//number of notches on a gunslinger’s gun.
public:
	Gunslinger(std::string fn="gun", std::string ln="slinger", double dt=1.0, int no=6)
		: Person(fn,ln), drawTime(dt), noNotches(no) {}
	Gunslinger(const Person& ps, double dt=1.0, int no=6) : Person(ps), drawTime(dt), noNotches(no) {} 
	virtual ~Gunslinger() {}
	
	virtual double Draw() const{ return drawTime;}
	virtual void Show() const;
	virtual void Set();
};

class PokerPlayer : virtual public Person{
public:
	PokerPlayer(std::string fn="empty", std::string ln="name") : Person(fn, ln) {}
	PokerPlayer(const Person& ps) : Person(ps) {}
	virtual ~PokerPlayer() {}

	virtual Card Draw() const;		//return Card with random face and suit values
};

class BadDude : public Gunslinger, public PokerPlayer{
public:
	BadDude(std::string fn="empty", std::string ln="name", double dt=1.0, int no=6) :
		Person(fn,ln), Gunslinger(fn,ln,dt,no), PokerPlayer(fn, ln) {}
	BadDude(const Person& ps, double dt, int no) : Person(ps), Gunslinger(ps,dt,no), PokerPlayer(ps) {}
	BadDude(Gunslinger& gs) : Gunslinger(gs) {}
	virtual ~BadDude() {}
	
	virtual double Gdraw() const { return Gunslinger::Draw();}	//returns drawTime
	virtual Card Cdraw() const { return PokerPlayer::Draw();}	// returns Card with random values (suit + face)
	virtual void Show() const { Gunslinger::Show();}
	virtual void Set() { Gunslinger::Set(); }
};

#endif
