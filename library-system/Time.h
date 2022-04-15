#pragma once
#include<iostream>
using namespace std;

class Time{
public:
	Time(int, int, int );
	void print();
	void setTime(int, int , int);
	~Time();

private:
	int hour, minute, second;
};

