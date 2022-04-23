#pragma once
#include<iostream>
using namespace std;

class Time{
public:
	Time(int=0, int=0, int=0);
	void print();
	void setTime(int, int , int);
	~Time();

private:
	int hour, minute, second;
};

