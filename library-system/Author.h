#pragma once

#include"Person.h"

class Author:public Person
{
public:
	Author():authorInfo("",0,0,0)
	{
		employer = "Unknown";
	}
	Author(string,string,int, int , int);
	void print();
	

private:
	string employer;
	Person authorInfo;
};

