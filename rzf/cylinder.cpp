#include"cylinder.h"
cylinder::cylinder(float a, float b, float r, float h) :circle(a, b, r)
{
	height = h;
}

void cylinder::setheight(float h)
{
	height = h;
}

float cylinder::getheight() const
{
	return height;
}

float cylinder::area() const
{
	return 2 * circle::area() + 2 * 3.14 * radius * radius;
}

float cylinder::volumn() const
{
	return circle::area() * height;
}

ostream& operator<<(ostream& os, const cylinder& a)
{
	os << "center=[" << a.x << "," << a.y << "],r=" << a.radius << ",h=" << a.height << ",area=" << a.area() << ",volumn=" << a.volumn() << endl;
	return os;
}