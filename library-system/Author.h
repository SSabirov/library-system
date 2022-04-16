#pragma once
#include<iostream>
#include"Person.h"

class Author:public Person
{
public:
	Author(string,string,int, int , int);
	void print();
	~Author();

private:
	string employer;
};

