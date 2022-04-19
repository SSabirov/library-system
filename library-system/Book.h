#pragma once

#include"Author.h"
#include"Publisher.h"



class Book
{
public:
	Book(string, string, string, int, int, int, string, int);// title,Author constructor, Publisher constructor, numberOfbooks
	void print();
	void setTitle(string);
	Book getBook();
	

private:
	string title;
	Author author;
	Publisher publishedBy;
	int numberOfbooks;
};

