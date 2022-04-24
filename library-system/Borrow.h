#pragma once
#include"Book.h"
#include"Time.h"
#include "Date.h";
#include "Student.h"

class Borrow:Book,Student,Time,Date
{
public:
	Borrow();
	Borrow(int, int, int,int,int,int,Student& borrower,Book& borrowingBook);
	void print();
	


private:
	Time borrowingTime;
	Date borrowingDate;
	Book borrowedBook;
	Student borrowedStudent;
};



