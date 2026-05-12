#include <iostream>
using namespace std;
int main()
{
    void sequence(int&, int&, int&);
    int a,b,c;
    cout << "请输入三个整数：" ;
    cin >> a >> b >> c;
    sequence(a,b,c);
    cout << "按升序排列后的三个整数为：" << a << " " << b << " " << c << endl;
    system("pause");
    return 0;
}

void sequence(int& x, int& y, int& z)
{
    int temp;
    if (x > y) {
        temp = x; x = y; y = temp;
    }
    if (x > z) {
        temp = x; x = z; z = temp;
    }
    if (y > z) {
        temp = y; y = z; z = temp;
    }
}