#include"Person.h"
#include<iostream>


Person::Person(string passName, int dd, int mm, int yy) : Date(dd, mm, yy)
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
	cout << "Name: " << getName() << endl;
	Date::print();
}
Person::~Person()
{
}