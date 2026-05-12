#include <iostream>
using namespace std;
class Point
{public:
  Point(int x=0,int y=0):x(x),y(y){cout<<"fdgfd"<<'\n';}
  virtual ~Point(){cout<<"executing Point destructor"<<endl;}
  int x;
  int y;
};

class Circle:public Point
{public:
  Circle(int x=0,int y=0,int r=0):Point(x,y),radius(r){cout<<"=====fdgfd"<<'\n';}
  ~Circle(){cout<<"executing Circle destructor"<<endl;}
  int radius;
};

int main()
{
    {Point *p=new Circle;
     delete p;
    }
    system("pause");
    return 0;
}
