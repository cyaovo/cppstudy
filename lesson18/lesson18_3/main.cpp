#include<iostream>
#include "school.h"
using namespace std;
int main()
{
    //teacher_cadre(std::string name1,int age, std::string sex1, std::string address1, int phone_number1, std::string title1,
    //              std::string post1, int wages1)
    teacher_cadre Alice("Alice",30,"Female","123 Main St",1234567890,"Professor","Manager",5000);
    int age1,age2;
    age1=Alice.teacher::age;
    age2=Alice.Cadre::age;
    cout<<"Alice's age from teacher class: "<<age1<<endl;
    cout<<"Alice's age from Cadre class: "<<age2<<endl;
    Alice.show();
    system("pause");
    return 0;
}