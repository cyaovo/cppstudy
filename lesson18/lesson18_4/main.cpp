#include <iostream>
#include <string>
using namespace std;
class Student                             
 {public:                                  
   Student(int n,string nam)              
    {num=n;
     name=nam;
    }
    ~Student()         
    {cout<<'\n'<<"Student Destructor: "<<name;
    }
   void display()                     
    {cout<<"num:"<<num<<endl<<"name:"<<name<<endl;}
  protected:                               
    int num;
    string name;
};


class BirthDate                               
 {public:
    BirthDate(int y,int m,int d): year(y),month(m),day(d){}                  
    void display()
    {
        cout<<"Birth date:"<<year<<"-"<<month<<"-"<<day<<endl;
    }                         
    void change(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
    }            
  private:
    int year;
    int month;
    int day;
};

class Student1: public Student              
 {public:
   Student1(int n,string nam,int n1,string nam1,int a,string ad,int y,int m,int d):
       Student(n,nam),monitor(n1,nam1),birthdate(y,m,d)               
    {age=a;                                 
     addr=ad;
    }
    ~Student1()             
    {cout<<'\n'<<"Student1 Destructor: "<<name;
    }
   void show( )
    {cout<<"This student is:"<<endl;
     display();                               
     cout<<"age: "<<age<<endl;
     cout<<"address: "<<addr<<endl;
     birthdate.display();
    }
    
   void show_monitor()                        
    {cout<<endl<<"Class monitor is:"<<endl;
     monitor.display();                      
    }
    void birthdatechange(int y,int m,int d)
    {
        birthdate.change(y,m,d);
    }//由于birthdate是private的，不能直接访问，只能通过public函数访问，这里给出一个接口
   private:                                
    Student monitor;                       
    int age;
    string addr;
    BirthDate birthdate;
};
int main()
{
    /*Student1(int n,string nam,int n1,string nam1,int a,string ad,int y,int m,int d):
       Student(n,nam),monitor(n1,nam1),birthdate(y,m,d)               
    {age=a;                                 
     addr=ad;
    }*/
    Student1 stu1(1001,"Tom",1002,"Jack",20,"SYSU 162",2000,5,15);
    stu1.show();
    stu1.show_monitor();
    cout<<endl;
    cout<<endl;
    stu1.birthdatechange(1999,4,20);
    stu1.show();

    system("pause");
    return 0;
}
