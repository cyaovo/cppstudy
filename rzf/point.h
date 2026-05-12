#pragma once
#include<iostream>
using namespace std;
class point
{
public:
	point(float x = 0, float y = 0);
	void setpoint(float, float);
	float getx() const { return x; }
	float gety() const { return y; }
	friend ostream& operator<<(ostream&, const point&);
protected:
	float x, y;
};