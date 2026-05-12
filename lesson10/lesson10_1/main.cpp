#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    cout << "输入这个英文文章" << endl;
    char article[3][82]={0};
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 80; j++)
        {
            article[i][j]=getchar();
        }
        
    } 
    int a=0;     
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<strlen(article[i]) ; j++)
        {
            if(article[i][j]<='Z' && article[i][j]>='A')
                a++;
            else if(article[i][j]<='z' && article[i][j]>='a')
                b++;
            else if(article[i][j]<='9' && article[i][j]>='0')
                c++;
            else if(article[i][j]==' ')
                d++;
            else
                e++;
        }
    }
    cout << "大写字母有：" << a << "个" << endl;
    cout << "小写字母有：" << b << "个" << endl;
    cout << "数字有：" << c << "个" << endl;
    cout << "空格有：" << d << "个" << endl;
    cout << "其他字符有：" << e << "个" << endl;
    system("pause");
    return 0;       
}