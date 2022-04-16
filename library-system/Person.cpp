#include"Person.h"
#include<iostream>


Person::Person(string passName="", int dd = 0, int mm = 0, int yy = 0) : Date(dd, mm, yy)
{
	setName(passName);
}


void Person::setName(string passName)
{
	name = passName;
}

string Person::getName()
{
	return name;
}

void Person::print()
{
	cout << "Name: " << getName() << "\t";
	Date::print();
}
Person::~Person()
{
}