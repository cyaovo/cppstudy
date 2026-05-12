#include "Cylinder.h"
#include <iostream>
Cylinder::Cylinder (double h,double r, double x1, double y1)
{ height=h; radius=r; x=x1; y=y1; }

Cylinder::Cylinder (const Cylinder &a)
{ height=a.height; radius=a.radius; x=a.x; y=a.y; }

Cylinder::~Cylinder () { }

double Cylinder::area () const
{ return 2*3.14*radius*height + 2*3.14*radius*radius; }

double Cylinder::volume () const
{ return 3.14*radius*radius*height; }

void set_value(Cylinder &a)
{
    std::cout<<"enter cylinder's height,radius,x and y："<<std::endl;
    std::cin>>a.height>>a.radius>>a.x>>a.y;
}

void show_value(const Cylinder &a)
{
    std::cout<<"cylinder's height:"<<a.height<<", radius:"<<a.radius
             <<", x:"<<a.x<<", y:"<<a.y<<std::endl;
    std::cout<<"cylinder's area:"<<a.area()<<", volume:"<<a.volume()<<std::endl;
}

