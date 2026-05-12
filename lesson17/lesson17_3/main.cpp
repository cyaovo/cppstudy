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
int main()
{
    double i=5;
    Complex c1(4,5);
    Complex c2,c3;
    c2=i+c1;
    c3=c1+i;
    cout<<"c1: ";c1.show_value();cout<<endl;
    cout<<"i: "<<i<<endl;
    cout<<"c1+i: ";c3.show_value();cout<<endl;
    cout<<"i+c1: ";c2.show_value();cout<<endl;
    system("pause");
    return 0;
}