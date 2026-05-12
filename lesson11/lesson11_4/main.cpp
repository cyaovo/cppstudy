#include <iostream>
using namespace std;
template <typename T>
void f(T a[3][3])
{
    T temp;
    for(int i=0;i<3;i++) {
        for(int j=0;j<i+1;j++) {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}
int main()
{
    int a[3][3];
    cout << "请输入一个3x3的整数矩阵："<<endl ;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> a[i][j];
        }
    }
    f(a);
    cout << "转置后的矩阵为：" << endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}