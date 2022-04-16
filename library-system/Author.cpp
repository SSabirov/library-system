#include"Author.h"
#include<iostream>

Author::Author(string authorName, string employerName, int dd, int mm, int yy) :Person(authorName, dd, mm, yy)
{
	employer = employerName;
}

void Author::print()
{
	cout << "Author Created :";
	Person::print();
	cout << " " << employer<<"\n";
}

Author::~Author()
{
}