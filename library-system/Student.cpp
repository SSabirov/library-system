
#include"Student.h"


Student::Student(string studentName, string studentDeparment, int dd, int mm, int yy) :Person(studentName, dd, mm, yy)
{
	department = studentDeparment;
}

void Student::print()
{
	cout << "Student Created: ";
	Person::print();
	cout << department<<"\n";
}

Student::~Student()
{
}