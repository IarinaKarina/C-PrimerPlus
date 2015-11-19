//string class definition
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS	//for strcpy being unsafe
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>

class String{
private:
	char* str;					//pointer to string
	int len;					//length of string
	static int num_strings;		//number of objects
	static const int CINLIM=80;	//cin input limit
public:
	//constructors and other methods
	String(const char* s);				//constructor
	String();							//default constructor
	String(const String&);				//copy constructor
	~String();							//destructor
	int length() const{	return len;	}	//inline function
	//overloaded operator methods
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;

	//+ op to allow to join 2 strings into one
	String& operator+=(const String&);	
	String operator+(const String&);
	friend String operator+(const char*, const String&);
	
	//overloaded operators friends
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend std::ostream& operator<<(std::ostream& os, const String& st);
	friend std::istream& operator>>(std::istream& is, String& st);
	//static function
	static int HowMany();

	void stringlow();		//converts all alphabetic characters in a string to lowercase
	void stringup();		//function that converts all alphabetic characters in a string to uppercase.
	int has(char) const;	//returns the number of times the character appears in the string.
};

#endif
#endif