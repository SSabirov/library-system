#include"Time.h"

Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}

void Time::setTime(int hr, int min, int sec)// hour, minute, second
{
	if (hr >= 0 && hr < 24 && min <= 60 && min >= 0 && sec <= 60 && sec >= 0)
	{
		hour = hr;
		minute = min;
		second = sec;
	}
	else
	{
		hour = 0;
		minute = 0;
		second = 0;
	}
}
void Time::print()
{
	cout << hour << ":" << minute << ":" << second << endl;

}
Time::~Time()
{
}