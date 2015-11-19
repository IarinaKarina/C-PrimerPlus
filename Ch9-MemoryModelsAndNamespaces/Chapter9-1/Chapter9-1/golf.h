/*1. Here is a header file:
// golf.h -- for pe9-1.cpp*/
#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
struct golf{
	char fullname[Len];
	int handicap;
};
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc);
// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);
// function resets handicap to new value
void handicap(golf & g, int hc);
// function displays contents of golf structure
void showgolf(const golf & g);
/*Note that setgolf() is overloaded. Using the first version of setgolf() would
look like this:
golf ann;
setgolf(ann, "Ann Birdfree", 24);
The function call provides the information that’s stored in the ann structure. Using
the second version of setgolf() would look like this:
golf andy;
setgolf(andy);
The function would prompt the user to enter the name and handicap and store
them in the andy structure.This function could (but doesn’t need to) use the first
version internally.
*/

#endif