#include "emp.h"

//abstract class methods and friends
// just displays first and last name
std::ostream& operator<<(std::ostream& os, const abstr_emp& e){
	os<<e.fname<<", "<<e.lname<<std::endl;
	return os;
}

// labels and shows all data
void abstr_emp::ShowAll() const{
	std::cout<<"\tFirst name: "<<fname<<std::endl;
	std::cout<<"\tLast name: "<<lname<<std::endl;
	std::cout<<"\tJob name: "<<job<<std::endl;
}

// prompts user for values
void abstr_emp::SetAll(){
	std::cout<<"Enter employee's first name: ";
	std::getline(std::cin,fname);
	std::cout<<"Enter employee's last name: ";
	std::getline(std::cin,lname);
	std::cout<<"Enter employee's job name: ";
	std::getline(std::cin,job);
}

abstr_emp::~abstr_emp() {}

//employee's methods
void employee::ShowAll() const{
	abstr_emp::ShowAll();
}

void employee::SetAll(){
	abstr_emp::SetAll();
}

//manager's methods
void manager::ShowAll() const{
	std::cout<<"Manager:\n";
	abstr_emp::ShowAll();
	std::cout<<"\tIs in charge of: "<<inchargeof<<std::endl;
}

void manager::SetAll(){
	abstr_emp::SetAll();
	std::cout<<"Enter how many persons is in charge of: ";
	std::cin>>inchargeof;
}

//fink's methods
void fink::ShowAll() const{
    abstr_emp::ShowAll();
    std::cout<<"\Reports to: " <<reportsto<<std::endl;
}

void fink::SetAll(){
    abstr_emp::SetAll();
    std::cout<<"Enter whom to report to: ";
    std::getline(std::cin,reportsto);
}

//highfink's methods
void highfink::ShowAll() const{
    abstr_emp::ShowAll();
    std::cout<<"\tIs in charge of: "<<InChargeOf()<<" employees"<<std::endl;
    std::cout<<"\tReports to: "<<ReportsTo()<<std::endl;
}

void highfink::SetAll(){
    abstr_emp::SetAll();
    std::cout<<"Enter how many persons is in charge of: ";
    std::cin>>InChargeOf();
    std::cout<<"Enter whom to report to: ";
    std::getline(std::cin,ReportsTo());
} 
