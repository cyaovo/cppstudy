#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char* My_strcat(char* str1, const char* str2)
{
    char* ptr = str1;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*str2 != '\0') {
        *ptr = *str2;
        ptr++;
        str2++;
    }
    *ptr = '\0';
    return str1;
}
int main()
{
    char str1[80]="Hello, ";
    char str2[80]="World!";
    cout << "连接后的字符串：" << My_strcat(str1,str2) << endl;
    char str3[80]="Hello, ";
    char str4[80]="World!";
    cout << "连接后的字符串：" << strcat(str3,str4) << endl;
    string s1="Hello, ";
    string s2="World!";
    cout << "连接后的字符串：" << s1+s2 << endl;
    system("pause");
    return 0;
}       