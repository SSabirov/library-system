#pragma once

#include"Person.h"


class Student:public Person
{
public:
	Student():studentInfo("",0,0,0)
	{
		department = "Unknown";
	}
	Student(string,string,int ,int, int);
	void print();


private:
	string department;
	Person studentInfo;
};

