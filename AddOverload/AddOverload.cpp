#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Point a(5, 1);
	Point b(77, 12);

	Point ñ = a.operator+ (b);
}

