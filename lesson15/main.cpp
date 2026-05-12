#include <iostream>
using namespace std;
class student {
    private:
        int num;
        int score;
    public:
        void outputinf()
        {
            cout << "学号：" << num << endl;
            cout << "成绩：" << score << endl;
            cout << "------------------" << endl;
        }
        student(int a,int b):num(a),score(b)
        {}
        friend void max(student* ,int );
};
void max(student* p,int n)
{
    int maxscore = p->score;
    int temp=0;
    for (int i = 1; i < n; i++)
    {
        if ((p + i)->score > maxscore)
        {
            maxscore = (p + i)->score;
            temp=i;
        }
    }
    cout << "最高分是：" << maxscore << endl;
    cout << "学号是：" << (p + temp)->num << endl;
    for(int j=temp+1;j<n;j++)
    {
        if((p + j)->score==maxscore)
        {
            cout << "学号是：" << (p + j)->num << endl;
        }
    }
}
int main() {
    student stus[5]={
        student(1001,85),
        student(1002,92),
        student(1003,78),
        student(1004,92),
        student(1005,88)
    };
    student* p;
    p = stus;
    p->outputinf();
    (p+2)->outputinf();
    (p+4)->outputinf();
    max(p,5);
    system("pause");
    return 0;
}