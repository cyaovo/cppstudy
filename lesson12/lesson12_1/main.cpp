#include <iostream>
using namespace std;
void exchange(int &a,int &b,int &c)
{
    int temp;
    if(a<b) {temp=a;a=b;b=temp;}//让a变成前两个元素中比较大的
    if(a<c) {temp=a;a=c;c=temp;}//让a变成三个元素中最大的
    if(b<c) {temp=b;b=c;c=temp;}//让b变成后两个元素中比较大的    
}
int main()
{
    int a,b,c;
    cout<<"请输入三个整数："<<endl;
    cin>>a>>b>>c;
    exchange(a,b,c);
    cout<<"从大到小排序后为："<<a<<" "<<b<<" "<<c<<endl;
    system("pause");
    return 0;
}