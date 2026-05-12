#ifndef SCHOOL_H
#define SCHOOL_H
#include <string>
class teacher
{
public:
    teacher(std::string name1,int age, std::string sex1, std::string address1, int phone_number1, std::string title1) 
    : name(name1), age(age), sex(sex1), address(address1), phone_number(phone_number1), title(title1) {};
    ~teacher() {};
    std::string name;
    int age;
    std::string sex;
    std::string address;
    int phone_number;
    std::string title;
    void display();
};
class Cadre
{
public:
    Cadre(std::string name1,int age, std::string sex1, std::string address1, int phone_number1, std::string post1) 
    : name(name1), age(age), sex(sex1), address(address1), phone_number(phone_number1), post(post1) {};
    ~Cadre() {};
    std::string name;
    int age;
    std::string sex;
    std::string address;
    int phone_number;
    std::string post;
    void display();
};
class teacher_cadre:public teacher,public Cadre
{
    public:
    teacher_cadre(std::string name1,int age, std::string sex1, std::string address1, int phone_number1, std::string title1,
                  std::string post1, int wages1)
    : teacher(name1, age, sex1, address1, phone_number1, title1), Cadre(name1, age, sex1, address1, phone_number1, post1), wages(wages1) {}
    ~teacher_cadre() {};
    int wages;
    void show();

};
#endif