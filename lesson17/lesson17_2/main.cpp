#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    double real;
    double imag;
public:
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
    Complex operator+(Complex& b)
    {
        return Complex(real+b.real,imag+b.imag);
    }
    Complex operator-(Complex& b)
    {
        return Complex(real-b.real,imag-b.imag);
    }
    Complex operator*(Complex& b)
    {
        return Complex(real*b.real-imag*b.imag, imag*b.real+real*b.imag);
    }
    Complex operator/(Complex& b)
    {
        return Complex(((real*b.real+imag*b.imag)/(b.imag*b.imag+b.real*b.real)),
                       ((imag*b.real-real*b.imag)/(b.imag*b.imag+b.real*b.real)));
    }
};
int main()
{
    Complex c1,c2;
    c1=Complex(2.0,3.0);
    c2=Complex(4.0,5.0);
    Complex c3,c4,c5,c6;
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    cout<<"c1: ";c1.show_value();cout<<endl;
    cout<<"c2: ";c2.show_value();cout<<endl;
    cout<<"c1+c2: ";c3.show_value();cout<<endl;
    cout<<"c1-c2: ";c4.show_value();cout<<endl;
    cout<<"c1*c2: ";c5.show_value();cout<<endl;
    cout<<"c1/c2: ";c6.show_value();cout<<endl;
    system("pause");
    return 0;
}