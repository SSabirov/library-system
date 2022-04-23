#pragma once

#include"Author.h"
#include"Publisher.h"



class Book
{
public:
	Book(string=NULL, string=NULL, string=NULL, int=0, int=0, int=0, string=NULL, int=0);// title,Author constructor, Publisher constructor, numberOfbooks
	void print();
	void setTitle(string);


private:
	string title;
	Author author;
	Publisher publishedBy;
	int numberOfbooks;
};

