#include <iostream>
#include <string>
using namespace std;
class Student                        
{public: 
  Student(int n, string na, char s) : num(n), name(na), sex(s) {}
  void display();
 protected :                       
    int num;
    string name;
    char sex;
};

void Student::display()
   {cout<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"sex: "<<sex<<endl;
   }
   
class Student1: protected Student     //��protected�̳з�ʽ����һ��������
{public:
    Student1(int n, string na, char s, int a, string ad)
        : Student(n, na, s), age(a), addr(ad) {}
   void display1();
 private:
   int age;                          
   string addr;
};

void Student1::display1()
    {display();       //���û���ı�����Ա���Ϸ�
     cout<<"age: "<<age<<endl;         //�����������˽�г�Ա���Ϸ�
     cout<<"address: "<<addr<<endl;    //�����������˽�г�Ա���Ϸ�
    }

int main()
{ Student1 stud1(1001, "Alice", 'F', 20, "Beijing");                      //stud2student2Ķ
  stud1.display1();  
  system("pause");              
  return 0;
}