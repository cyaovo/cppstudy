#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "请输入要输入的字符串个数：" ;
    cin >> n;
    string* str = new string[n];  
    cout << "请输入字符串内容：" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(str[j] > str[j+1])
            {
                string temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    cout << "排序后的字符串为：" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    system("pause");
    delete[] str;
    return 0;
}