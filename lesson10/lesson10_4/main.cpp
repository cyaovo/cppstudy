#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int n=10;
    char a[n+1];
    cout << "请输入一个10个字符的字符串：" ;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n / 2; j++)
    {
        char temp = a[j];
        a[j] = a[n - 1 - j];
        a[n - 1 - j] = temp;
    }
    a[n+1]  = '\0';
    cout << "反转后的字符串为：";
    cout << a << endl;
    // 使用string类实现同样的功能
    string s;
    cout << "请输入一个字符串：" ;
    cin >> s;
    int m=s.length();
    for (int j = 0; j < m / 2; j++)
    {
        char temp = s[j];
        s[j] = s[m - 1 - j];
        s[m - 1 - j] = temp;
    }
    cout << "反转后的字符串为：";
    cout << s << endl;
    system("pause");
    return 0;
}
    