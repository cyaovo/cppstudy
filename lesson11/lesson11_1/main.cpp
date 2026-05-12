#include <iostream>
using namespace std;
int length(char* p)
{
    int len=0;
    while(*(p+len)!='\0') len++;
    return len;
}
int main()
{
    char str[100];
    cout << "请输入一个字符串：" ;
    cin >> str;
    cout << "该字符串的长度为：" << length(str) << endl;
    system("pause");
    return 0;
}
