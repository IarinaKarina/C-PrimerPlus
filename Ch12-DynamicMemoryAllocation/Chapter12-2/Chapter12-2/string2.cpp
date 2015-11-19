#include "string2.h"
#include <cstring>	//for strcpy, strcat, strlen, strcmp
#include <cctype>	//for tolower, toupper	

//initializing static class member
int String::num_strings=0;

//static method
int String::HowMany(){
	return num_strings;
}

//constructors and other methods
String::String(const char* s){      //construct String from C string
	len=std::strlen(s);		//set size
	str=new char[len+1];	//allot storage
	std::strcpy(str,s);		//initialize pointer
	num_strings++;			//set object count
}

//default constructor
String::String(){		
	len=4;
	str=new char[len];
	str[0]='\0';
	num_strings++;
}

//copy constructor
String::String(const String& st){	
	len=st.len;
	str=new char[len+1];
	strcpy(str,st.str);
	num_strings++;
}

//destructor
String::~String(){		
	--num_strings;
	delete[] str;
}

//overloaded operator methods
//assign a String object to another String object
String& String::operator=(const String& st){
	if(this==&st)
		return *this;
	
	delete[] str;
	len=st.len;
	str=new char[len+1];
	strcpy(str,st.str);
	return *this;
}
//assign a char object to a String object
String& String::operator=(const char* s){
	delete [] str;
	len=std::strlen(s);
	str=new char[len+1];
	strcpy(str,s);
	return *this;
}

//read-write char-access for non-const String
char& String::operator[](int i){
	return str[i];
}

//read-only char access for const String
//the before method doesn't promise not to alter data
const char& String::operator[](int i) const{
	return str[i];
}

//overloaded operators friends
bool operator<(const String& st1, const String& st2){
	return (strcmp(st1.str,st2.str)<0);
}

bool operator>(const String& st1, const String& st2){
	return st2<st1;			//access the before operator
}

bool operator==(const String& st1, const String& st2){
	return (strcmp(st1.str,st2.str)==0);
}

//string output
std::ostream& operator<<(std::ostream& os, const String& st){
	os<<st.str;
	return os;
}

//string input
std::istream& operator>>(std::istream& is, String& st){
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
		st=temp;
	while(is && is.get()!='\n')
		continue;
	return is;
}

//string2.cpp starts
String& String::operator+=(const String &s){
	delete [] str;
	len=this->len+s.len;
	str=new char[len+1];
	str=strcat(this->str,s.str);
	return *this;
}

String String::operator+(const String & st) {
    String temp;
    temp.len=len+st.len;
    temp.str=new char[temp.len+1];
    strcpy(temp.str,str);
    strcat(temp.str,st.str);
	return temp;
}
//friend function
String operator+(const char *st2, const String & st) {
    String temp;
    temp.len=st.len + strlen(st2);
    temp.str=new char[temp.len+1];
    strcpy(temp.str,st2);
    strcat(temp.str,st.str);

    return temp;
}

void String::stringlow() {
    char* temp=new char[len+1];
    strcpy(temp,str);

    for (int i=0; i<len; i++)
        temp[i]=tolower(temp[i]);
    strcpy(str,temp);
    delete [] temp;
}

void String::stringup() {
    char *temp = new char[len+1];
    strcpy(temp,str);

    for (int i=0; i<len; i++)
        temp[i]=toupper(temp[i]);
    strcpy(str,temp);
    delete [] temp;

}

int String::has(char ch) const {
    int chNo=0;		//the number of appearances
    for (int i=0; i<len; i++) {
        if (str[i]==ch)
            chNo++;
    }
	    return chNo;
}
