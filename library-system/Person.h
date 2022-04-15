#pragma once

#include<iostream>
#include"Date.h"
using namespace std;

class Person:Date
{
public:
	Person(string,int, int, int);
	void setName(string);
	string getName();
	void print();
	~Person();

private:
	string name;
};

