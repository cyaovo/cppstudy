#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    int area;
    cout<<"请输入三角形的三条边长：";
    cin>>a>>b>>c;
    int p=(a+b+c)/2;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<"能构成三角形"<<endl;
    }
    else
    {
        cerr<<"不能构成三角形"<<endl;
        system("pause");
        return 0;
    }
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"三角形的面积为："<<area<<endl;
    system("pause");
    return 0;  
}