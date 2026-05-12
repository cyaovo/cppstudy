#pragma once
#include"point.h"
class circle :public point
{
public:
	circle(float x = 0, float y = 0, float r = 0);
	void setradius(float);
	float getradius() const;
	float area() const;
	friend ostream& operator<<(ostream&, const circle&);
protected:
	float radius;
};