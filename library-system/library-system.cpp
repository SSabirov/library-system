// library-system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
#include"Person.h"
#include "Author.h"
#include"Student.h"


int main()
{
	Author a("Alex Welling", "CodesW Ltd", 12, 11, 1994);
	a.print();
	Student b("Tom Petley", "Computer Science", 20, 12, 2000);
	b.print();
	

}

