#pragma once
#include<iostream>
#include<string>
using std::string;
using std::istream;
using std::ostream;
using std::endl;
class Person {
	friend istream &read(istream &istr, Person &per);
	friend ostream &print(ostream &ostr, Person &per);

	string firstName;
	string lastName;
	string address;
public:
	Person() = default;
	Person(string, string, string);
	Person(string f, string l) :firstName(f), lastName(l) { }

	istream &myread(istream &istr) {
		istr >> firstName >> lastName >> address;
		return istr;
	}

	ostream &myprint(ostream &ostr)
	{
		ostr << firstName << " " << lastName << " " << address << endl;
		return ostr;
	}
};

istream &read(istream &istr, Person &per){
       return per.myread(istr);
}


ostream &print(ostream &ostr, Person &per){
	 return per.myprint(ostr);
}

Person::Person(string f, string l, string a) :firstName(f), lastName(l), address(a) { }