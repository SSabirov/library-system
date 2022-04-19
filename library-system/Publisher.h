#pragma once
#include<iostream>
using namespace std;

class Publisher
{
public:
	Publisher(string="");
	void print();
	void setPublisherName(string passPublisherName);
	~Publisher();

private:
	string publisherName;
};

