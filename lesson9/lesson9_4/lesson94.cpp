#include <iostream>
#include "eng.h"
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    int num[26][2]={0};
    cout<<"请输入一段英文文本（以回车结束）:"<<endl;
    cin.getline(str,100);
    EngWords(str,strlen(str),num);
    cout<<"字母出现频率统计结果:"<<endl;
    for(int i=0;i<26;i++)
    {
        cout<<char('a'+i)<<": "<<double(num[i][0])/double(strlen(str))<<" "<<char('A'+i)<<": "<<double(num[i][1])/double(strlen(str))<<" "<<endl;
    }
    system("pause");
    return 0;
}