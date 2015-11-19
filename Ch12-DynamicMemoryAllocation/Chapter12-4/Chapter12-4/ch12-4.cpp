/*4. Consider the following variation of the Stack class defined in Listing 10.10:
		look in the header file
As the private members suggest, this class uses a dynamically allocated array to hold
the stack items. Rewrite the methods to fit this new representation and write a
program that demonstrates all the methods, including the copy constructor and
assignment operator.*/

#include "stack12.h"
#include <iostream>
using namespace std;
void stackprocessing(Stack&);

int main() {
    Stack st1, st2; // create an empty stack
    cout<<"Stack #1:"<<endl;
    stackprocessing(st1);
    if (st1.isempty()==false) {
        cout<<"\n\nFirst stack is not empty, creating copy of it...." << endl;
        st2=st1;
        Stack st3=st2;
        cout<<"Stack #2:"<<endl;
        stackprocessing(st3);
    } else     //if the stack is empty
        cout<<"\n\nFirst stack is empty, exitting...";

    cout << "\nBye";
    return 0;
}

void stackprocessing(Stack &st) {
    char ch;
    unsigned long po;
    cout<<"Please enter A to add a purchase order,\n"
         <<"P to process a PO, or Q to quit.\n";
    while (cin>>ch && toupper(ch)!='Q') {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch)){
            cout<<'\a';
            continue;
        }
        switch(ch) {
        case 'A':
        case 'a':
            cout<<"Enter a PO number to add: ";
            cin>>po;
            if (st.isfull())
                cout<<"stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout<<"stack already empty\n";
            else {
                st.pop(po);
                cout<<"PO #"<<po<<" popped\n";
            }
            break;
        }	
        cout<<"Please enter A to add a purchase order,\n"
             <<"P to process a PO, or Q to quit.\n";
    }	
}	