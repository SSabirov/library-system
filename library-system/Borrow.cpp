#include "Borrow.h"

Borrow::Borrow() :borrowingDate(0, 0, 0), borrowingTime(0, 0, 0)
{

}
Borrow::Borrow(int passHour, int passMinute, int passSec, int dd, int mm, int yy, Student& borrower, Book& borrowingBook)
	:borrowingTime(passHour,passMinute,passSec),borrowingDate(dd,mm,yy),borrowedStudent(borrower),borrowedBook(borrowingBook)
{

}

void Borrow::print()
{
	borrowedStudent.print();
	borrowedBook.print();
	cout << "Borrowed on: ";
	borrowingDate.print();
	borrowingTime.print();

}