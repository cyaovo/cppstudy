#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    Person(string n, int a, string g, string addr, string ph)
        : name(n), age(a), gender(g), address(addr), phone(ph) {}
    virtual void display() const = 0;
};
class Teacher : public Person
{
    public:
    string title;
    Teacher(string n, int a, string g, string addr, string ph, string title)
        : Person(n, a, g, addr, ph), title(title) {}
    void display() const;
};
class Cadre : public Person
{   
    public:
    string post;
    Cadre(string n, int a, string g, string addr, string ph, string pos)
        : Person(n, a, g, addr, ph), post(pos) {}
    void display() const;
};
class TeacherCadre : public Teacher, public Cadre
{
    public:
    int wage;
    TeacherCadre(string n, int a, string g, string addr, string ph, string title, string pos, int w)
        : Teacher(n, a, g, addr, ph, title), Cadre(n, a, g, addr, ph, pos), wage(w) {}
    void display() const;
};
void Teacher :: display() const
{
    cout << "教师信息：" << endl;
    cout << "姓名: " << name << endl;
    cout << "年龄: " << age << endl;
    cout << "性别: " << gender << endl;
    cout << "地址: " << address << endl;
    cout << "电话: " << phone << endl;
    cout << "职称: " << title << endl;
    cout << "------------------------" << endl;
}
void Cadre :: display() const
{
    cout << "干部信息：" << endl;
    cout << "姓名: " << name << endl;
    cout << "年龄: " << age << endl;
    cout << "性别: " << gender << endl;
    cout << "地址: " << address << endl;
    cout << "电话: " << phone << endl;
    cout << "职务: " << post << endl;
    cout << "------------------------" << endl;
}
void TeacherCadre :: display() const
{
    cout << "教师兼干部信息：" << endl;
    cout << "姓名: " << Teacher::name << endl;
    cout << "年龄: " << Teacher::age << endl;
    cout << "性别: " << Teacher::gender << endl;
    cout << "地址: " << Teacher::address << endl;
    cout << "电话: " << Teacher::phone << endl;
    cout << "职称: " << title << endl;
    cout << "职务: " << post << endl;
    cout << "工资: " << wage << endl;
    cout << "------------------------" << endl;
}
    
int main()
{
    TeacherCadre tc1("张三", 40, "男", "北京市", "55", "教授", "主任", 3);
    TeacherCadre tc2("李四", 45, "女", "上海市", "44", "副教授", "主任", 2);
    TeacherCadre tc3("王五", 38, "男", "广州市", "33", "讲师", "组长", 1);
    TeacherCadre tc4("赵六", 50, "女", "深圳市", "22", "教授", "院长",4);
    TeacherCadre tc5("钱七", 42, "男", "杭州市", "11", "副教授", "主任", 6);
    TeacherCadre *ptc[5] = {&tc1, &tc2, &tc3, &tc4, &tc5};
    for(int i = 0; i < 5; i++)
    {
        ptc[i]->display();
    }
    system("pause");
    return 0;
}


    