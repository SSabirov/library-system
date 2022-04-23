#include"Person.h"



Person::Person(string passName, int dd , int mm , int yy ) : dob(dd, mm, yy)
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
	dob.print();
}
