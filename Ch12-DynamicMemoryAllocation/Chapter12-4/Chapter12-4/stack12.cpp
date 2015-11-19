#include "stack12.h"
#include <iostream>
// creates stack with n elements
Stack::Stack(int n){
	size=n;
	pitems=new Item[n];
	top=0;
}

Stack::Stack(const Stack& st){
	size=st.size;
    top=st.top;
    pitems=new Item[size];
    for (int i=0; i<size; i++)
        pitems[i]=st.pitems[i];
}

Stack::	~Stack(){
	delete [] pitems;
}

bool Stack::isempty() const{
	return top==0;
}

bool Stack::isfull() const{
	return top==size;
}

// push() returns false if stack already is full, true otherwise
bool Stack::push(const Item& item){ 
	 if (top<size) {
        pitems[top++]=item;
        return true;
    }
	 else
        return false;
}

// pop() returns false if stack already is empty, true otherwise
// pop top into item
bool Stack::pop(Item& item){
	 if (top>0) {
        item=pitems[--top];
        return true;
    }
	 else
        return false;
}

Stack& Stack::operator=(const Stack& st){
	if (this==&st)
		return *this;
	delete [] pitems;
	size=st.size;
	pitems=new Item[size];
	top=st.top;
	for (int i=0; i<size; i++)
        pitems[i]=st.pitems[i];
    return *this;
}