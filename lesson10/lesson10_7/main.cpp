#include <iostream>
using namespace std;
int main()
{
    void move(int* ,int ,int );
    int n;
    cout << "请输入数组元素个数：" ;
    cin >> n;
    int* a=new int[n];
    cout << "请输入" << n << "个整数：" ;
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cout << "请输入要移动的元素个数m：" ;
    cin >> m;
    move(a,n,m);
    cout << "移动后的数组元素为：" ;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout << endl;
    delete[] a;
    system("pause");
    return 0;
}
void move(int* p,int n,int m)
{
    int* temp=new int[m];
    int* temp2=new int[n-m];
    for(int i=0;i<n-m;i++)
        temp2[i]=*(p+i);
    for(int i=n-m;i<n;i++)
        temp[i-(n-m)]=*(p+i);
    for(int i=0;i<n-m;i++)
        *(p+i+m)=temp2[i];
    for(int i=0;i<m;i++)
        *(p+i)=temp[i];
    delete[] temp;
    delete[] temp2;
}