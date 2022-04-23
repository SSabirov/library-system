#pragma once
#include<iostream>


class Date
{
public:
	Date();
	Date(int, int, int);
	void print();
	void setDate(int,int,int);

private:
	int day;
	int month;
	int year;
};


