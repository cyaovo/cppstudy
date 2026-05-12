#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    void settime();
    /*
    {
        cout<<"请输入时间（时 分 秒）："<<endl;
        cin>>hour>>minute>>second;
    }
    */
    void showtime();
    /*
    {
        cout<<"时间为："<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
    }
    */
};
Time t;
int main()
{
    t.settime();
    t.showtime();
    system("pause");
    return 0;
}
void Time::settime()
{
    cout<<"请输入时间（时 分 秒）："<<endl;
    cin>>hour>>minute>>second;
}
void Time::showtime()
{
    cout<<"时间为："<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
}
