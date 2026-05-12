#include<iostream>
using namespace std;
#include"cylinder.h"

int main()
{
	cylinder cyl(3.5, 6.4, 5.2, 10);
	cout << "original cylinder:\nx =" << cyl.getx() << ", y =" << cyl.gety() << ", r=" <<cyl.getradius() <<", h = " <<cyl.getheight() <<"\narea = " <<cyl.area()<< ",volume =" << cyl.volumn() << endl;

	cyl.setheight(15);

	cyl.setradius(7.5);

	cyl.setpoint(5, 5);

	cout << " \nnew cylinder:\n" << cyl;

	point& pref = cyl;

	cout << " \npref as a point: " << pref;

	circle& cref = cyl;

	cout << " \ncref as a circle: " << cref;
	system("pause");

	return 0;

}




















