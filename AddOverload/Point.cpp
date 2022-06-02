#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
	cout << this << endl;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
	cout << this << endl;
}

Point Point::operator+(const Point & other)
{
	Point temp;
	temp.x = this->x + other.x;
	temp.y = this->y + other.y;
	
	return temp;
}