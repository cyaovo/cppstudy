#include <iostream>
using namespace std;
struct Date{
    int year;
    int month;
    int day;
};
int main()
{
    int Daycompute(Date );
    Date date1;
    cout << "请输入日期（年 月 日）：";
    cin >> date1.year >> date1.month >> date1.day;
    int day=0;
    day=Daycompute(date1);
    cout << "这是今年的第 " << day << " 天。" << endl;
    system("pause");
    return 0;
}
int Daycompute(Date date1 )
{
    int day=0;
    int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(date1.year%4==0 && date1.year%100!=0 || date1.year%400==0) {
        monthDays[1]=29;
    }
    for(int i=0;i<date1.month-1;i++){
        day+=monthDays[i];
    }
    day+=date1.day;
    return day;
}