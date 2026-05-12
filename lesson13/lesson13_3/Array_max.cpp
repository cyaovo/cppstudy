#include "Array_max.h"
#include <iostream>
using namespace std;

void Array_max::set_value()
{
    cout<<"请输入10个整数："<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
}
void Array_max::max_value()
{
    max=arr[0];
    for(int i=1;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
}
void Array_max::show_value()
{
    cout<<"数组中的最大值为："<<max<<endl;
}
