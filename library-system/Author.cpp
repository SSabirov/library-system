#include"Author.h"


Author::Author(string authorName, string employerName, int dd, int mm, int yy) :authorInfo(authorName, dd, mm, yy)
{
	employer = employerName;
}

void Author::print()
{
	
	authorInfo.print();
	cout << " " << employer<<"\n";
}

