#include <iostream>
using namespace std;
void reverse(int *p, int n)
{
    for(int i=0; i<n/2; i++) {
        int temp = *(p+i);
        *(p+i) = *(p+n-1-i);
        *(p+n-1-i) = temp;
    }
}
int main()
{
    int n;
    cout << "请输入数组元素个数：" ;
    cin >> n;
    int* a= new int[n];
    cout << "请输入" << n << "个整数：" ;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    reverse(a,n);
    cout << "逆序后的数组元素为：" ;
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    delete[] a;//别忘了！！！
    return 0;
}