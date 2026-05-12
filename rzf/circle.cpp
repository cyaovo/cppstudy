#include"circle.h"
circle::circle(float a, float b, float r) :point(a, b)
{
	radius = r;
}

void circle::setradius(float r)
{
	radius = r;
}

float circle::getradius() const
{
	return radius;
}

float circle::area() const
{
	return 3.14 * radius * radius;
}

ostream& operator<<(ostream& os, const circle& a)
{
	os << "center=[" << a.x << "," << a.y << "],r=" << a.radius << ",area=" << a.area() << endl;
	return os;
}