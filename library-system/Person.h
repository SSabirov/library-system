#pragma once


#include"Date.h"
using namespace std;

class Person:public Date
{
public:
	Person():dob(0, 0, 0)
	{
		name = "Unknonwn";	
	}
	Person(string,int, int, int);
	void setName(string);
	string getName();
	void print();


private:
	string name;
	Date dob;
};

