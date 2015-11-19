#include "move.h"
#include <iostream>

// sets x, y to a, b
Move::Move(double a, double b){
	this->x=a;
	this->y=b;
}

// shows current x, y values
void Move::showmove() const{
	std::cout<<"Show method for the current object:\n";
	std::cout<<"\tX-coordinate = "<<x<<std::endl;
	std::cout<<"\tY-coordinate = "<<y<<std::endl;
}

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move & m) {
	this->x+= m.x;
	this->y+= m.y;

	return *this;
}

// resets x,y to a, b
void Move::reset(double a, double b){
	this->x=a;
	this->y=b;
}
