#include <iostream>
using namespace std;
void m_copy(const char* str1,char* str2,int m)
{
    int i=0;
    while(*(str1+i+m-1)!='\0') {
        *(str2+i)=*(str1+i+m-1);
        i++;
    }
    str2[i]='\0';
}
int main()
{
    char str1[100]="abcdefghijklmnopqrstuvwxyz";
    char str2[100];
    int m;
    cout << "请输入要复制的起始位置m：" ;
    cin >> m;
    m_copy(str1,str2,m);
    cout << "原字符串为：" << str1 << endl;
    cout << "复制后的字符串为：" << str2 << endl;
    system("pause");
}