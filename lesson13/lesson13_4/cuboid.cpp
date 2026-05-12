#include "cuboid.h"
#include <iostream>
using namespace std;
void Cuboid::set_value()
{
    cout<<"请输入长方体的长、宽、高："<<endl;
    cin>>length>>width>>height;
}
void Cuboid::volume()
{
    vol=length*width*height;
}
void Cuboid::show_vol()
{
    cout<<"长方体的体积为："<<vol<<endl;
}