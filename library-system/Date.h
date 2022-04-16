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


