#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout << "请输入一个字符串：" ;
    cin.getline(str,100);//记得学怎么用getline
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]>='a'&&str[i]<='z')
            a++;
        else if(str[i]>='A'&&str[i]<='Z')
            b++;
        else if(str[i]==' ')
            c++;
        else if(str[i]>='0'&&str[i]<='9')
            d++;
        else
            e++;
    }
    cout << "该字符串中小写字母个数为：" << a << endl;
    cout << "该字符串中大写字母个数为：" << b << endl;
    cout << "该字符串中数字个数为：" << d << endl;
    cout << "该字符串中空格个数为：" << c << endl;
    cout << "该字符串中其他字符个数为：" << e << endl;
    system("pause");
    return 0;
    
}