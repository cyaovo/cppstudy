#include <iostream>
#include <string>
using namespace std;
class Student
{public:
  Student() {}
  ~Student() {}
  void get_value()
   {cin>>num>>name>>sex;}
  void display( )
    {cout<<"num: "<<num<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"sex: "<<sex<<endl;}
 private :
   int num;
   string name;
   char sex;
};   

class Student1: public Student
 {public:
   void get_value_1()
    {cin>>age>>addr;}
   void display_1()
    {  display();      //调用基类的display函数
       cout<<"age: "<<age<<endl;          //显示年龄
       cout<<"address: "<<addr<<endl;}    //显示地址
  private:
       int age;
       string addr;
 };
 
int main()
 {Student1 stud1;
  stud1.get_value();
  stud1.get_value_1();
  stud1.display();
  stud1.display_1();
  system("pause");
  return 0;
} 