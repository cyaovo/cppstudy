#include <iostream>
#include <string>
using namespace std;
class Student
{public:
  Student(int m, string n, char s) : num(m), name(n), sex(s) {}
  ~Student() {}
  void display()
    {cout<<"num: "<<num<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"sex: "<<sex<<endl;}
 private :
   int num;
   string name;
   char sex;
};   

class Student1: private Student
 {public:
    Student1(int m, string n, char s, int a, string ad)
      : Student(m, n, s), age(a), addr(ad) {}
   void display_1()
       {display();
       cout<<"age: "<<age<<endl;         
       cout<<"address: "<<addr<<endl;}   
  private:
       int age;
       string addr;
 };
 
int main()
 {Student1 stud1(1001, "Alice", 'F', 20, "Beijing");
  //stud1.display(); //错误：无法访问基类的public成员
  stud1.display_1();
  
  Student stud2(1002, "Bob", 'M');
  stud2.display();
  system("pause");
  return 0;
} 
