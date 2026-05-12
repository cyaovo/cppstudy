#include <iostream>
using namespace std;
class Shape
{
    public:
    virtual float printArea() const = 0;
};
class Circle : public Shape
{
    public:
    Circle(float r = 0) : radius(r) {}
    float printArea() const
    {
        return 3.14159 * radius * radius;
    }
    private:
    float radius;
};
class Square : public Shape
{
    public:
    Square(float s = 0) : side(s) {}
    float printArea() const
    {
        return side * side;
    }
    private:
    float side;
};
class Rectangle : public Shape
{
    public:
    Rectangle(float l = 0, float w = 0) : length(l), width(w) {}
    float printArea() const
    {
        return length * width;
    }
    private:
    float length;
    float width;
};
class Triangle : public Shape
{
    public:
    Triangle(float b = 0, float h = 0) : base(b), height(h) {}
    float printArea() const
    {
        return 0.5 * base * height;
    }
    private:
    float base;
    float height;
};
class Trapezoid : public Shape
{
    public:
    Trapezoid(float a = 0, float b = 0, float h = 0) : sideA(a), sideB(b), height(h) {}
    float printArea() const
    {
        return 0.5 * (sideA + sideB) * height;
    }
    private:
    float sideA;
    float sideB;
    float height;
};
int main()
{
    Circle circ(6.0);
    Square sqr(4.0);
    Rectangle rect(3.0, 4.0);
    Triangle tri(4.0, 5.0);
    Trapezoid trap(3.0, 4.0, 5.0);
    Shape *pt[5]={&circ,&sqr,&rect,&tri,&trap};
    for(int i=0;i<5;i++)
    {
        cout<<"第"<<i+1<<"个图形的面积为："<<pt[i]->printArea()<<endl;
    }
    float totalArea=0;
    for(int i=0;i<5;i++)
    {
        totalArea+=pt[i]->printArea();
    }
    cout<<"五个图形的总面积为："<<totalArea<<endl;
    system("pause");
    return 0;
}