#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
		int x;
		int y;
public:
	Point();
	Point(int x, int y);
	Point operator +(const Point & other);//перегрузка оператора сложения
};