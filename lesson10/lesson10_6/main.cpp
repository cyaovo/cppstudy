#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout << "请输入10个整数：" ;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    void sequence(int*);
    sequence(a);
    cout << "处理后的10个整数为：" ;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    };
    system("pause");
    return 0;
}
void sequence(int* p)
{
    int max=-10000;
    int positon=0;
    for(int i=0; i<10; i++) {
        if(max<*(p+i)) {
            max=*(p+i);
            positon=i;
        }
    }
    *(p+positon)=*(p+9);
    *(p+9)=max;
}