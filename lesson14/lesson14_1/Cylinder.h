#ifndef CYLINDER_H
#define CYLINDER_H
class Cylinder 
{ public:
    Cylinder (double h=1,double r=1, double x1=0, double y1=0);  //有默认参数的构造函数
    Cylinder (const Cylinder &a);   //复制构造函数
    ~Cylinder ();      //析构函数
    double area() const;      //求圆柱面积
    double volume() const;   //求圆柱体积
    friend void set_value( Cylinder &a);  //定义友元函数，输入圆柱数据 
    friend void show_value(const Cylinder &a);  //定义友元函数，输出圆柱数据 
  private:
    double height;   //高度
    double radius;   //半径
    double x;       //底面圆心x坐标
    double y;       //底面圆心y坐标
};
#endif