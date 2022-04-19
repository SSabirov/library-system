#pragma once

#include<iostream>
#include"Date.h"
using namespace std;

class Person
{
public:
	Person(string,int, int, int);
	void setName(string);
	string getName();
	void print();
	~Person();

private:
	string name;
	Date dob;
};

