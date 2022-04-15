#include<iostream>
#include"Date.h"


void Date::setDate(int dd, int mm, int yy)
{
	day = dd;
	month = mm;
	year = yy;

}

void Date::print() {
	std::cout << day << "/" << month << "/" << year << "\n";
}

Date::~Date()
{
}
