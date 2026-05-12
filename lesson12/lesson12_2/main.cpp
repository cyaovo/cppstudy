#include <iostream>
#include "array.h"
using namespace std;
int main()
{
    int n;
    cout<<"请输入数组的元素个数："<<endl;
    cin>>n;
    int* a=new int[n];
    cout<<"请输入数组的各个元素："<<endl;
    input(a,n);
    sort(a,n);
    cout<<"排序后的数组为："<<endl;
    print(a,n);
    delete[] a;
    system("pause");
    return 0;
}