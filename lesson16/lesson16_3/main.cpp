#include <iostream>
#define endl '\n'
using namespace std;
class Time;
class Date
{ public:
   Date(int,int,int);
   friend void display(Time &,Date &);
   friend class Time;
  private:
   int year;
   int month;
   int day;
};
Date::Date(int y,int m,int d)
{ year=y;
  month=m;
  day=d;
}

class Time
{ public:
   Time(int,int,int);
   friend void display(Time &,Date &);
   void display2(Date &);
  private:
   int hour;
   int minute;
   int sec;
};
 
Time::Time(int h,int m,int s)
{ hour=h;
  minute=m;
  sec=s;
}
void display(Time &t,Date &d)
{
  cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
  cout<<d.year<<"-"<<d.month<<"-"<<d.day<<endl;
}
void Time::display2(Date &d)
{
  cout<<hour<<":"<<minute<<":"<<sec<<endl;
  cout<<d.year<<"-"<<d.month<<"-"<<d.day<<endl;
}
   
int main()
{
 Time t1(10,13,56);
 Date d1(2024,6,15);
 
 display(t1,d1);
 t1.display2(d1);
 system("pause");
 return 0;
}