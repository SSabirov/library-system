#include"Publisher.h"
Publisher::Publisher(string passPublisherName)
{
	setPublisherName(passPublisherName);
}

void Publisher::setPublisherName(string passPublisherName)
{
	publisherName = passPublisherName;
}

void Publisher::print()
{
	cout << publisherName;
}

Publisher::~Publisher()
{
}