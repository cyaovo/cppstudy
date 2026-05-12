#include <iostream>
using namespace std;
class rational
{
public:
    int a;
    int b;
    rational(int m,int n):a(m),b(n){}
    rational(){};
    void display_int();
    void display_double();
    friend rational operator+(const rational& a,const rational& b);
    friend rational operator-(const rational& a,const rational& b);
    friend istream& operator>>(istream& input,rational& a);
    friend ostream& operator<<(ostream& output,const rational& a);
};
int gcd_N(int a, int b)//输出绝对值的最大公约数
{
    if(a<0) a=-a;
    if(b<0) b=-b;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void rational::display_int()
{
    int m;
    int temp=1;
    m=gcd_N(a,b);
    if(a*b<0) temp=0;
    a=a/m;
    b=b/m;
    if(a<0) a=-a;
    if(b<0) b=-b;
    if(temp=1) cout<<a<<"/"<<b;
    if(temp=0) cout<<-a<<"/"<<b;
}
void rational::display_double()
{
    cout<<double(a)/double(b);
}
rational operator+(const rational& p,const rational& q)
{
    int up=p.a*q.b+q.a*p.b;
    int down=p.b*q.b;
    return rational(up,down);
}
rational operator-(const rational& p,const rational& q)
{
    int up=p.a*q.b-q.a*p.b;
    int down=p.b*q.b;
    return rational(up,down);
}
istream& operator>>(istream& input,rational& p)
{
    input>>p.a;
    cout<<"/";
    input>>p.b;
    return input;
}
ostream& operator<<(ostream& output,const rational& p)
{
    int m;
    int temp=1;
    double temp2=double(p.a)/double(p.b);
    m=gcd_N(p.a,p.b);
    if(p.a*p.b<0) temp=0;
    int a=p.a;
    int b=p.b;
    a=a/m;
    b=b/m;
    if(a<0) a=-a;
    if(b<0) b=-b;
    if(temp=1) output<<a<<"/"<<b;
    if(temp=0) output<<-a<<"/"<<b;
    output<<" or "<<temp2;
    return output;
}
int main()
{ rational r1(2,3),r2(1,6),r3,r4;    
  //测试你的类的功能
  r3=r1+r2;     //   2/3+1/6=5/6
  cout<<r3<<endl;
  r3=r1-r2;    //   2/3-1/6=1/2
  cout<<r3<<endl;
  cin>>r4;
  cout<<r4;
  system("pause");
 
  return 0;  
}
