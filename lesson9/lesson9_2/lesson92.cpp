#include <iostream>
#include <string>
#include "bs.h"
using namespace std;
int main()
{
    int arr[5];
    char carr[5];
    string strarr[4];
    cout << "请输入五个数字:" << endl;
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "请输入五个字符:" << endl;
    for(int i = 0; i < 5; i++)
        cin >> carr[i];
    cout << "请输入四个字符串:" << endl;
    for(int i = 0; i < 4; i++)
        cin >> strarr[i];
    Reverse(arr, 5);
    Reverse(carr, 5);
    Reverse(strarr, 4);
    cout << "数字逆序结果:" << endl;
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "字符逆序结果:" << endl;
    for(int i = 0; i < 5; i++)
        cout << carr[i] << " ";
    cout << endl;
    cout << "字符串逆序结果:" << endl;
    for(int i = 0; i < 4; i++)
        cout << strarr[i] << " ";
    cout << endl;
    system("pause");
    return 0;
}
