
#include"Student.h"


Student::Student(string studentName, string studentDeparment, int dd, int mm, int yy) :studentInfo(studentName, dd, mm, yy)
{
	department = studentDeparment;
}

void Student::print()
{
	
	studentInfo.print();
	cout << department<<"\n";
}

