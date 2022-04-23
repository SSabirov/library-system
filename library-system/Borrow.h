#pragma once
#include"Book.h"
#include"Time.h"
#include "Date.h";

class Borrow
{
public:
	Borrow();
	void print();
	
	~Borrow();

private:
	Time borrowingTime,expiryTime;
	Date borrowingDate, ExpiryDate;

};

Borrow::Borrow()
{

}

Borrow::~Borrow()
{
	
}

