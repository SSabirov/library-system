#pragma once
#include<iostream>
#include"Person.h"


class Student:public Person
{
public:
	Student(string,string,int ,int, int);
	void print();
	~Student();

private:
	string department;
};

