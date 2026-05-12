#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    double real;
    double imag;
public:
    friend Complex operator+(const Complex& a, const Complex& b);
    friend Complex operator+(double i,const Complex& b);
    friend istream& operator>>(istream& input, Complex& a );
    friend ostream& operator<<(ostream& output,const Complex& a );
    Complex(double r=0, double i=0): real(r), imag(i){};
    Complex(const Complex &c)
    {
        real = c.real;
        imag = c.imag;
    };
    ~Complex(){};
    void set_value(double r,double i)
    {
        real=r;
        imag=i;
    };
    void show_value() const
    {
        cout<<"real:"<<real<<", imag:"<<imag<<endl;
    };
    double get_real() const
    {
        return real;
    };
    double get_imag() const
    {
        return imag;
    };
};
Complex operator+(const Complex& a, const Complex& b)
{
    return Complex(a.real+b.real, a.imag+b.imag);
}
Complex operator+(double i,const Complex& b)
{
    return Complex(i + b.get_real(), b.get_imag());
}
istream& operator>>(istream& input, Complex& a)
{
    input>>a.real>>a.imag;
    return input;
}
ostream& operator<<(ostream& output, const Complex& a)
{
    output<<a.real<<"+"<<a.imag<<"i";
    return output;
}
int main()
{
    double i=5;
    Complex c1;
    cout<<"输入复数c1"<<endl;
    cin>>c1;
    Complex c2,c3,c4;
    c2=i+c1;
    c3=c1+i;//利用了隐式类型转换
    c4=Complex(2,3);
    cout<<"i+c1="<<c2<<endl;
    cout<<"c1+i="<<c2<<endl;
    cout<<"c1+c4="<<c1+c4<<endl;
    system("pause");
    return 0;
}