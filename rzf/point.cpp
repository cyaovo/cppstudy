#include "point.h"
#include <iostream>
using namespace std;
point::point(float a, float b)
{
	x = a; y = b;
}

void point::setpoint(float a, float b)
{
	x = a; y = b;
}

ostream& operator<<(ostream& os, const point& a)
{
	os << "[" << a.x << "," << a.y << "]" << endl;
	return os;
}