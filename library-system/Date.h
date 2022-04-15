#pragma once
#include<iostream>


class Date
{
public:
	Date();
	Date(int);
	Date(int, int);
	Date(int,int,int);
	~Date();
	void print();
	void setDate(int,int,int);
private:
	int day;
	int month;
	int year;
};

Date::Date() {
	setDate(0, 0, 0);
}

Date::Date(int dd) {
	setDate(dd, 0, 0);
}

Date::Date(int dd, int mm) {
	setDate(dd, mm, 0);
}

Date::Date(int dd,int mm,int yy)
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
