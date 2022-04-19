#include "Book.h"

Book::Book(string passTitle, string authorName, string employerName, int dd, int mm, int yy, string passPublisherName, int passNumberOfBooks):
	author(authorName,employerName,dd,mm,yy),
publishedBy(passPublisherName)
{

	setTitle(passTitle);
	numberOfbooks =passNumberOfBooks;
}

void Book::setTitle(string passTitle)
{
	title = passTitle;
}

void Book::print()
{
	cout << "Book Title : " << title << "\n";
	author.print();
	publishedBy.print();
	cout << "\nNumberof Books available"<<numberOfbooks;

}