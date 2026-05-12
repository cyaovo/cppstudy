#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout<<"请输入两个数字：";
    cin>>a>>b;
    //上下行小数点对齐
    cout.width(10);
    cout.precision(4);
    cout.setf(ios::fixed);
    cout<<a<<endl;
    cout.width(10);
    cout.precision(4);
    cout.setf(ios::fixed);
    cout<<b<<endl;
    system("pause");
    return 0;
}//这是使用流对象的方法