#include "list.h"
#include <string>	//for getline

List::List() {
    first=0;
}

bool List::isempty() const {
    return first==0;
}

bool List::isfull() const {
    return first==MAX;
}

// display all information in list
void List::showList(){
    for(int i=0; i<first; i++) {
       std::cout<<"Customer "<<items[i].fullname <<"'s payment: "
		   <<items[i].payment<<std::endl;
    }
}

// adds one item to the end of list
bool List::add(const Item& item) {
    if (first<MAX) {
        items[first++] = item;
        return true;
    }
	else {
        return false;
    }
}

void List::changeName (const int id) {
    std::string newName;
	std::cout<<"Enter new item's name: ";
    std::getline(std::cin,newName);
	items[id-1].fullname=newName;
};

void List::changeVol (const int id) {
    double newPay;
	std::cout<<"Enter new item's value: ";
    std::cin>>newPay;
	items[id-1].payment=newPay;
};

void List::showItem (const int id) {
    std::cout<<"Your new item information: ";
	std::cout<<items[id-1].fullname<<"'s payment: " <<items[id-1].payment<<std::endl;
};