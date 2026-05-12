#include <iostream>
#include "stu.h"
using namespace std;
int main()
{
    cout<<"请输入10个学生的信息："<<endl;
    stu students[10];
    for(int i=0;i<10;i++){
        cout<<"第"<<i+1<<"个学生"<<endl;
        students[i].input();
    }
    scorestatistics(students,10);
    system("pause");
    return 0;
}