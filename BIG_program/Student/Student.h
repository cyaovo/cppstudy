#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
const int N=3;
struct Student
{
    int num;           //学号 
    string name;        //姓名，用字符串 
    float score[N];       //3门课 
    float ave;          //3门课的平均分
    int  rank;          //排名//仅在使用sort_average函数后有效
};

void ReadFromFile(Student *stu, int n);  //从文件读入学生数据
void input(Student *stu, int n);  // 输入学生数据
void print(Student *stu, int n); //输出学生数据, 包括：学号、姓名、3门课成绩、平均分数
void average(Student *stu, int n);  // 求每个学生三门课的平均分
void sort_average(Student *stu, int n);  //按平均成绩从高到低对学生进行排序
void top1(Student *stu, int n); 	   // 输出排名第1的学生数据，包括：学号、姓名、3门  课成绩、平均分数，排名
void sort_name(Student *stu, int n);  //按姓名对学生进行排序
void print_fail(Student *stu, int n);    // 输出有课程不及格的学生的数据
void topmath(Student *stu, int n);    // 输出数学的最高分数
void score_average(Student *stu, float *avg, int n);  //求全班每门课的平均分,求出的每门课的平   均分存储在avg中，在主函数中再输出第门课的平均分
void print_avg(float *avg);   //输出全班每门课的平均分



#endif