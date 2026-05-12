#include <iostream>
#include <string>
using namespace std;
char* encrypt1(const char* s1, char* s2)
{
    char* s=s2;
    int i=0;
    while(*(s1+i)!='\0')
    {
        s2[2*i]=s1[i]+4;
        s2[2*i+1]='*';
        i++;
    }
    s2[2*i]='\0';
    return s;
}
string &encrypt2(const string &s1, string &s2)
{
    s2="";
    for(int i=0;i<s1.size();i++)
    {
        s2+=s1[i]+4;
        s2+='*';
    }
    return s2;
}
int main()
{
    const char* str1="China";
    char str2[50];
    cout<<"加密前的字符串为："<<str1<<endl;
    cout<<"加密后的字符串为："<<encrypt1(str1,str2)<<endl;

    string s1="China";
    string s2;
    cout<<"加密前的字符串为："<<s1<<endl;
    cout<<"加密后的字符串为："<<encrypt2(s1,s2)<<endl;

    system("pause");
    return 0;
}