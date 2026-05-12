#ifndef STU_H
#define STU_H
#include <cstring>
#include <iostream>
using namespace std;
struct stu
{
    int num;
    string name;
    float score[3];
    void infprint();
    void input();
};
void scorestatistics(stu* p,int n);
 
#endif