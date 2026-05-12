#pragma once
#include"circle.h"
class cylinder :public circle
{
public:
	cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
	void setheight(float);
	float getheight() const;
	float area() const;
	float volumn() const;
	friend ostream& operator<<(ostream&, const cylinder&);
protected:
	float height;
};