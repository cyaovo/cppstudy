#include <iostream>
using namespace std;
class Shape
{
    public:
    virtual float printArea() const = 0;
};
class Rectangle:public Shape
{
    public:
    Rectangle(float l=0,float w=0):length(l),width(w){}
    float printArea() const
    {
        return length*width;
    }
    private:
    float length;
    float width;
};
class Triangle:public Shape
{
    public:
    Triangle(float b=0,float h=0):base(b),height(h){}
    float printArea() const
    {
        return 0.5*base*height;
    }
    private:
    float base;
    float height;
};
class Circle:public Shape
{
    public:
    Circle(float r=0):radius(r){}
    float printArea() const
    {
        return 3.14159*radius*radius;
    }
    private:
    float radius;
};
int main()
{
    Shape *shapes[3];
    shapes[0]=new Rectangle(3.0,4.0);
    shapes[1]=new Triangle(4.0,5.0);
    shapes[2]=new Circle(6.0);
    for(int i=0;i<3;i++)
    {
        cout<<"Area of shape "<<i+1<<": "<<shapes[i]->printArea()<<endl;
        delete shapes[i];
    }
    system("pause");
    return 0;
}
