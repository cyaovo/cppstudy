#include <iostream>
#include "Cylinder.h"
int main()
{
    Cylinder c1,c2,c3;
    set_value(c1);
    show_value(c1);
    c2=Cylinder(5,3,1,2);
    show_value(c2);
    c3=Cylinder(c2);
    show_value(c3);
    system("pause");

    return 0;
}