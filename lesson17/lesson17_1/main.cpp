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
    operator double()
    {
        return real;
    };
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
Complex operator+(Complex& a, Complex& b)
{
    return Complex(a.get_real()+b.get_real(), a.get_imag()+b.get_imag());
}
int main()
{
    Complex c1,c2;
    c1=Complex(2.0,3.0);
    c2=Complex(4.0,5.0);
    Complex c3;
    c3=c1+c2;
    cout<<"c1: ";c1.show_value();cout<<endl;
    cout<<"c2: ";c2.show_value();cout<<endl;
    cout<<"c3: ";c3.show_value();cout<<endl;
    double d;
    d=c2+1.5;
    cout<<"c2+1.5: "<<d<<endl;
    Complex c4;
    c4=Complex(d);
    cout<<"c4=c2+1.5: ";c4.show_value();cout<<endl;
    system("pause");
    return 0;
}