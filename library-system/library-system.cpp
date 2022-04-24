// library-system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Date.h"
#include"Person.h"
#include "Author.h"
#include"Student.h"
#include"Book.h"
#include"Borrow.h"

vector<Book> books;
vector<Borrow> borrowers;

void addBook();


int main()
{
	Student john("John", "ComputerScience", 19, 11, 1990);
	Book a("CleanCode", "Robinson", "bell Lab", 19, 12, 1970,"Pearson",1);

	john.print();
	a.print();

}




//to add book into books vector
void addBook()
{
	string passTitle, passAuthor, passEmployer, passPublisher;
	int dd, mm, yy, numberOfBooks;
	cout << "Insert Title: ";
	cin >> passTitle;
	cout << "Insert Authors name : ";
	cin >> passAuthor;
	cout << "Insert Authors employer : ";
	cin >> passEmployer;
	cout << " Insert date of birth  ";
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
	Book passBook(passTitle, passAuthor, passEmployer, dd, mm, yy, passPublisher, numberOfBooks);
	books.push_back(passBook);
}

