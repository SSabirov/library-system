// library-system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Date.h"
#include"Person.h"
#include "Author.h"
#include"Student.h"
#include"Book.h"
using namespace std;

int main()
{
	
	string passTitle, passAuthor, passEmployer, passPublisher;
	int dd, mm, yy, numberOfBooks;
	cout << "Insert Title: ";
	cin >> passTitle;
	cout << "Insert Authors name : ";
	cin >> passAuthor;
	cout << "Insert Authors employer : ";
	cin >> passEmployer;
	cout << " Insert date of birth : ";
	cout << " Day:";
	cin >> dd;
	cout << " Month";
	cin >> mm; 
	cout << " Year: ";
	cin >> yy;
	cout << "insert number of books |:";
	cin >> numberOfBooks;
	cout << "insert publisher: ";
	cin >> passPublisher;
	Book bok(passTitle, passAuthor, passEmployer, dd, mm, yy,passPublisher, numberOfBooks);
	
	bok.print();

	
	
	

}

