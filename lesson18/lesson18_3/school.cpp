#include <iostream>
#include "school.h"
using namespace std;
void teacher::display()
{
    cout<<"Teacher's Information:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sex: "<<sex<<endl;
    cout<<"Address: "<<address<<endl;  
    cout<<"Phone Number: "<<phone_number<<endl;
    cout<<"Title: "<<title<<endl;
}
void Cadre::display()
{
    cout<<"Cadre's Information:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Sex: "<<sex<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Phone Number: "<<phone_number<<endl;
    cout<<"Post: "<<post<<endl;
}
void teacher_cadre::show()
{
    cout<<"Teacher-Cadre's Information:"<<endl;
    teacher::display();
    cout<<"Post: "<<post<<endl;
    cout<<"Wages: "<<wages<<endl;
}