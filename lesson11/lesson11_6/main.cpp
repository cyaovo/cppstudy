#include <iostream>
using namespace std;
int strcmp(const char* str1, const char* str2)
{
    for(int i=0;*(str1+i)!='\0' || *(str2+i)!='\0'; i++) {
        if(*(str1+i) != *(str2+i)) {
            return *(str1+i) - *(str2+i);
        }
    }
    return 0;
}
int main()
{
    char str1[100];
    char str2[100];
    cout << "请输入第一个字符串：" ;
    cin.getline(str1,100);
    cout << "请输入第二个字符串：" ;
    cin.getline(str2,100);
    int result = strcmp(str1,str2);
    if(result>0)
        cout << "第一个字符串大于第二个字符串" << endl;
    else if(result<0)
        cout << "第一个字符串小于第二个字符串" << endl;
    else
        cout << "两个字符串相等" << endl;
    cout << "它们的差值为：" << result << endl;
    system("pause");
    return 0;

}