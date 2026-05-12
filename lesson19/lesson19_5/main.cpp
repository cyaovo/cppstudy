class A                         //����
{public:
  int i;
 protected:
  void f2( );
  int j;
 private:
  int k;
};

class B: public A              //public��ʽ
{public:
   void f3( );
 protected:
   int m;
 private:
  int n;
};

class C: public B           //protected��ʽ
{public:
   void f4( );
 private:
   int p;
};
int main()
{
    A a1;
    B b1;
    C c1;
    return 0;
    //(1) b1.i=10; //正确，i是A的public成员，通过B的对象访问，仍然是public权限
    // b1.j=20; //错误，j是A的protected成员，通过B的对象访问，变为private权限
    // b1.k=30; //错误，k是A的private成员，不能通过B的对象访问
    //(2) f3可以调用f2，因为f2是A的protected成员，B的成员函数可以访问其基类的protected成员
    //f3可以调用f1，因为f1是A的public成员，B的成员函数可以访问其基类的public成员
    //(3)f3可以引用i，因为i是A的public成员，B的成员函数可以访问其基类的public成员
    //f3可以引用j，因为j是A的protected成员，B的成员函数可以访问其基类的protected成员
    //f3不能引用k，因为k是A的private成员，B的成员函数不能访问其基类的private成员
    //(4) c1.i=10; //正确，i是A的public成员，通过C的对象访问，仍然是public权限
    // c1.j=20; //错误，j是A的protected成员，通过C的对象访问，变为private权限
    // c1.k=30; //错误，k是A的private成员，不能通过C的对象访问
    //c1.m=40; //错误，m是B的protected成员，通过C的对象访问，变为private权限
    //c1.n=50; //错误，n是B的private成员，不能通过C的对象访问
    //c1.p=60; //错误，p是C的private成员，不能通过C的对象访问
    //(5)c1.f1(); //正确，f1是A的public成员，通过C的对象访问，仍然是public权限
    //c1.f2(); //错误，f2是A的protected成员，通过C的对象访问，变为private权限
    //c1.f3(); //正确，f3是B的public成员，通过C的对象访问，变为public权限
    //c1.f4(); //正确，f4是C的public成员，通过C的对象访问，仍然是public权限
    //(6)f4可以调用f3，因为f3是B的public成员，C的成员函数可以访问其基类的public成员
    //f4可以调用f2，因为f2是A的protected成员，C的成员函数可以访问其基类的protected成员
    //f4可以调用f1，因为f1是A的public成员，C的成员函数可以访问其基类的public成员
}