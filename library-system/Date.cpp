#include<iostream>
#include"Date.h"

Date::Date() {
	setDate(0, 0, 0);
}

Date::Date(int dd) {
	setDate(dd, 0, 0);
}

Date::Date(int dd, int mm) {
	setDate(dd, mm, 0);
}

Date::Date(int dd, int mm, int yy)
{
	if (dd > 0 && dd <= 31 && mm <= 12 && mm > 0)
	{
		setDate(dd, mm, yy);
	}
	else
	{
		day = 0;
		month = 0;
		year = 0;
		std::cout << "Invalid value entered \n";
	}

}

void Date::setDate(int dd, int mm, int yy)
{
	day = dd;
	month = mm;
	year = yy;

}

void Date::print() {
	std::cout << day << "/" << month << "/" << year << "\t";
}

Date::~Date()
{
}
